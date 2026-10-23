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

<div align="center">

<img src="./assets/rfid-door-demo.svg" width="100%" alt="Animated RFID card access demonstration"/>

</div>

## ◈ 01 — PROJECT OVERVIEW

The **RFID Smart Access Control System** is an embedded security prototype designed to demonstrate contactless identification and automated access control using an Arduino UNO and an MFRC522 RFID reader.

When an RFID card is presented, the reader retrieves its unique identifier (UID). The Arduino compares it with a predefined list of authorized cards. If the UID is authorized, an SG90 servo motor moves the demonstration lock to its unlocked position. Otherwise, access is denied and an optional buzzer can provide an alert.

The project combines RFID communication, embedded C++, authentication logic, and electromechanical actuation in a compact access-control prototype.

---

## ◈ 02 — SYSTEM ARCHITECTURE

```mermaid
flowchart TD
    A["RFID CARD / TAG"] --> B["MFRC522 RFID READER"]
    B -->|"SPI COMMUNICATION"| C["ARDUINO UNO R3"]
    C --> D{"UID AUTHORIZED?"}

    D -->|"YES"| E["ACCESS GRANTED"]
    E --> F["SG90 SERVO MOTOR"]
    F --> G["DOOR LOCK UNLOCKS"]

    D -->|"NO"| H["ACCESS DENIED"]
    H --> I["BUZZER ALERT"]
    I --> J["LOCK REMAINS ENGAGED"]

    classDef hardware fill:#142D2B,stroke:#50CDB5,color:#FFFFFF,stroke-width:2px
    classDef controller fill:#20272D,stroke:#D6B36A,color:#FFFFFF,stroke-width:2px
    classDef decision fill:#3A2B17,stroke:#F0B45A,color:#FFFFFF,stroke-width:2px
    classDef granted fill:#153A29,stroke:#4ADE80,color:#FFFFFF,stroke-width:2px
    classDef denied fill:#421F28,stroke:#FB7185,color:#FFFFFF,stroke-width:2px

    class A,B,F hardware
    class C controller
    class D decision
    class E,G granted
    class H,I,J denied
```
---

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
