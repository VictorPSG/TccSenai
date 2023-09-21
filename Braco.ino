void WriteServos(int nServo, int posicao){
  #define servoMin 205
  #define servoMax 409
  int pos = map (posicao, 0, 180, servoMin, servoMax);
  PWM.setPWM(nServo , 0,pos);
}
void beginServo(){
  #define frequencia 50

  PWM.begin();
  PWM.setPWMFreq(frequencia);
}
