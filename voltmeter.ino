int s1 = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(s1, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (analogRead(s1) >= 1023) {
    Serial.println("5+ volts");
  } else {
    Serial.print(analogRead(s1) / 180);
    Serial.println(" volts");
  }

}
