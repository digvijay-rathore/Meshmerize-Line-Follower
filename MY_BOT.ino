const int pin_lm_a = A0;
const int pin_lm_b = A1;
const int pin_rm_a = A2;
const int pin_rm_b = A3;
const int pwm_lm = 10;
const int pwm_rm = 11;

int a[8];

void setup()
{
 pinMode(pin_lm_a, OUTPUT);
 pinMode(pin_lm_b, OUTPUT);
 pinMode(pin_rm_a, OUTPUT);
 pinMode(pin_rm_b, OUTPUT);
 pinMode(pwm_lm, OUTPUT);
 pinMode(pwm_rm, OUTPUT);

 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(4, INPUT);
 pinMode(5, INPUT);
 pinMode(6, INPUT);
 pinMode(7, INPUT);
 pinMode(8, INPUT);
 pinMode(9, INPUT);
}

void loop()
{
 readline();
 
 if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == LOW && a[4] == LOW && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH )
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == LOW && a[4] == HIGH && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 0);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, LOW);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == HIGH && a[4] == LOW && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 0);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, LOW);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == LOW && a[3] == HIGH && a[4] == HIGH && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 0);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, LOW);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == HIGH && a[4] == HIGH && a[5] == LOW && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 0);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, LOW);
 }
 else if(a[0] == HIGH && a[1] == LOW && a[2] == HIGH && a[3] == HIGH && a[4] == HIGH && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 0);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, LOW);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == HIGH && a[4] == HIGH && a[5] == HIGH && a[6] == LOW && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 0);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, LOW);
 }
 else if(a[0] == LOW)
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
  delay(50);
  analogWrite(pwm_lm, 75);
  analogWrite(pwm_rm, 75);
  digitalWrite(pin_lm_a, HIGH);
  digitalWrite(pin_lm_b, LOW);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
  delay(190);
 }
 else if(a[7] == LOW)
 {
  analogWrite(pwm_lm, 70);
  analogWrite(pwm_rm, 70);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, HIGH);
  delay(50);
  analogWrite(pwm_lm, 75);
  analogWrite(pwm_rm, 75);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, HIGH);
  digitalWrite(pin_rm_a, HIGH);
  digitalWrite(pin_rm_b, LOW);
  delay(190);
 }
 else if(a[0] == HIGH && a[1] == HIGH && a[2] == HIGH && a[3] == HIGH && a[4] == HIGH && a[5] == HIGH && a[6] == HIGH && a[7] == HIGH)
 {
  analogWrite(pwm_lm, 0);
  analogWrite(pwm_rm, 0);
  digitalWrite(pin_lm_a, LOW);
  digitalWrite(pin_lm_b, LOW);
  digitalWrite(pin_rm_a, LOW);
  digitalWrite(pin_rm_b, LOW);
  delay(250);
 }
}

void readline()
{
 int i;
 
 for(i = 0 ; i < 8 ; i += 1)
  a[i] = digitalRead(2 + i);
}
