unsigned long tempoLed = millis();

void setup(){
  
  pinMode(9, OUTPUT);
  
}

void loop(){

  statusLed();
  
}

void statusLed(){

  if((millis() - tempoLed) < 500){
	digitalWrite(9, HIGH);
    
  }else{
  	digitalWrite(9, LOW);
    
  }  
  
  if((millis() - tempoLed) > 800){
  	tempoLed = millis();
  
  }
    
}