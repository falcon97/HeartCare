# HeartCare
A real-time heart rate monitoring system

HeartCare is an application that gives a user real-time ECG readings. The app is connected via a MQTT server to a Genuino 101 circuit which consists of an ECG sensor and a GPS module. The Genuino 101 uses a ESP8266 module to transmit the ECG values and the patient’s location to a server. The app obtains the values from the server and displays a real time graph for the patient and doctor to monitor the heart rate.

#Inspiration
One of the team member's grandparent had undergone a bypass surgery. Post surgery, he had to be placed under constant monitoring because of the delicate situation. Since it was close to impossible to have any individual under a constant monitor and since not everyone can afford a nurse or a doctor, we realised that there was no mobile solution in the market that was effective enough to monitor the health situation of an individual. That's when we came up with the idea.

#What it does
HeartCare is an system that gives any user real-time ECG readings. An Android app is connected to a circuit which consists of an ECG sensor and a GPS module, which is interfaced with the Genuino 101. The Genuino 101 uses the ESP8266 WiFi module to transmit the ECG values and the patient’s location to a server. The app obtains the values from the server and displays a real time graph for the patient and doctor to monitor the heart rate. The ECG sensor is what sets apart the HeartCare system from other similar products in the market, because the ECG signal is accurate.

#How we built it
We used an AD8232, a GPS module, Arduino 101, ESP8266, Android studio to develop the app, a web console for uploading data to server (cloudmqtt.com)

#Challenges we ran into
Real time graph implementation in the Android Application
Accurate ECG readings
Getting a satellite lock in the GPS module

#Accomplishments that we're proud of
A contribution to a huge market, for a good social cause
A groundbreaking implementation
A great learning experience

#What we learned
We learnt to implement a real time graph in the android application.
We learned to configure an existing server and to also upload and download data.

#What's next for HeartCare
Provide heart rate in beats per minute
Include multiple health monitoring systems and not restricting it to just ECG, making it accessible to a wider market.
Size reduction
Ability to monitor multiple heart rates
