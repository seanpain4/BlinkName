int led1 = D7;

void setup() {

  pinMode(led1, OUTPUT);

}

void loop() {
    


  // Letter S
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  
  // Letter gap
  delay(300);
  
  //Letter E
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  
  // Letter gap
  delay(300);
  
  //Letter A
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(100);
  
  // Letter gap
  delay(300);

  //Letter N
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);

  //Word Gap
  delay(1000);

  // And repeat!
}

