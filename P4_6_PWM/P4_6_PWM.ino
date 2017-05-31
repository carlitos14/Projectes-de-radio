/*******************************************************************************
**                                                                            **      
**                             TITOL: P4 6 PWM LED                            **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 24/05/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
byte data = 0;
byte pwm = 0;
int pwm3 = 3;
int pwm5 = 5;
int pwm6 = 6;
int pwm9 = 9;
int pwm10 = 10;
int pwm11 = 11;

//***********************************SETUP**************************************
void setup()
{ 
  Serial.begin(9600);
  pinMode(pwm3, OUTPUT);
  pinMode(pwm5, OUTPUT);
  pinMode(pwm6, OUTPUT);
  pinMode(pwm9, OUTPUT);
  pinMode(pwm10, OUTPUT);
  pinMode(pwm11, OUTPUT);
}
//************************************LOOP**************************************
void loop()
{
 if(Serial.available() > 0)
  {
    pwm = Serial.read();
    Serial.println(pwm);
    delay(10);
    data = Serial.read();
    Serial.println(data);
    analogWrite(pwm, data); 
    }
  }
  
//**********************************FUNCIONS************************************
