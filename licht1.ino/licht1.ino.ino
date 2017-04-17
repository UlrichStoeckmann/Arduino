void setup(){

}

void loop(){
   pinMode(2, OUTPUT);
   digitalWrite(2, HIGH);
 //  delay(50);
 //  pinMode(7, OUTPUT);
   digitalWrite(7, LOW);
   delay(100);
   pinMode(3, OUTPUT);
   digitalWrite(3, HIGH);
   delay(50);
   pinMode(2, OUTPUT);
   digitalWrite(2, LOW);
   delay(100);
   pinMode(5, OUTPUT);
   digitalWrite(5, HIGH);
   delay(50);
   pinMode(3, OUTPUT);
   digitalWrite(3, LOW);
   delay(100);
   pinMode(6, OUTPUT);
   digitalWrite(6, HIGH);
   delay(50);
   pinMode(5, OUTPUT);
   digitalWrite(5, LOW);
   delay(100);
   pinMode(7, OUTPUT);
   digitalWrite(7, HIGH);
   delay(50);
   pinMode(6, OUTPUT);
   digitalWrite(6, LOW);
}
