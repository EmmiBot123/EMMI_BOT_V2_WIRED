const int pinl = 13;
const int pinr = 14;
const int pinl1 = 27;
const int pinr2 = 26;


void setup() {
  pinMode(pinl, OUTPUT);
pinMode(pinr, OUTPUT);
pinMode(pinl1, OUTPUT);
pinMode(pinr2, OUTPUT);

  pinMode(32, OUTPUT);
  ledcSetup(4,5000,8);
ledcAttachPin(19,4);

  pinMode(39, INPUT);
    digitalWrite(32, LOW);
  ledcWriteTone(4,261);
   delay(125);
  digitalWrite(pinl, HIGH);
  digitalWrite(pinr, LOW);
  digitalWrite(pinl1, LOW);
  digitalWrite(pinr2, HIGH);

}

void loop() {
    if (digitalRead(39)) {
      digitalWrite(32, HIGH);
      ledcWriteTone(4,0);
      digitalWrite(pinl, LOW);
      digitalWrite(pinr, LOW);
      digitalWrite(pinl1, LOW);
      digitalWrite(pinr2, LOW);
    }

}