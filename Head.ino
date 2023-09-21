             //BIBLIOTECAS
#include <Servo.h>
#include <Adafruit_PWMServoDriver.h>

              //DEFINICAO ENTRADAS E SAIDAS 
#define esteira 8
#define botSalva 13
#define infra 12

            //SERVOS
Servo servo1;  
Servo servo2;
Servo servo3;
Servo servo4;
Servo separador;

            //IN = entradas analgicas //val = valor dos potenciometros
int IN1 = 1; 
int val;                                   //entradas analgicas = A0 A1 A2 A3 A4;
int IN0 = 0;                               //saidas servo braco= 2, 3, 4, 5;
int val1;                                  //esteira = 8;
int IN2 = 2;                               //Infravermelho = A5;
int val2;                                  //saidas servo separador = 10;
int IN3 = 3;
int val3;
int IN4 = 4;


           //Definiçao do separador
int corVermelho;
int corVerde;
int corAzul;
int invalido;

          //Definiçao sensor de cor
//Pinos de conexao do modulo TCS230  
const int s0 = 8;  
const int s1 = 9;  
const int s2 = 12;  
const int s3 = 11;  
const int out = 10;   
   
//Pinos dos leds  
int pinoledverm = 2;  
int pinoledverd = 3;  
int pinoledazul = 4;  
    
//Variaveis que armazenam o valor das cores  
int red = 0;  
int green = 0;  
int blue = 0;  
    
void writeServos(int nServo, int posicao);
void beginServos();
//Instanciando Objetos
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();











/*
  
 //void loop(){
  val = analogRead(IN0);     
  val = map(val, 0, 1052, 0, 179);
  servo1.write(val);  
  //Serial.println(val);
    
  val1 = analogRead(IN1);    
  val1 = map(val1, 0, 1052, 0, 179);     
  servo2.write(val1);
  
  val2 = analogRead(IN2);
  val2 = map(val2, 0, 1052, 0, 179);
  servo3.write(val2);
  
  val3 = analogRead(IN3);
  val3 = map(val3, 0, 1052, 0,179);
  servo4.write(val3); 
  delay(15);    

}
*/







 /*   int teste =salvaPosicao(val, val1, val2, val3);




void salvaPosicao(int s1, int s2, int s3, int s4){
  int t = sizeof(salva)/sizeof(int);
    salva[i]=s1;
    i++;
    salva[i]=s2;
    i++;
    salva[i]=s3;
    i++;
    salva[i]=s4;
    Serial.println("teste");
    return i;
}
*/


/*
void setup(){
  Serial.begin(9600);
  
  
  
  servo1.attach(3);  
  servo2.attach(4);
  servo3. attach(2);
  servo4. attach(5);

            //PINMODE
  pinMode (analogRead(0),INPUT);          
  pinMode(botSalva, INPUT_PULLUP);
  pinMode(esteira, OUTPUT);


}*/













 
