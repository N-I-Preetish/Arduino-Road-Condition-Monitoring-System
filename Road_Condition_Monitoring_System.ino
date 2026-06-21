#define trigPin 9
#define echoPin 10

#define greenLED 3
#define whiteLED 4
#define redLED 5

#define soundPin A0

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {

  long duration;
  int distance;

  // Ultrasonic Sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Sound Sensor
  int soundValue = analogRead(soundPin);

  // Serial Monitor Output
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm   ");

  Serial.print("Sound: ");
  Serial.println(soundValue);

  // Severe Pothole
  if (distance > 20 && soundValue > 64) {

    digitalWrite(greenLED, LOW);
    digitalWrite(whiteLED, LOW);
    digitalWrite(redLED, HIGH);

  }

  // Moderate Pothole
  else if (distance > 10) {

    digitalWrite(greenLED, LOW);
    digitalWrite(whiteLED, HIGH);
    digitalWrite(redLED, LOW);

  }

  // Normal Road
  else {

    digitalWrite(greenLED, HIGH);
    digitalWrite(whiteLED, LOW);
    digitalWrite(redLED, LOW);

  }

  delay(200);
}
