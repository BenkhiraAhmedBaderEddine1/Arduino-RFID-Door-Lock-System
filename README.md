<div align="center">

# ⬡ RFID SMART ACCESS CONTROL SYSTEM

### INTELLIGENT SECURITY • EMBEDDED SYSTEMS • AUTOMATED ACCESS

<br>

![Arduino](https://img.shields.io/badge/CONTROLLER-ARDUINO_UNO-123B3A?style=for-the-badge&logo=arduino&logoColor=7DE2D1)
![RFID](https://img.shields.io/badge/AUTHENTICATION-RFID-176B66?style=for-the-badge)
![SERVO](https://img.shields.io/badge/ACTUATOR-SERVO_LOCK-C5A46D?style=for-the-badge)
![C++](https://img.shields.io/badge/FIRMWARE-EMBEDDED_C%2B%2B-263238?style=for-the-badge&logo=cplusplus&logoColor=white)

<br>

**SCAN → AUTHENTICATE → UNLOCK**

<br>

<img src="https://placehold.co/900x360/0B1114/58C9B5?text=RFID+SMART+ACCESS+CONTROL&font=montserrat" width="100%" alt="RFID Smart Access Control System">

<br>

`ARDUINO UNO` &nbsp; • &nbsp; `MFRC522 RFID` &nbsp; • &nbsp; `SG90 SERVO` &nbsp; • &nbsp; `ACCESS CONTROL`

**Designed & Developed by Ahmed Bader Eddine Benkhira**

</div>

---

## ◈ 01 — PROJECT OVERVIEW

The **RFID Smart Access Control System** is an embedded security prototype that demonstrates contactless identification and automated access control using an Arduino UNO and an MFRC522 RFID reader.

When an RFID card or tag is presented, the reader retrieves its unique identifier (UID). The Arduino compares this identifier with a predefined list of authorized cards and determines whether access should be granted or denied.

For an authorized card, an SG90 servo motor moves a demonstration locking mechanism to its unlocked position. For an unauthorized card, the lock remains in its locked state and an optional buzzer can signal the denied attempt.

The project combines RFID communication, embedded C++, decision logic, and electromechanical actuation in a compact access-control system.

---

## ◈ 02 — SYSTEM ARCHITECTURE


flowchart TB
    CARD["RFID CARD / TAG"]
    READER["MFRC522 RFID READER"]
    MCU["ARDUINO UNO R3"]
    AUTH{"UID AUTHENTICATION"}
    SERVO["SG90 SERVO MOTOR"]
    LOCK["DOOR LOCK MECHANISM"]
    BUZZER["BUZZER / STATUS LED"]

CARD --> READER
    READER -->|"SPI"| MCU
    MCU --> AUTH

AUTH -->|"AUTHORIZED"| SERVO
    SERVO --> LOCK

AUTH -->|"UNAUTHORIZED"| BUZZER

classDef input fill:#102A2A,stroke:#58C9B5,color:#FFFFFF,stroke-width:2px
    classDef controller fill:#182326,stroke:#C5A46D,color:#FFFFFF,stroke-width:2px
    classDef decision fill:#3B2D18,stroke:#E5B567,color:#FFFFFF,stroke-width:2px
    classDef success fill:#123B2A,stroke:#4ADE80,color:#FFFFFF
    classDef denied fill:#3F1D28,stroke:#FB7185,color:#FFFFFF

class CARD,READER input
    class MCU controller
    class AUTH decision
    class SERVO,LOCK success
    class BUZZER denied


# Arduino-RFID-Door-Lock-System
An automated RFID-based physical security system engineered with Arduino UNO. Features a MFRC522 sensing interface for UID-validated entry and a servo-actuated locking mechanism for hands-free access control
#  RFID Smart Access Control System


      _________________________________________________
      |                                                |
      |          Arduino RFID Access Control           |
      |________________________________________________|
               |                                |
      [ RFID SCANNER ]                  [ SERVO MOTOR ]
      |    (MFRC522)   |                  |  (Lock Mech)  |
      |   __________   |                  |      ____     |
      |  |  ( (●) ) |  |       ____       |     /    \    |
      |  |   SCAN   |  |------|    |------|    | STOP |   |
      |  |   HERE   |  |      |UNO |      |     \____/    |
      |  |__________|  |      |____|      |      _||_     |
      |________________|        ||        |_____|____|____|
                                ||
                        [ BUZZER / LEDS ]
                         (Status Indicators)

          Key:   [*] Authorized Tag -> Servo Rotates (Open)
                 [!] Unauthorized   -> Buzzer Alarms (Locked)


                 





![image alt](https://github.com/BenkhiraAhmedBaderEddine1/Arduino-RFID-Door-Lock-System/blob/main/Capture%20d%E2%80%99%C3%A9cran%202026-04-16%20200028---.png?raw=true)

##  Project Overview
This project presents the design and implementation of a secure RFID-based access control system using Arduino UNO and MFRC522 RFID module.

The system grants access only to authorized RFID cards and controls a servo motor to simulate a door locking mechanism.

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------
-----------------------------------ben khira ahmed bader eddine-------------------------------------------------
----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------

##  Hardware Components
- Arduino UNO
- MFRC522 RFID Reader (SPI)
- SG90 Servo Motor
- Buzzer (optional)
- RFID Cards / Tags
- Breadboard & Jumper Wires

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------

##  System Architecture

1. RFID card is scanned
2. Arduino reads UID
3. UID is compared with authorized list
4. If matched → Door unlocks
5. If not matched → Access denied alert

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------

##  Features
- Multi-card authentication
- Automatic re-lock after timeout
- Unauthorized access detection
- Modular structured code
- Expandable system design

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------

##  Technologies Used
- C++ (Arduino IDE)
- Embedded Systems Programming
- SPI Communication Protocol
- Servo Motor Control

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------
-----------------------------------ben khira ahmed bader eddine-------------------------------------------------
----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------

##  Future Improvements
- EEPROM-based dynamic card registration
- LCD display integration
- IoT remote monitoring (ESP32)
- Access logging system

----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------
-----------------------------------ben khira ahmed bader eddine-------------------------------------------------
----------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------
![image alt](https://github.com/BenkhiraAhmedBaderEddine1/Arduino-RFID-Door-Lock-System/blob/main/ffqfq.png?raw=true)
##  Author
Ahmed Bader Eddine  
Bachelor Graduate  
GitHub: https://github.com/BenkhiraAhmedBaderEddine1
