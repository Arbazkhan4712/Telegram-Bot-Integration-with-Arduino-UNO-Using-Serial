int led = 13;
char input;
void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 delay(2000);
 Serial.print("type something :- ");
}

void loop() {
input = Serial.read();
delay(200);
Serial.print("You typed:  ");
Serial.print(input);
if (input == 'Y')
digitalWrite(led, HIGH);
if  (input == 'N')
digitalWrite(led, LOW);
}
