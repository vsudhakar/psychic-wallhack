// Example 04: Fade an LED in and out like on
// a sleeping Apple computer
const int LED = 11;
const int gLED = 10;
const int bLED = 9;
int i = 0;
// We’ll use this to count up and down
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(gLED, OUTPUT);
  pinMode(bLED, OUTPUT);
}

void loop(){
//  //Initialize all LOW
//  digitalWrite(rLED, LOW);
//  digitalWrite(bLED, LOW);
//  digitalWrite(gLED, LOW);
  
  //Red
  for (i = 0; i < 150; i++) { 
    analogWrite(LED, i);

    delay(10); 

  }

  for (i = 150; i > 0; i--) { 
    analogWrite(LED, i); 
    delay(10);
  }
  
  //Green
  for (i = 0; i < 150; i++) { 
    analogWrite(gLED, i);

    delay(10); 

  }

  for (i = 255; i > 0; i--) { 
    analogWrite(gLED, i); 
    delay(10);
  }
  
  //Blue
  for (i = 0; i < 255; i++) { 
    analogWrite(bLED, i);

    delay(10); 

  }

  for (i = 255; i > 0; i--) { 
    analogWrite(bLED, i); 
    delay(10);
  }
}
