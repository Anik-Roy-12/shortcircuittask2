int pPin;
int r =12;
int y=11;
int g=10;


void setup()
{
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(pPin, INPUT);
  
  unsigned long currentMillis = millis();
  unsigned long previousMillis_1 = 3000;
  unsigned long previousMillis_2 = 4000;
  unsigned long previousMillis_3 = 7000;
  
  const long interval_1 = 3000;
  const long interval_2 = 1000;
  const long interval_3 = 3000;
  
}

void loop()
{
  
  pPin = digitalRead(9);
  if(pPin= LOW){digitalWrite(r,HIGH);}
  
  else{
    
    
  
    
    
     if (currentMillis - previousMillis_1 >= interval_1) {
        previousMillis_2 = currentMillis_1;
       
	digitalWrite(r,HIGH); 
    digitalWrite(y,LOW); 
    digitalWrite(g,LOW);
       
       
   else if(currentMillis - previousMillis_2 >= interval_2) {
       
      previousMillis_3 = currentMillis_2;
    digitalWrite(y,HIGH); 
    digitalWrite(r,LOW); 
     digitalWrite(g,LOW); }
    
   else (currentMillis - previousMillis_3 >= interval_3) {
       
      previousMillis = currentMillis_3;
     
     digitalWrite(g,HIGH); 
    digitalWrite(y,LOW); 
     digitalWrite(r,LOW); }
    
  
  }
  
 
}