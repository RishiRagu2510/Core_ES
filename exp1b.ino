void setup() {


  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw=digitalRead(4);
  if(sw==HIGH){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
