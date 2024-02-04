// the pins the lights and button are connected to!
int red = 18;
int yellow = 19;
int green = 20;
int white = 27;
int blue = 28;
int button1 = 21;

void setup() {
  // put your setup code here, to run once:

  // set the lights to outputs (so we can turn them on or off!)
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);

  // set the button to input (so we can read the button!)
  pinMode(button1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  sequence2();

  // the end of the loop function, the loop will be run again!
}

void sequence1() {
  // if the button has a high voltage, we are not pressing it, so just exit this interation the loop and try again
  if(digitalRead(button1)) return;

  int lights[] = {red, yellow, green, white, blue};
  long randInt;
  long prev = 0;
 
  // run 1

  digitalWrite(white, HIGH);
  delay(1000);
  digitalWrite(white, LOW);

  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(blue, LOW);

  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);

  // run 2

  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);

  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);

  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);

  digitalWrite(white, HIGH);
  delay(500);
  digitalWrite(white, LOW);

  // run 3

  digitalWrite(red, HIGH);
  delay(250);
  digitalWrite(red, LOW);

  digitalWrite(blue, HIGH);
  delay(250);
  digitalWrite(blue, LOW);

  digitalWrite(yellow, HIGH);
  delay(250);
  digitalWrite(yellow, LOW);

  digitalWrite(white, HIGH);
  delay(250);
  digitalWrite(white, LOW);

  digitalWrite(green, HIGH);
  delay(250);
  digitalWrite(green, LOW);

  // run 4

  delay(500);
  for (int i = 0; i < 20; i++) {
    randInt = random(5);
    if (randInt == prev) {
      if (randInt == 0) {
        randInt++;
      } else {
        randInt--;
      }  
    } 
    digitalWrite(lights[randInt], HIGH);
    delay(500);
    digitalWrite(lights[randInt], LOW);
    prev = randInt;
  }
}

void sequence2() {
  if(digitalRead(button1)) return;

  int lights[] = {red, yellow, green, white, blue};
  long randInt;
  long prev = 0;

  for (int i = 0; i < 200; i++) {
    randInt = random(5);
    if (randInt == prev) {
      if (randInt == 0) {
        randInt++;
      } else {
        randInt--;
      }  
    } 
    digitalWrite(lights[randInt], HIGH);
    delay(100);
    digitalWrite(lights[randInt], LOW);
    prev = randInt;
  }

}