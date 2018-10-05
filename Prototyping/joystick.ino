#define x_pin A0
#define y_pin A1
#define led0 2
#define led1 3
#define led2 4
#define led3 5
#define led4 6

int x_value = 513; //measured natural value
int y_value = 503;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(x_pin,INPUT);
  pinMode(y_pin,INPUT);
  pinMode(led0,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x_value = analogRead(x_pin);
  //Serial.println(x_value);
  y_value = analogRead(y_pin);
  //Serial.println(y_value);

  if(x_value < 450){
    rollingLED_left();
    Serial.print("left");
    delay(2500);
  }
  else if (x_value > 560){
    rollingLED_right();
    Serial.print("right");
    delay(2500);
  }

  //delay(5000);

}

void rollingLED_left(){
  for(int i = 0; i<5; i++){
    digitalWrite(led4,HIGH);
    delay(300);
    digitalWrite(led4,LOW);
    
    digitalWrite(led3,HIGH);
    delay(300);
    digitalWrite(led3,LOW);
    
    digitalWrite(led2,HIGH);
    delay(300);
    digitalWrite(led2,LOW);
    
    digitalWrite(led1,HIGH);
    delay(300);
    digitalWrite(led1,LOW);
    
    digitalWrite(led0,HIGH);
    delay(300);
    digitalWrite(led0,LOW);

    delay(500);
  }
}

void rollingLED_right(){
  for(int i = 0; i<5; i++){
    digitalWrite(led0,HIGH);
    delay(300);
    digitalWrite(led0,LOW);
    
    digitalWrite(led1,HIGH);
    delay(300);
    digitalWrite(led1,LOW);
    
    digitalWrite(led2,HIGH);
    delay(300);
    digitalWrite(led2,LOW);
    
    digitalWrite(led3,HIGH);
    delay(300);
    digitalWrite(led3,LOW);
    
    digitalWrite(led4,HIGH);
    delay(300);
    digitalWrite(led4,LOW);

    delay(500);
  }
}
