int red = 9;
int yellow = 10;
int green = 11;
int button = 12; //switch have been placed on pin 12
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT); 
  pinMode(button, INPUT);
  digitalWrite(green, HIGH);

}

void loop() {
  if (digitalRead(button) == HIGH){
        delay(15); 
        if (digitalRead(button) == HIGH) {
            // if the switch is HIGH, change the lights!
            changeLights();
            delay(15000); // wait for 15 seconds
        }
    }

}

void changeLights(){
   // yellow off, then turn red on for 5 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // red and yellow on for 2 seconds
    digitalWrite(yellow, HIGH);
    delay(2000);

     // turn off red and yellow, then turn on green
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(5000);

    // green off, yellow will turn on for 3 seconds
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(4000);

     
  
}
