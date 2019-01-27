

/*Motor 1 */

const int m1ms2 = 10;
const int m1ms1 = 11;
const int m1dir = 8;
const int m1stp = 9;
const int enable8 = 12;
const int enable9 = 7;
const int enable10 = 22;
const int enable11 = 44;
const int enable12 = A12;
const int enable13 = A4;
const int m2ms2 = 5;
const int m2ms1 = 6;
const int m2dir = 3;
const int m2stp = 4;




void setup()
{
  pinMode(enable8, OUTPUT);
  pinMode(m1ms2, OUTPUT);
  pinMode(m1ms1, OUTPUT);
  pinMode(m1dir, OUTPUT);
  pinMode(m1stp, OUTPUT);
  
  pinMode(enable9, OUTPUT);
  pinMode(enable10, OUTPUT);
  pinMode(enable11, OUTPUT);
  pinMode(enable12, OUTPUT);
  pinMode(enable13, OUTPUT);
  
  pinMode(m2ms2, OUTPUT);
  pinMode(m2ms1, OUTPUT);
  pinMode(m2dir, OUTPUT);
  pinMode(m2stp, OUTPUT);

}
void loop()
{
 digitalWrite(enable8, HIGH);
  digitalWrite(enable9, HIGH);
  digitalWrite(enable10, HIGH);
  digitalWrite(enable11, HIGH);
  digitalWrite(enable12, HIGH);
  digitalWrite(enable13, HIGH);
  delay(2000);  
   
    digitalWrite(enable8, LOW);
          digitalWrite(m1dir, HIGH);

       
          for (int x = 0; x < 200; x++)
          {
            digitalWrite(m1ms2, HIGH);
             digitalWrite(m1ms1, LOW);
            digitalWrite(m1stp, HIGH);
            delayMicroseconds(100);
            digitalWrite(m1stp, LOW);
            delayMicroseconds(100);
           
          }
          
    digitalWrite(enable8, HIGH);
    delay(1000);
 digitalWrite(enable9, LOW);

 digitalWrite(m2dir, HIGH);

       
          for (int x = 0; x < 200; x++)
          {
            digitalWrite(m2ms2, HIGH);
             digitalWrite(m2ms1, LOW);
            digitalWrite(m2stp, HIGH);
            delayMicroseconds(100);
            digitalWrite(m2stp, LOW);
            delayMicroseconds(100);
           
          }
         
    digitalWrite(enable9, HIGH);
     delay(1000);
}
  
