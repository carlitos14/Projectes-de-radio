/*******************************************************************************
**                                                                            **      
**                       TITOL: On/Off d'un LED amb el mòvil                  **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 19/04/2017  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
char data = 0;

//***********************************SETUP**************************************

void setup()              
{
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    pinMode(13, OUTPUT);  //Sets digital pin 13 as output pin
}
//************************************LOOP**************************************

void loop()                     
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == '1')              // Checks whether value of data is equal to 1
         digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
      else if(data == '0')         //  Checks whether value of data is equal to 0
         digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
   }
}
//**********************************FUNCIONS************************************
