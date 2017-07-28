# HeartCare
A real-time heart rate monitoring system

HeartCare is an application that gives a user real-time ECG readings. The app is connected via a MQTT server to a Genuino 101 circuit which consists of an ECG sensor and a GPS module. The Genuino 101 uses a ESP8266 module to transmit the ECG values and the patient’s location to a server. The app obtains the values from the server and displays a real time graph for the patient and doctor to monitor the heart rate.
