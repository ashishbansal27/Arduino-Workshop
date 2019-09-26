const int button_A = 3; // initializing buttons
const int button_B = 4;
const int button_C = 5;
const int button_D = 6;
const int speaker = 11; //initializing speaker
int buttonState_A = 0; //default state of button is off therefore value is 0(OFF) 
int buttonState_B = 0;
int buttonState_C = 0;
int buttonState_D = 0;
void setup() {
 // put your setup code here, to run once:
 pinMode(button_A, INPUT); //setting button to input so it can take values
 pinMode(button_B, INPUT);
 pinMode(button_C, INPUT);
 pinMode(button_D, INPUT);
 pinMode(speaker, OUTPUT); //setting speaker to output so it can produce sound
}

void loop() {
 // put your main code here, to run repeatedly:
 buttonState_A = digitalRead(button_A); //reading and storing the button value. It's 0 if it's switched off and 1 if it's ON.
 buttonState_B = digitalRead(button_B);
 buttonState_C = digitalRead(button_C);
 buttonState_D = digitalRead(button_D);
 if (buttonState_A == HIGH) {    //    if(buttonState_A) will work as good as the line written. You can save your time.
  
  tone(speaker, 100); //select tone by changing numbers
 }
 if (buttonState_B == HIGH) {
  tone(speaker, 200);
 }
 if (buttonState_C == HIGH) {
  tone(speaker, 300);
 }
 if (buttonState_D == HIGH) {
  tone(speaker, 400);
 } 
 else //in case no button is pressed , close the piezo
 {
  noTone(speaker);
 }
}
