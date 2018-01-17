void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

int n = 0;
String s = " sec have elapsed";
String m = " millisec have elapsed ";

void loop() {
  digitalWrite(13,HIGH); 
  int time = millis(); 
  Serial.print(time + m);
  Serial.println(); 
  Serial.print(n + s);
  delay(1000); 
  n = n + 1; 

  digitalWrite(13,LOW); 
  time = millis(); 
  Serial.println();
  Serial.print(time + m);
  Serial.println(n + s);  
  delay(1000); 
  n = n + 1; 

}
