

//PWM
int enL = 5;

//signal pins
int inL1 = 9;
int inL2 = 10;


void setup() {
  
  pinMode(enL, OUTPUT);
  pinMode(inL1, OUTPUT);
  pinMode(inL2, OUTPUT);

}

void loop() {
  mpower(80,3000);
}

//void stopbot(){
//  mpower(-maxpower,-maxpower);
//  delay(10);
//  mpower(0,0);
//  delay(10);
//  }
void mpower(int m1, int t) {

    digitalWrite(inL1, HIGH);//Direction B
    digitalWrite(inL2, LOW);
    delay(t);
    digitalWrite(inL1, LOW);//waiting time
    digitalWrite(inL2, LOW);
    delay(2000);
    digitalWrite(inL1, LOW);//Direction F
    digitalWrite(inL2, HIGH);
    delay(t); //Value to possitive
    digitalWrite(inL1, LOW);//waiting time
    digitalWrite(inL2, LOW);
    delay(2000);
    
  analogWrite(enL, m1); //Speed Write as PWM
}
