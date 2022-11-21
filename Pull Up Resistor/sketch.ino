void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // pin 13 difungsikan sebagai output yaitu LED
  pinMode(7, INPUT); // pin 7 difungsikan penerima input dari pushbutton 

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(7) == HIGH){
  digitalWrite(11, HIGH);
}else{
  digitalWrite(11, LOW);
}
}
