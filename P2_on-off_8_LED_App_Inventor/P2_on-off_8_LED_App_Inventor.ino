/*******************************************************************************
**                                                                            **      
**                             TITOL: P2 ON/OFF 8 LED                         **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 10/05/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;

//***********************************SETUP**************************************
void setup()
{ 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}
//************************************LOOP**************************************
void loop()
{
     if(Serial.available()>=1)
  {
    char entrada = Serial.read();
  
//LED1
    if(entrada == 'a' or entrada == 'A')
    {
      digitalWrite(led1, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'i' or entrada == 'I')
      {
         digitalWrite(led1, LOW);
         Serial.println("LED apagado");
      }

//LED2
    if(entrada == 'b' or entrada == 'B')
    {
      digitalWrite(led2, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'j' or entrada == 'J')
      {
         digitalWrite(led2, LOW);
         Serial.println("LED apagado");
      }

//LED3
    if(entrada == 'c' or entrada == 'C')
    {
      digitalWrite(led3, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'k' or entrada == 'K') 
      {
         digitalWrite(led3, LOW);
         Serial.println("LED apagado");
      }
 
//LED4
    if(entrada == 'd' or entrada == 'D')
    {
      digitalWrite(led4, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'l' or entrada == 'L') 
      {
         digitalWrite(led4, LOW);
         Serial.println("LED apagado");
      }

//LED5
    if(entrada == 'e' or entrada == 'E')
    {
      digitalWrite(led5, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'm' or entrada == 'M') 
      {
         digitalWrite(led5, LOW);
         Serial.println("LED apagado");
      }
 
//LED6
    if(entrada == 'f' or entrada == 'F')
    {
      digitalWrite(led6, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'n' or entrada == 'N')
      {
         digitalWrite(led6, LOW);
         Serial.println("LED apagado");
      }
 
//LED7
    if(entrada == 'g' or entrada == 'G')
    {
      digitalWrite(led7, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'o' or entrada == 'O') 
      {
         digitalWrite(led7, LOW);
         Serial.println("LED apagado");
      }

//LED8
    if(entrada == 'h' or entrada == 'H')
    {
      digitalWrite(led8, HIGH);
      Serial.println("on");
    }
    else if(entrada == 'p' or entrada == 'P')
      {
         digitalWrite(led8, LOW);
         Serial.println("LED apagado");
      }
  }
}
  
//**********************************FUNCIONS************************************
