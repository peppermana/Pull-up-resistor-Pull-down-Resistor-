void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // pin 13 difungsikan sebagai output yaitu LED
  pinMode(8, INPUT); // pin 8 difungsikan penerima input dari pushbutton 

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8) == HIGH){
  digitalWrite(11, LOW);
}else{
  digitalWrite(11, HIGH);
}
}
