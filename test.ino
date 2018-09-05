#include <hfile.h>

Morse morse(13);
void dly(){
  delay(1000);
  }
void setup()
{
}

void loop()
{
  //MUCAHIT means
  //LL SSL LSLS SL SSSS SS L
  morse.dash(2); dly(); //M
  morse.dot(2); morse.dash(); dly(); //U
  morse.dash(); morse.dot(); morse.dash(); morse.dot(); dly();//C
  morse.dot(); morse.dash(); dly;//A
  morse.dot(4); dly;
  morse.dot(2); dly();
  morse.dash(); dly();
  /*morse.dot(); morse.dot(); morse.dot();
  morse.dash(); morse.dash(); morse.dash();
  morse.dot(); morse.dot(); morse.dot();*/
  delay(3000);
}
