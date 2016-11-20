//keyboard functions
//  Keyboard.releaseAll();
//  Keyboard.press(ctrlKey);
//  Keyboard.press('n');
//  Keyboard.write(0x41);
//  Keyboard.print("");
//  Keyboard.println("");
//
//mouse functions
//  Mouse.click(MOUSE_RIGHT);
//  Mouse.press(MOUSE_RIGHT);
//  Mouse.release(MOUSE_RIGHT);
//  Mouse.move(xVal, yPos, wheel);


#include "Keyboard.h"
#include "Mouse.h"

const int buttonPin = 10;
const int mode_1 = 2;
const int mode_2 = 3;
const int mode_3 = 4;
const int mode_4 = 5;
const int mode_5 = 6;
const int mode_6 = 7;
const int mode_7 = 8;
const int mode_8 = 9;

void setup() {

  pinMode(buttonPin, INPUT);
  pinMode(mode_1, INPUT);
  pinMode(mode_2, INPUT);
  pinMode(mode_3, INPUT);
  pinMode(mode_4, INPUT);
  pinMode(mode_5, INPUT);
  pinMode(mode_6, INPUT);
  pinMode(mode_7, INPUT);
  pinMode(mode_8, INPUT);

  Keyboard.begin();
  Mouse.begin();
}

void loop() {
  int selected_mode;
  int mode_1_state, mode_2_state, mode_3_state, mode_4_state, mode_5_state,
      mode_6_state, mode_7_state, mode_8_state;
  
  int buttonState = digitalRead(buttonPin);

  if (buttonState)
  {
    mode_1_state = digitalRead(mode_1);
    mode_2_state = digitalRead(mode_2);
    mode_3_state = digitalRead(mode_3);
    mode_4_state = digitalRead(mode_4);
    mode_5_state = digitalRead(mode_5);
    mode_6_state = digitalRead(mode_6);
    mode_7_state = digitalRead(mode_7);
    mode_8_state = digitalRead(mode_8);

    //Function 1 - instructions
    if(!mode_1_state && mode_2_state && mode_3_state && mode_4_state 
       && mode_5_state && mode_6_state && mode_7_state && mode_8_state)
    {
      instructions();
    }
    
    //Function 2 - paint_artist
    if(mode_1_state && !mode_2_state && mode_3_state && mode_4_state 
       && mode_5_state && mode_6_state && mode_7_state && mode_8_state)
    {
      paint_artist();
    }
    
    //Function 3 - hacker_typer
    if(mode_1_state && mode_2_state && !mode_3_state && mode_4_state 
       && mode_5_state && mode_6_state && mode_7_state && mode_8_state)
    {
      hacker_typer();
    }
    
    //Function 4 - speed_clicker
    if(mode_1_state && mode_2_state && mode_3_state && !mode_4_state 
       && mode_5_state && mode_6_state && mode_7_state && mode_8_state)
    {
      speed_clicker();
    }
    
    //Function 5 - secret_video
    if(mode_1_state && mode_2_state && mode_3_state && mode_4_state 
       && !mode_5_state && mode_6_state && mode_7_state && mode_8_state)
    {
      secret_video();
    }
    
    //Function 6 - 
    if(mode_1_state && mode_2_state && mode_3_state && mode_4_state 
       && mode_5_state && !mode_6_state && mode_7_state && mode_8_state)
    {
      instructions();
    }
    
    //Function 7 - 
    if(mode_1_state && mode_2_state && mode_3_state && mode_4_state 
       && mode_5_state && mode_6_state && !mode_7_state && mode_8_state)
    {
      instructions();
    }
    
    //Function 8 - 
    if(mode_1_state && mode_2_state && mode_3_state && mode_4_state 
       && mode_5_state && mode_6_state && mode_7_state && !mode_8_state)
    {
      instructions();
    }

    
  }
  delay(100);

}


//**********************************************************************************
// Function 1 - instructions:
// Place mouse in middle of desktop and push button. New txt file will be made
// and mode descriptions will be listed.
//**********************************************************************************
void instructions()
{
  //open the new txt file
  Mouse.click(MOUSE_RIGHT);
  delay(100);
  Keyboard.print("w");
  delay(100);
  Keyboard.print("t");
  delay(100);
  Keyboard.print("USB Wizard Instructions");
  delay(100);
  Keyboard.write(0xB0); //enter
  delay(100);
  Keyboard.write(0xB0); //enter
  delay(100);
  Keyboard.write(0xB0); //enter
  delay(1000);

  //write the instructions in txt file
  Keyboard.print("USB Wizard Instructions - by Scott Clandinin\n\r");
  Keyboard.print("\n\r");
  Keyboard.print("Use the switches to change between modes\n\r");
  Keyboard.print("\n\r");
  Keyboard.print("**********************************************************************\n\r");
  Keyboard.print("Mode 1: Device Instructions\n\r");
  Keyboard.print("Mode 2: Paint Artist - Open Paint, place mouse in middle of screen. Press Button.\n\r");
  Keyboard.print("Mode 3: Hacker Typer - Open new tab with cursor in search bar and press button. Press button again to end sequence.\n\r");
  Keyboard.print("Mode 4: Cookie Clicker - Open Cookie Clicker. When mouse is above cookie, hold button to spam clicks. Resetting the selector switch disables the program.\n\r");
  Keyboard.print("Mode 5: Secret Video - Open new tab with cursor in search bar and press button. Enjoy.\n\r");
  Keyboard.print("Mode 6: Not implemented.\n\r");
  Keyboard.print("Mode 7: Not implemented.\n\r");
  Keyboard.print("Mode 8: Not implemented.\n\r");
  Keyboard.print("**********************************************************************\n\r");
  delay(500);
  //save the file with ctrl+s
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print("s");
  Keyboard.releaseAll();
  delay(500);
}


