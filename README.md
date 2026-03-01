# 🗑️ Smart Dustbin – Arduino Based

**Smart Dustbin** is an Arduino-powered automatic waste bin that uses an ultrasonic sensor to detect nearby objects and automatically open the lid using a servo motor. This touchless system promotes hygiene and prevents the spread of germs.

---

## 📌 Project Description

This project uses:
- An ultrasonic sensor to measure distance
- A servo motor to control the lid
- Red and green LEDs for status indication

When a hand (or object) is detected within 30 cm, the lid opens automatically. After 2 seconds, it closes again.

---

## 🔧 Components Required

- Arduino Uno (or compatible board)
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90 or similar)
- 1 × Green LED
- 1 × Red LED
- 2 × 220Ω Resistors
- Jumper wires
- Breadboard
- Dustbin with attachable lid

---

## 🔌 Pin Configuration

| Component            | Arduino Pin |
|----------------------|-------------|
| Ultrasonic Trig Pin  | 9           |
| Ultrasonic Echo Pin  | 10          |
| Servo Motor Signal   | 6           |
| Green LED            | 7           |
| Red LED              | 8           |

---

## ⚙️ How It Works

1. The ultrasonic sensor continuously measures the distance in front of the bin.
2. If the detected distance is **≤ 30 cm**:
   - The servo rotates to 90° (opens lid)
   - Green LED turns ON
   - Red LED turns OFF
   - Waits for 2 seconds
3. If no object is detected within range:
   - Servo returns to 0° (closes lid)
   - Green LED turns OFF
   - Red LED turns ON

