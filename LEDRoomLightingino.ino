int redPin = 9, greenPin = 10, bluePin = 11;
int buttonPin = 4;
int buttonState = 0; buttonPress =0;

void setup() {
 pinMode (redPin, OUTPUT);
 pinMode (greenPin, OUTPUT);
 pinMode (bluePin, OUTPUT);
 pinMode (buttonPin, INPUT);
}

void loop() {
    if ( digitalRead(buttonPin) == HIGH) 
    buttonState++;   

  if (buttonState == 8){ 
  buttonState = 0;
  delay (100);
  }
  else {
  switch (buttonState) {
    case 1:
      digitalWrite (redPin, HIGH);
      digitalWrite (greenPin, HIGH);
      digitalWrite (bluePin, HIGH);
      break;

    case 2: 
      digitalWrite (redPin, LOW);
      digitalWrite (greenPin, HIGH);
      digitalWrite (bluePin, HIGH);
      break;

    case 3: 
       digitalWrite (redPin, HIGH);
       digitalWrite (greenPin, LOW);
       digitalWrite (bluePin, HIGH);
       break;

    case 4: 
       digitalWrite (redPin, HIGH);
       digitalWrite (greenPin, HIGH );
       digitalWrite (bluePin, LOW);
       break;
    
    case 5: 
       digitalWrite (redPin, HIGH);
       digitalWrite (greenPin, LOW );
       digitalWrite (bluePin, LOW);
       break;
       
    case 6: 
       digitalWrite (redPin, LOW);
       digitalWrite (greenPin, HIGH );
       digitalWrite (bluePin, LOW);
       break;
           
     case 7: 
       digitalWrite (redPin, LOW);
       digitalWrite (greenPin, LOW );
       digitalWrite (bluePin, HIGH);
       break;
    
    default:
       digitalWrite (redPin, LOW);
       digitalWrite (greenPin, LOW);
       digitalWrite (bluePin, LOW);
       break;
    }

  delay(400);
  }
  while ( buttonState <=8) {
    if (digitalRead(buttonPin) == HIGH)
      
  }
 }


