 //Setting up my Pins 
 //this is the dc motor which i used
const int motorPin = 13;
//this is an indicator pin
const int ledPin = 7 ;

//timer to count number of seconds
int timer;

void setup() {
  //making both pins as output mode 
 pinMode(ledPin, OUTPUT);
 pinMode(motorPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // if timer = 21600 seconds i.e ~= 6 hours then the motor will run else it won't
  if(timer == 21600){
    // digitally switching on the motor and led indicator
    digitalWrite(ledPin, HIGH);
    digitalWrite(motorPin,HIGH);
    // motor runs for 5 seconds and resets the timer
    delay(5000);
    timer = 0;
  }
  else{
   digitalWrite(ledPin, LOW);
    digitalWrite(motorPin,LOW);
    // delaying the motor by 1 sec and making the pins low to save power
  delay(1000);
  timer++;
  }
}
