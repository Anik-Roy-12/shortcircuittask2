//tinkercad link added in about

int trigPin=7;
int echoPin=6;
long time;
int dis;

int RED_L=12;
int YELLOW_L=11;
int GREEN_L=10;
int BUTTON =8;
unsigned long st;
bool taskS = false;

unsigned long previousMillis = 0;
const long redT = 2500;
const long greenT = 2500;
const long yellowT = 1500;

int state = 1; 

void setup (){
  pinMode(RED_L, OUTPUT);
  pinMode(YELLOW_L, OUTPUT);
  pinMode(GREEN_L, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
  
}

void loop() {
 
digitalWrite (7,LOW);
delayMicroseconds(2);
digitalWrite (7,HIGH);
delayMicroseconds(10);
digitalWrite (7,LOW);
  
  time = pulseIn(6,HIGH);
  dis = time*(0.034/2);
  
  
  if (dis > 30 && dis < 330 ){
  
  if (digitalRead(BUTTON) == LOW) {
   
    digitalWrite(RED_L, HIGH);
    digitalWrite(YELLOW_L, LOW);
    digitalWrite(GREEN_L, LOW);
   
  } else {
    unsigned long currentMillis = millis();
    
    switch (state) {
      case 1: 
        if (currentMillis - previousMillis >= redT) {
          previousMillis = currentMillis;
          state = 2;
        }
        digitalWrite(RED_L, HIGH);
        digitalWrite(YELLOW_L, LOW);
        digitalWrite(GREEN_L, LOW);
        break;

      case 2: 
        if (currentMillis - previousMillis >= greenT) {
          previousMillis = currentMillis;
          state = 3;
        }
        digitalWrite(RED_L, LOW);
        digitalWrite(YELLOW_L, LOW);
        digitalWrite(GREEN_L, HIGH);
        break;

      case 3:
        if (currentMillis - previousMillis >= yellowT) {
          previousMillis = currentMillis;
          state = 1;
        }
        digitalWrite(RED_L, LOW);
        digitalWrite(YELLOW_L, HIGH);
        digitalWrite(GREEN_L, LOW);
      break;}}}


  else{
  
    st = millis();
    if( millis() - (st+1000) > 0 ){ taskS = true;}
  
    if (taskS) {digitalWrite(RED_L, HIGH);
    digitalWrite(YELLOW_L, LOW);
                digitalWrite(GREEN_L, LOW);}

  
  }}


