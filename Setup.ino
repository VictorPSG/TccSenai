

void setup(){
    Serial.begin(9600);
  
    //PINMODE BIBLIOTECA SERVO  
          //Braco robotico
  servo1.attach(3);  
  servo2.attach(4);
  servo3. attach(2);
  servo4. attach(5);
          //Separador
  separador.attach(10);        

            //PINMODE
  pinMode (analogRead(0),INPUT);          
  pinMode(botSalva, INPUT_PULLUP);
  pinMode(esteira, OUTPUT);
  pinMode(infra, INPUT);

  //Sensor de Cor
  pinMode(s0, OUTPUT);  
  pinMode(s1, OUTPUT);  
  pinMode(s2, OUTPUT);  
  pinMode(s3, OUTPUT);  
  pinMode(out, INPUT);  
  pinMode(pinoledverm, OUTPUT);  
  pinMode(pinoledverd, OUTPUT);  
  pinMode(pinoledazul, OUTPUT);  
  Serial.begin(9600);  
  digitalWrite(s0, HIGH);  
  digitalWrite(s1, LOW);



  beginServo();
}
