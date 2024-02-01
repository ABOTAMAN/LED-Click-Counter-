int button=13;
int led1  =10;
int led2  =11;
int led3  =12;
int read  = 0;
int    x  = 0;

void setup(){
  
  pinMode(button,INPUT);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
}
void loop(){
 
  read=digitalRead(button);
  if (read==HIGH){
  x++;
    
    if (x==1){
      digitalWrite(led1,HIGH);
      delay(250);
      }
      else if(x==2){
        digitalWrite(led2,HIGH);
        delay(250);
      } 
      else if(x==3){
        digitalWrite(led3,HIGH);
        delay(250);
      }
      else if(x==4){
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        delay(250);
        x=0;
      }
  }
}
        
      
    