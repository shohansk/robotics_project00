
 #include <Servo.h> // servo library  
 Servo s1;  
  Servo s2;
 bool val ;  
 bool va2  ;  
 void setup()  
 {  
   Serial.begin(9600);  
   pinMode(2,INPUT);   
   pinMode(3,INPUT);    
   s1.attach(9);    
   s1.write(0);  
   s2.attach(7);   
  s2.write(0);
 }  
 void loop()   
 {  
  val = digitalRead(2); 
  va2 = digitalRead(3); 
  Serial.println(val);  
  Serial.println(va2); 
  delay(10);      // Time Delay  
   if(val == true && va2 == false )  
   {  
   s1.write(90);  
    s2.write(90);
   
   }  
  if( val == false && va2== true  )  
   {  
   s1.write(0); // SERVO 0 DEGREE  
    s2.write(0);
   }  
 
  } 
