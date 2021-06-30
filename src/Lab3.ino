/*
 * Project Lab3
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);

}

// loop() runs over and over again, as quickly as it can execute.
//D7 = green
//D6 = red
//D5 = blue
void loop() {
  analogWrite(D7, 0);
  analogWrite(D5, 0);
  analogWrite(D6, 255);
  delay(1000);
  analogWrite(D7, 255);
  analogWrite(D6, 0);
  delay(1000);
  analogWrite(D5, 255);
  analogWrite(D7, 0);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 255);
  analogWrite(D7, 25);
  delay(1000);
  analogWrite(D6, 255);
  analogWrite(D7, 80);
  delay(1000);
  analogWrite(D7, 0);
  analogWrite(D5, 255);
  analogWrite(D6, 255);
  delay(1000);
  analogWrite(D6, 0);
  analogWrite(D7, 255);
  delay(1000);



}