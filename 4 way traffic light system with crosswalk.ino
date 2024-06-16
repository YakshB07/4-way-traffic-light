int green = 13;
int red2 = 12;
int yellow =11;
int green2 = 10;
int red = 9;
int yellow2 = 8;
int crosswalk_red = 5;
int crosswalk_white = 6;
const int pushbutton = 7;
int buttonState = 0;
int variable = 0;


void crack(){
  int buttonState = digitalRead(pushbutton);
  if(buttonState == LOW){
    variable++;
  }
}


  void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(pushbutton, INPUT_PULLUP);
  pinMode(crosswalk_red, OUTPUT);
  pinMode(crosswalk_white, OUTPUT);
 
}

void loop(){
  digitalWrite(green, HIGH);
  digitalWrite(red2, HIGH);
 
  for(int i=0; i<=500; i=i+1){
    crack();
    if(variable > 0){
      digitalWrite(crosswalk_red, LOW);
      digitalWrite(crosswalk_white, HIGH);
   
    }else{
      digitalWrite(crosswalk_red, HIGH);
      digitalWrite(crosswalk_white, LOW);
    }
    delay(20);
  }
  delay(500);
  variable = 0;
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  for(int q=0; q<=100; q=q+1){
     crack();
     delay(20);
     }
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(crosswalk_red, HIGH);
  digitalWrite(crosswalk_white, LOW);
  for(int k=0; k<=500; k=k+1){
     crack();
     delay(20);
     }
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);
  for(int p=0; p<=100; p=p+1){
     crack();
     delay(20);
     }
  digitalWrite(red, LOW);
  digitalWrite(yellow2, LOW);
  }