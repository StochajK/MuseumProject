//variables for pin numbers, first row of LEDs
int pin1_1 = 1;
int pin1_2 = 2;
int pin1_3 = 3;
int pin1_4 = 4;
int pin1_5 = 5;
int pin1_6 = 6;
int pin1_7 = 7;
int pin1_8 = 8;

//variables for pin numbers, second row of LEDs
int pin2_1 = 9;
int pin2_2 = 10;
int pin2_3 = 11;
int pin2_4 = 12;
int pin2_5 = 13;
int pin2_6 = 14;
int pin2_7 = 15;
int pin2_8 = 16;

//variables for pin numbers, third row of LEDs
int pin3_1 = 17;
int pin3_2 = 18;
int pin3_3 = 19;
int pin3_4 = 20;
int pin3_5 = 21;
int pin3_6 = 22;
int pin3_7 = 23;
int pin3_8 = 24;

//looping variables
int i = 1;
int j = 0;

void setup() {
  //sets necessary pins to output
  pinMode (pin1_1, OUTPUT);
  pinMode (pin1_2, OUTPUT);
  pinMode (pin1_3, OUTPUT);
  pinMode (pin1_4, OUTPUT);
  pinMode (pin1_5, OUTPUT);
  pinMode (pin1_6, OUTPUT);
  pinMode (pin1_7, OUTPUT);
  pinMode (pin1_8, OUTPUT);

  pinMode (pin2_1, OUTPUT);
  pinMode (pin2_2, OUTPUT);
  pinMode (pin2_3, OUTPUT);
  pinMode (pin2_4, OUTPUT);
  pinMode (pin2_5, OUTPUT);
  pinMode (pin2_6, OUTPUT);
  pinMode (pin2_7, OUTPUT);
  pinMode (pin2_8, OUTPUT);

  pinMode (pin3_1, OUTPUT);
  pinMode (pin3_2, OUTPUT);
  pinMode (pin3_3, OUTPUT);
  pinMode (pin3_4, OUTPUT);
  pinMode (pin3_5, OUTPUT);
  pinMode (pin3_6, OUTPUT);
  pinMode (pin3_7, OUTPUT);
  pinMode (pin3_8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (int i <= 3){
    while (int j <= 8){
      lightsOn(i, j);
      j++;
    }
    i++;
  }
  i=1;
  j=0;
}

//function controlling how many lights are on in a given row
void lightsOn(int row, int numLights) {
  if (row == 1){
    if (numLights == 0){
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
      digitalWrite (pin1_5, LOW);
      digitalWrite (pin1_4, LOW);
      digitalWrite (pin1_3, LOW);
      digitalWrite (pin1_2, LOW);
      digitalWrite (pin1_1, LOW);
    }
    else if (numLights == 1){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
      digitalWrite (pin1_5, LOW);
      digitalWrite (pin1_4, LOW);
      digitalWrite (pin1_3, LOW);
      digitalWrite (pin1_2, LOW);
    }
    else if (numLights == 2){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
      digitalWrite (pin1_5, LOW);
      digitalWrite (pin1_4, LOW);
      digitalWrite (pin1_3, LOW);
    }
    else if (numLights == 3){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
      digitalWrite (pin1_5, LOW);
      digitalWrite (pin1_4, LOW);
    }
    else if (numLights == 4){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_4, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
      digitalWrite (pin1_5, LOW);
    }
    else if (numLights == 5){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_4, HIGH);
      digitalWrite (pin1_5, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
      digitalWrite (pin1_6, LOW);
    }
    else if (numLights == 6){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_4, HIGH);
      digitalWrite (pin1_5, HIGH);
      digitalWrite (pin1_6, HIGH);
      digitalWrite (pin1_8, LOW);
      digitalWrite (pin1_7, LOW);
    }
    else if (numLights == 7){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_4, HIGH);
      digitalWrite (pin1_5, HIGH);
      digitalWrite (pin1_6, HIGH);
      digitalWrite (pin1_7, HIGH);
      digitalWrite (pin1_8, LOW);
    }
    else if (numLights == 8){
      digitalWrite (pin1_1, HIGH);
      digitalWrite (pin1_2, HIGH);
      digitalWrite (pin1_3, HIGH);
      digitalWrite (pin1_4, HIGH);
      digitalWrite (pin1_5, HIGH);
      digitalWrite (pin1_6, HIGH);
      digitalWrite (pin1_7, HIGH);
      digitalWrite (pin1_8, HIGH);
    }
  }
  else if (row == 2){
    if (numLights == 0){
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
      digitalWrite (pin2_5, LOW);
      digitalWrite (pin2_4, LOW);
      digitalWrite (pin2_3, LOW);
      digitalWrite (pin2_2, LOW);
      digitalWrite (pin2_1, LOW);
    }
    else if (numLights == 1){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
      digitalWrite (pin2_5, LOW);
      digitalWrite (pin2_4, LOW);
      digitalWrite (pin2_3, LOW);
      digitalWrite (pin2_2, LOW);
    }
    else if (numLights == 2){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
      digitalWrite (pin2_5, LOW);
      digitalWrite (pin2_4, LOW);
      digitalWrite (pin2_3, LOW);
    }
    else if (numLights == 3){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
      digitalWrite (pin2_5, LOW);
      digitalWrite (pin2_4, LOW);
    }
    else if (numLights == 4){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_4, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
      digitalWrite (pin2_5, LOW);
    }
    else if (numLights == 5){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_4, HIGH);
      digitalWrite (pin2_5, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
      digitalWrite (pin2_6, LOW);
    }
    else if (numLights == 6){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_4, HIGH);
      digitalWrite (pin2_5, HIGH);
      digitalWrite (pin2_6, HIGH);
      digitalWrite (pin2_8, LOW);
      digitalWrite (pin2_7, LOW);
    }
    else if (numLights == 7){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_4, HIGH);
      digitalWrite (pin2_5, HIGH);
      digitalWrite (pin2_6, HIGH);
      digitalWrite (pin2_7, HIGH);
      digitalWrite (pin2_8, LOW);
    }
    else if (numLights == 8){
      digitalWrite (pin2_1, HIGH);
      digitalWrite (pin2_2, HIGH);
      digitalWrite (pin2_3, HIGH);
      digitalWrite (pin2_4, HIGH);
      digitalWrite (pin2_5, HIGH);
      digitalWrite (pin2_6, HIGH);
      digitalWrite (pin2_7, HIGH);
      digitalWrite (pin2_8, HIGH);
    }
  }
  else if (row == 3){
    if (numLights == 0){
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
      digitalWrite (pin3_5, LOW);
      digitalWrite (pin3_4, LOW);
      digitalWrite (pin3_3, LOW);
      digitalWrite (pin3_2, LOW);
      digitalWrite (pin3_1, LOW);
    }
    else if (numLights == 1){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
      digitalWrite (pin3_5, LOW);
      digitalWrite (pin3_4, LOW);
      digitalWrite (pin3_3, LOW);
      digitalWrite (pin3_2, LOW);
    }
    else if (numLights == 2){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
      digitalWrite (pin3_5, LOW);
      digitalWrite (pin3_4, LOW);
      digitalWrite (pin3_3, LOW);
    }
    else if (numLights == 3){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
      digitalWrite (pin3_5, LOW);
      digitalWrite (pin3_4, LOW);
    }
    else if (numLights == 4){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_4, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
      digitalWrite (pin3_5, LOW);
    }    
    else if (numLights == 5){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_4, HIGH);
      digitalWrite (pin3_5, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
      digitalWrite (pin3_6, LOW);
    }
    else if (numLights == 6){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_4, HIGH);
      digitalWrite (pin3_5, HIGH);
      digitalWrite (pin3_6, HIGH);
      digitalWrite (pin3_8, LOW);
      digitalWrite (pin3_7, LOW);
    }
    
    else if (numLights == 7){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_4, HIGH);
      digitalWrite (pin3_5, HIGH);
      digitalWrite (pin3_6, HIGH);
      digitalWrite (pin3_7, HIGH);
      digitalWrite (pin3_8, LOW);
    }
    else if (numLights == 8){
      digitalWrite (pin3_1, HIGH);
      digitalWrite (pin3_2, HIGH);
      digitalWrite (pin3_3, HIGH);
      digitalWrite (pin3_4, HIGH);
      digitalWrite (pin3_5, HIGH);
      digitalWrite (pin3_6, HIGH);
      digitalWrite (pin3_7, HIGH);
      digitalWrite (pin3_8, HIGH);
    }
  }
}
