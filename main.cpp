// C++ code
//
int mat[100];
int lenght = 1;
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
void setup()
{
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
  mat[0] = random(4, 8); //[4;8)
}

void gameLost(){
  	Serial.println("LOST");
	digitalWrite(7, HIGH);
  	digitalWrite(6, HIGH);
  	digitalWrite(5, HIGH);
  	digitalWrite(4, HIGH);
  	delay(1000);
  	digitalWrite(7, LOW);
  	digitalWrite(6, LOW);
  	digitalWrite(5, LOW);
  	digitalWrite(4, LOW);
}

void showCombination(){
  for(int i=0; i<1000; i++){
    if(mat[i] == 0){
      return;
    }
    Serial.print(mat[i]);
    digitalWrite(mat[i], HIGH);
    delay(500);
    digitalWrite(mat[i], LOW);
  }
  Serial.println("");
}
void winner(){
  //TODO: Implement
}

void loop()
{
  showCombination();
  for(int i=0; i<lenght; i++){
    int sol = 0;
    do{
      delay(50);
      buttonState1 = digitalRead(10);
      buttonState2 = digitalRead(11);
      buttonState3 = digitalRead(12);
      buttonState4 = digitalRead(13);
    }while(buttonState1 == LOW && buttonState2 == LOW && buttonState3 == LOW && buttonState4 == LOW);
    if(buttonState1 == HIGH){
    	//Serial.println("A");
    	digitalWrite(7, HIGH);
      	delay(500);
      	digitalWrite(7, LOW);
      	sol = 7;
    }
    else if(buttonState2 == HIGH){
		//Serial.println("B");
      	digitalWrite(6, HIGH);
      	delay(500);
      	digitalWrite(6, LOW);
      	sol = 6;
    }
    else if(buttonState3 == HIGH){
		//Serial.println("C");
      	digitalWrite(5, HIGH);
      	delay(500);
      	digitalWrite(5, LOW);
      	sol = 5;
    }
    else if(buttonState4 == HIGH){
		//Serial.println("D");
      	digitalWrite(4, HIGH);
      	delay(500);
      	digitalWrite(4, LOW);
      	sol = 4;
    }
    delay(500);
    if(sol != mat[i]){
      gameLost();
	  delay(10000);    
    }
  }
  mat[lenght] = random(4, 8); //[4;8)
  lenght++;
  if(lenght == 1000){
	winner();
   	delay(10000);
  }
}
