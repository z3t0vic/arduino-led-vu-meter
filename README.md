# Sound-Reactive LED Visualizer (VU Meter)

This project is a dynamic **LED VU Meter** that reacts to ambient noise in real-time. Using an **Arduino** and a high-sensitivity sound sensor, it visualizes sound intensity by lighting up a sequence of LEDs—the louder the sound, the more LEDs illuminate.

---

## 🛠 Project Features

* **Real-time Visualization:** High-speed sound sampling for instant LED feedback.
* **Adjustable Sensitivity:** Fine-tune the reaction threshold via the sensor's onboard potentiometer.
* **Scalable Output:** Designed for an 8-LED sequence, but easily expandable.

---

## 🔌 Hardware Configuration

### Sound Sensor (KY-037) Wiring

| Sensor Pin | Arduino Pin | Description |
| :--- | :--- | :--- |
| **VCC (+)** | 5V | Power Supply |
| **GND (G)** | GND | Ground |
| **A0** | Analog A0 | Analog Sound Signal Input |

### LED Setup

* **Signal Pins:** Connected to Arduino Digital Pins **3 through 10**.
* **Protection:** Each LED is paired with a **220Ω resistor** to prevent damage.
* **Common Rail:** All LED cathodes are tied to the common Ground (GND).

---

## ⚙️ Setup and Calibration

1. **Assemble the Circuit:** Follow the wiring table above using a breadboard.
2. **Adjust the Potentiometer:** Rotate the brass screw on the blue sensor component until the LEDs react only when you make a sound (like a clap or snap).
3. **Monitor Levels:** Use the Serial Monitor to observe baseline noise levels and adjust the code's mapping range for peak performance in your specific environment.

---

## 🚀 Potential Applications

* Home theater lighting effects.
* Visual aid for hearing-impaired individuals.
* Interactive party decorations and sound-reactive art installations.
