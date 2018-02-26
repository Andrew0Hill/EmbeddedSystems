void setup() {
  // put your setup code here, to run once:

  // LEFT WHEEL
  pinMode(9,INPUT);
  pinMode(8,OUTPUT);
  pinMode(11, OUTPUT);

  // RIGHT WHEEL
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {

  // BACKWWARDS
  analogWrite(9, 100);
  digitalWrite(8, HIGH);
  digitalWrite(11, LOW);

  // FORWARDS
  analogWrite(10, 100);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
}
