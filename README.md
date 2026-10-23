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

<img src="./rfid-door-demo.svg" width="100%" alt="Animated RFID card access demonstration"/>

</div>

## ═══ 01 · PROJECT OVERVIEW ═══

### 1.1 Introduction

Access control is an essential component of modern security systems used in residential buildings, laboratories, offices, industrial facilities, and restricted areas. Traditional mechanical keys provide a simple method of entry, but they can be lost, duplicated, or transferred between individuals without centralized authorization.

The **RFID Smart Access Control System** introduces a contactless alternative based on Radio-Frequency Identification (RFID). The system enables a user to present an RFID card or tag to a reader installed near a door. A microcontroller reads the card identifier, evaluates it against a predefined authorization list, and determines whether access should be granted or denied.

An authorized card activates a servo motor that simulates the unlocking mechanism. An unauthorized card leaves the system locked and may trigger an audible warning through a buzzer.

The prototype is implemented using an Arduino UNO, an MFRC522 RFID reader, an SG90 servo motor, and optional status indicators. It combines hardware interfacing, embedded C++ programming, digital communication, state-based control, and experimental validation in one integrated engineering project.

### 1.2 Project Objectives

The primary objectives are:

- Develop a contactless identification system using RFID technology.
- Interface an MFRC522 reader with an Arduino UNO through SPI communication.
- Implement an authorization algorithm based on registered card identifiers.
- Control a servo motor to simulate door locking and unlocking.
- Provide feedback for successful and unsuccessful authentication.
- Evaluate response time, reliability, usability, and operational limitations.
- Establish a foundation for future enhancements involving secure credentials, event logging, and network connectivity.

### 1.3 Project Scope

This implementation focuses on a low-cost, educational access-control prototype. The servo represents a small locking mechanism or model door rather than a full-size physical security lock.

The baseline design operates locally without requiring an internet connection, cloud service, or external database.

---

## ═══ 02 · SYSTEM ARCHITECTURE ═══

### 2.1 High-Level Architecture

The system consists of four principal functional layers:

1. **Identification Layer:** The RFID card communicates with the MFRC522 reader.
2. **Processing Layer:** The Arduino reads the card UID and performs the authorization check.
3. **Actuation Layer:** The servo motor changes between locked and unlocked positions.
4. **Feedback Layer:** LEDs and an optional buzzer communicate the authentication result.


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


![image alt](https://github.com/BenkhiraAhmedBaderEddine1/Arduino-RFID-Door-Lock-System/blob/main/Capture%20d%E2%80%99%C3%A9cran%202026-04-16%20200028---.png?raw=true)


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
