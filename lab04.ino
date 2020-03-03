int red = 2;
int yellow = 3;
int green = 4;
int blue = 5;
int multi = 6;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(multi, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(multi, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(500);
  for (int i = 0; i < 3; i += 1) {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
    delay(250);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    delay(250);
  }
  delay(2000);
  digitalWrite(multi, LOW);
  delay(500);
}
