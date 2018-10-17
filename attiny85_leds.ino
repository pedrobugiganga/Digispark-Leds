#define acelerador 0

int i;
int j;
int button;


void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(acelerador, INPUT);

}
void loop() {
  for(i=0;i<5;i++){
  digitalWrite(i,HIGH);
  button = digitalRead(acelerador);
  if(button == LOW){
  delay (50);}
  else {delay(100);}
  digitalWrite(i,LOW);}

for(j=4;j>1;j--){
  digitalWrite(j,HIGH);
  button = digitalRead(acelerador);
  if(button == LOW){
  delay (50);}
  else {delay(100);}
  digitalWrite(j,LOW);}

}
  
