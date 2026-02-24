/*
  ============================================================
   Smart RFID-Based Access Control System
   Author: ben khira ahmed bader eddine
   Description:
   Secure RFID door lock system using Arduino UNO,
   MFRC522 RFID reader and SG90 servo motor.
  ============================================================
*/

#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
#define SS_PIN 10
#define RST_PIN 9
#define SERVO_PIN 6
#define BUZZER_PIN 7   
MFRC522 mfrc522(SS_PIN, RST_PIN);
Servo lockServo;
byte authorizedCards[][4] = {
  {0xA3, 0xB1, 0xC2, 0xD4},
  {0x12, 0x34, 0x56, 0x78}
};
const int totalCards = 2;
const int lockPosition = 0;
const int unlockPosition = 90;
const unsigned long unlockDuration = 5000; // 5 seconds
unsigned long unlockTime = 0;
bool isUnlocked = false;
void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();

  lockServo.attach(SERVO_PIN);
  pinMode(BUZZER_PIN, OUTPUT);

  lockDoor();

  Serial.println("=================================");
  Serial.println(" RFID Access Control System ");
  Serial.println(" System Ready... Scan your card ");
  Serial.println("=================================");
}

void loop() {

  if (isUnlocked && millis() - unlockTime >= unlockDuration) {
    lockDoor();
  }

  if (!mfrc522.PICC_IsNewCardPresent())
    return;

  if (!mfrc522.PICC_ReadCardSerial())
    return;

  Serial.println("\nCard detected!");
  printUID();

  if (isAuthorized(mfrc522.uid.uidByte)) {
    Serial.println("Access Granted ✅");
    unlockDoor();
  } else {
    Serial.println("Access Denied ❌");
    accessDeniedAlert();
  }

  mfrc522.PICC_HaltA();
}
bool isAuthorized(byte *uid) {

  for (int i = 0; i < totalCards; i++) {
    bool match = true;

    for (int j = 0; j < 4; j++) {
      if (uid[j] != authorizedCards[i][j]) {
        match = false;
        break;
      }
    }

    if (match) return true;
  }

  return false;
}

void unlockDoor() {
  lockServo.write(unlockPosition);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(200);
  digitalWrite(BUZZER_PIN, LOW);

  isUnlocked = true;
  unlockTime = millis();
}

void lockDoor() {
  lockServo.write(lockPosition);
  isUnlocked = false;
  Serial.println("Door Locked 🔒");
}

void accessDeniedAlert() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(150);
    digitalWrite(BUZZER_PIN, LOW);
    delay(150);
  }
}

void printUID() {
  Serial.print("UID: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    Serial.print(" ");
  }
  Serial.println();
}
