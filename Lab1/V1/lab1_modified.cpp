// C++ code
//
/*
  Author: Yehor Seniuk
  
  s: dot dot dot
  e: dot
  n: dash dot
  i: dot dot
  u: dot dot dash
  k: dash dot dash
*/


int dot_time = 250;
int dash_time = 750;
int wait_time = 300; 
int letter_delay_time = 700; 
int word_delay_time = 2000; 

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop()
{
  s();
  e();
  n();
  i();
  u();
  k();
  delay(word_delay_time);
}

void dot()
{
	digitalWrite(LED_BUILTIN, HIGH);
  	delay(dot_time);
  	digitalWrite(LED_BUILTIN, LOW); 
  	delay(wait_time); 
}

void dash()
{
	digitalWrite(LED_BUILTIN, HIGH); 
  	delay(dash_time); 
  	digitalWrite(LED_BUILTIN, LOW); 
  	delay(wait_time); 
}

void s()
{
  	dot();
  	dot();
  	dot();
  	delay(letter_delay_time);
}

void e()
{
 	dot();
  	delay(letter_delay_time);
}

void n()
{
 	dash();
  	dot();
  	delay(letter_delay_time);
}

void i()
{
  	dot();
  	dot();
    delay(letter_delay_time);
}

void u()
{
  	dot();
  	dot();
  	dash();
  	delay(letter_delay_time);
}

void k()
{
  	dash();
  	dot();
  	dash();
  	delay(letter_delay_time);
}
