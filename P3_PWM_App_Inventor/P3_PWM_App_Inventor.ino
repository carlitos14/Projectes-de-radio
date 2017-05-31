/*******************************************************************************
**                                                                            **      
**                             TITOL: P3 PWM LED                              **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 10/05/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
byte data = 0;
byte pwm = 0;
int pwm3 = 3;

//***********************************SETUP**************************************
void setup()
{ 
  Serial.begin(9600);
  pinMode(pwm3, OUTPUT);
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