//**********************************************************************************
// Function 2 - paint_artist:
// Open Paint, place mouse in middle of screen. Press Button
//**********************************************************************************
void paint_artist()
{
  delay(1000);

  //base
  Mouse.press(MOUSE_LEFT);
  Mouse.move(0, -30, 0);
  delay(50);
  Mouse.move(100, 0, 0);
  delay(50);
  Mouse.move(0, -10, 0);
  delay(50);
  Mouse.move(-100, 0, 0);
  Mouse.move(-100, 0, 0);
  delay(50);
  Mouse.move(0, -10, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -5, 0);
  Mouse.move(15, 0, 0);
  Mouse.move(15, 0, 0);
  delay(50);

  
  // H
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // E
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(-15, 0, 0);
  delay(50);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(-15, 0, 0);
  delay(50);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // L
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // L
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // 0
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(-15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // ,
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -7, 0);
  delay(50);
  Mouse.move(0, 7, 0);
  Mouse.move(0, 7, 0);
  delay(50);
  Mouse.move(0, -7, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  Mouse.move(7, 0, 0);
  delay(50);

  
  //space
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);


  // W
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // 0
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(-15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);
  
  // R
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(-15, 0, 0);
  delay(50);
  Mouse.move(12, 12, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // L
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(15, 0, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // D
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -15, 0);
  Mouse.move(0, -15, 0);
  delay(50);
  Mouse.move(12, 0, 0);
  Mouse.move(12, 0, 0);
  delay(50);
  Mouse.move(0, 15, 0);
  Mouse.move(0, 15, 0);
  delay(50);
  Mouse.move(-12, 0, 0);
  Mouse.move(-12, 0, 0);
  delay(50);
  Mouse.move(12, 0, 0);
  Mouse.move(12, 0, 0);
  delay(50);  
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);

  // !
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -7, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  Mouse.move(0, -7, 0);
  delay(50);
  Mouse.press(MOUSE_LEFT);
  delay(50);
  Mouse.move(0, -11, 0);
  Mouse.move(0, -11, 0);
  delay(50);
  Mouse.release(MOUSE_LEFT);
  delay(50);
  Mouse.move(7, 0, 0);
  delay(50);
  
    
  delay(1000);
}


//**********************************************************************************
// Function 3 - hacker_typer:
// Open new tab with cursor in search bar and press button. 
// Press button again to end sequence.
//**********************************************************************************
void hacker_typer()
{
  int buttonState;
  delay(500);
  Keyboard.print("http://hackertyper.com/");
  delay(100);
  Keyboard.write(0xB0); //enter
  delay(2500);

  //enter keys until button is pressed again
  buttonState = digitalRead(buttonPin);
  while(!buttonState)
  {
    Keyboard.print("a");
    delay(50);
    buttonState = digitalRead(buttonPin);
  }

  //three alts brings up "ACCESS GRANTED" sign
  Keyboard.write(KEY_LEFT_ALT);
  delay(100);
  Keyboard.write(KEY_LEFT_ALT);
  delay(100);
  Keyboard.write(KEY_LEFT_ALT);
  delay(100);
}


//**********************************************************************************
// Function 4 - speed_clicker:
// Hold left mouse button to spam clicks.
// Resetting the selector switch disables the program.
//**********************************************************************************
void speed_clicker()
{
  int buttonState;
  int selectorState = digitalRead(mode_4);

  //loop until the selector switch is reset
  while(!selectorState)
  {
    buttonState = digitalRead(buttonPin);

    while (buttonState == HIGH)  //spam left click while the button is pressed
    {
      Mouse.click(MOUSE_LEFT);
      buttonState = digitalRead(buttonPin);
    }
    
    selectorState = digitalRead(mode_4);   
  }
}



//**********************************************************************************
// Function 5 - secret_video:
// Open new tab with cursor in search bar and press button. Enjoy.
//**********************************************************************************
void secret_video()
{
  delay(500);
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(100);
  Keyboard.write(0xB0); //enter
  delay(3000);
  Keyboard.print("f"); //enters fullscreen 
}






