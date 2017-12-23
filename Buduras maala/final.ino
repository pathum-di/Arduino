  /*initializing the pins , I have used all PWM pins of mega board*/
  /*here A1 is anode and the pin 13->B, pin 12->G, pin 11->R are cathodes of the first bulb*/
  /*here A2 is anode and the pin 10->B, pin 9->G, pin 8->R are cathodes of the second bulb*/
  /*here A3 is anode and the pin 7->B, pin 6->G, pin 5->R are cathodes of the third bulb*/
  /*for each cathode add 270 ohm resister*/
  /*and so on*/

void setup()
{   
  for(int i=2;i<=13;i++){
  pinMode(i,OUTPUT);}
  pinMode(44,OUTPUT);  
  pinMode(45,OUTPUT); 
  pinMode(46,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT); 
}
 
void loop()
{
  waving_flag_out_in();
  waving_flag_out_in();
  waving_flag_out_in();
  waving_flag_out_in();
  waving_flag_out_in();

  fade();
  fade();

  all_blue_on_off();
  all_yellow_on_off();
  all_red_on_off();  
  all_white_on_off();
  all_orange_on_off();

  fade();
  fade();

  waving_flag_out();
  waving_flag_out();
  waving_flag_out();
  waving_flag_out();
  waving_flag_out();

  all_blue_on_off();
  all_yellow_on_off();
  all_red_on_off();  
  all_white_on_off();
  all_orange_on_off();
  
  fade();
  fade();

  waving_flag_in();
  waving_flag_in();
  waving_flag_in();
  waving_flag_in();
  waving_flag_in();

  fade();
  fade();
  
  blue_zoom_in_out();
  delay(200);
  yellow_zoom_in_out();
  delay(200);
  red_zoom_in_out();
  delay(200);
  white_zoom_in_out();
  delay(200);
  orange_zoom_in_out();
  delay(200);

  all_blue_on_off();
  all_yellow_on_off();
  all_red_on_off();  
  all_white_on_off();
  all_orange_on_off();

  fade();
  fade();
  
  blue_kr();
  yellow_kr();
  red_kr();
  white_kr();
  orange_kr();

  fade();
  fade();  
   
  zoom_out_in(200);
  zoom_out_in(200);
  zoom_out_in(200);
  zoom_out_in(200);
  zoom_out_in(200);

  fade();
  fade();

}

//to zoom in and out all bulbs in blue
void blue_zoom_in_out(){
  for(int i=A1;i<=A5;i++){
      blue(i);
      delay(200);
    }
  for(int j=A5;j>=A1;j--){
    digitalWrite(j,LOW);
    delay(200);}
  }

//to zoom in and out all bulbs in yellow
void yellow_zoom_in_out(){
  for(int i=A1;i<=A5;i++){
      yellow(i);
      delay(200);
    }
  for(int j=A5;j>=A1;j--){
    digitalWrite(j,LOW);
    delay(200);}
  }

//to zoom in and out all bulbs in red
void red_zoom_in_out(){
  for(int i=A1;i<=A5;i++){
      red(i);
      delay(200);
    }
  for(int j=A5;j>=A1;j--){
    digitalWrite(j,LOW);
    delay(200);}
  }

//to zoom in and out all bulbs in white
void white_zoom_in_out(){
  for(int i=A1;i<=A5;i++){
      white(i);
      delay(200);
    }
  for(int j=A5;j>=A1;j--){
    digitalWrite(j,LOW);
    delay(200);}
  }      

//to zoom in and out all bulbs in orange
void orange_zoom_in_out(){
  for(int i=A1;i<=A5;i++){
      orange(i);
      delay(200);
    }
  for(int j=A5;j>=A1;j--){
    digitalWrite(j,LOW);
    delay(200);}
  }

//all are blue color one off line goes according to knight rider
void blue_kr(){
  all_blue();
  
  for(int i=A1;i<=A5;i++){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    }
  for(int i=A4;i>=A2;i--){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    
    }
  }

//all are yellow color one off line goes according to knight rider
void yellow_kr(){
  all_yellow();
  
  for(int i=A1;i<=A5;i++){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    }
  for(int i=A4;i>=A2;i--){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    
    }
  }

//all are red color one off line goes according to knight rider
void red_kr(){
  all_red();
  
  for(int i=A1;i<=A5;i++){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    }
  for(int i=A4;i>=A2;i--){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    
    }
  }

//all are white color one off line goes according to knight rider
void white_kr(){
  all_white();
  
  for(int i=A1;i<=A5;i++){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    }
  for(int i=A4;i>=A2;i--){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    
    }
  }

//all are orange color one off line goes according to knight rider
void orange_kr(){
  all_orange();
  
  for(int i=A1;i<=A5;i++){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    }
  for(int i=A4;i>=A2;i--){
    digitalWrite(i,LOW);
    delay(200);
    digitalWrite(i,HIGH);
    
    }
  }

//to flow in bulb lines according to the Buddhist flag  
void waving_flag_in(){
  all_on_pos_5();
  delay(200);
  all_on_pos_4();
  delay(200);
  all_on_pos_3();
  delay(200);
  all_on_pos_2();
  delay(200);
  all_on();
  delay(200);}

//to flow out bulb lines according to the Buddhist flag
void waving_flag_out(){
  all_on();
  delay(200);
  all_on_pos_2();
  delay(200);
  all_on_pos_3();
  delay(200);
  all_on_pos_4();
  delay(200);
  all_on_pos_5();
  delay(200);
  }

//collection of above functions
void waving_flag_out_in(){
  waving_flag_out();
  waving_flag_in();}  

//to blink all the bulbs in blue 3 times with 200ms delay 
void all_blue_on_off(){  
  all_blue();
  delay(200);
  all_off();
  delay(200);
  all_blue();
  delay(200);
  all_off();
  delay(200);
  all_blue();
  delay(200);
  all_off();
  delay(200);}

//to blink all the bulbs in yellow 3 times with 200ms delay   
void all_yellow_on_off(){  
  all_yellow();
  delay(200);
  all_off();
  delay(200);
  all_yellow();
  delay(200);
  all_off();
  delay(200);
  all_yellow();
  delay(200);
  all_off();
  delay(200);}

//to blink all the bulbs in red 3 times with 200ms delay 
void all_red_on_off(){  
  all_red();
  delay(200);
  all_off();
  delay(200);
  all_red();
  delay(200);
  all_off();
  delay(200);
  all_red();
  delay(200);
  all_off();
  delay(200);}

//to blink all the bulbs in white 3 times with 200ms delay 
void all_white_on_off(){  
  all_white();
  delay(200);
  all_off();
  delay(200);
  all_white();
  delay(200);
  all_off();
  delay(200);
  all_white();
  delay(200);
  all_off();
  delay(200);}
  
//to blink all the bulbs in orange 3 times with 200ms delay  
void all_orange_on_off(){  
  all_orange();
  delay(200);
  all_off();
  delay(200);
  all_orange();
  delay(200);
  all_off();
  delay(200);
  all_orange();
  delay(200);
  all_off();
  delay(200);}

//to light up all the bulbs in blue
void all_blue(){
  blue(A1);
  blue(A2);
  blue(A3);
  blue(A4);
  blue(A5);}

//to light up all the bulbs in yellow
void all_yellow(){
  yellow(A1);
  yellow(A2);
  yellow(A3);
  yellow(A4);
  yellow(A5);}

//to light up all the bulbs in red
void all_red(){
  red(A1);
  red(A2);
  red(A3);
  red(A4);
  red(A5);}

//to light up all the bulbs in white
void all_white(){
  white(A1);
  white(A2);
  white(A3);
  white(A4);
  white(A5);}

//to light up all the bulbs in orange
void all_orange(){
  orange(A1);
  orange(A2);
  orange(A3);
  orange(A4);
  orange(A5);}
  
//collection of zoom_out and zoom_in, duration is the delay for the included funtions
void zoom_out_in(int duration){
  zoom_out(duration);
  zoom_in(duration);
  }

//to zoom out the bulb lines to light up according to the Buddhist flag, duration is the delay to light up the next line
void zoom_out(int duration){
  blue(A1);
  delay(duration);
  yellow(A2);
  delay(duration);
  red(A3);
  delay(duration);
  white(A4);
  delay(duration);
  orange(A5);
  delay(duration);
  }

//to blink the all bulbs that are light up according to the Buddhist flag five times with delay time of 200ms 
void all_bulb_on_off(){
  /////////////
  all_on();
  delay(200);
  /////////////
  all_off();
  delay(200);
  /////////////
  all_on();
  delay(200);
  /////////////
  all_off();
  delay(200);
  /////////////
  all_on();
  delay(200);
  /////////////
  all_off();
  delay(200);
  /////////////
  all_on();
  delay(200);
  /////////////
  all_off();
  delay(200);
  /////////////
  all_on();
  delay(200);
  /////////////
  all_off();
  delay(200);
  } 
   
//to turn on all bulbs according to the Buddhist flag first bulb blue, second bulb yellow and so on 
//also to light up according to the Buddhist flag starting from line 1
void all_on(){
  blue(A1);
  yellow(A2);
  red(A3);
  white(A4);
  orange(A5);
  }

//to light up according to the Buddhist flag starting from line 2
void all_on_pos_2(){
  blue(A2);
  yellow(A3);
  red(A4);
  white(A5);
  orange(A1);
  }

//to light up according to the Buddhist flag starting from line 3
void all_on_pos_3(){
  blue(A3);
  yellow(A4);
  red(A5);
  white(A1);
  orange(A2);
  }

//to light up according to the Buddhist flag starting from line 4
void all_on_pos_4(){
  blue(A4);
  yellow(A5);
  red(A1);
  white(A2);
  orange(A3);
  }  

//to light up according to the Buddhist flag starting from line 5 
void all_on_pos_5(){
  blue(A5);
  yellow(A1);
  red(A2);
  white(A3);
  orange(A4);
  }

//zoom in all lines, all bulbs are light up according to Buddhist flag, duration is the delay to turn off the next line 
void zoom_in(int duration){
  all_on();
  digitalWrite(A5,LOW);
  delay(duration);
  digitalWrite(A4,LOW);
  delay(duration);
  digitalWrite(A3,LOW);
  delay(duration);
  digitalWrite(A2,LOW);
  delay(duration);
  digitalWrite(A1,LOW);
  delay(duration);
  }
    
// to turn off all leds at once
void all_off(){
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,LOW);
  digitalWrite(A4,LOW);
  digitalWrite(A5,LOW);
  }

// blue color will light up according to the bulb number
void blue(int bulb_no){
  if(bulb_no==A1){
    digitalWrite(A1,HIGH);
    analogWrite(11, 255);
    analogWrite(12, 255);
    analogWrite(13, 0);
    }
    if(bulb_no==A2){
    digitalWrite(A2,HIGH);
    analogWrite(8, 255);
    analogWrite(9, 255);
    analogWrite(10, 0);
    }
    if(bulb_no==A3){
    digitalWrite(A3,HIGH);
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 0);
    }
    if(bulb_no==A4){
    digitalWrite(A4,HIGH);
    analogWrite(2, 255);
    analogWrite(3, 255);
    analogWrite(4, 0);
    }
    if(bulb_no==A5){
    digitalWrite(A5,HIGH);
    analogWrite(44, 255);
    analogWrite(45, 255);
    analogWrite(46, 0);
    }
  }

// yellow color will light up according to the bulb number
  void yellow(int bulb_no){
  if(bulb_no==A1){
    digitalWrite(A1,HIGH);
    analogWrite(11, 0);
    analogWrite(12, 9);
    analogWrite(13, 255);
    }
    if(bulb_no==A2){
    digitalWrite(A2,HIGH);
    analogWrite(8, 0);
    analogWrite(9, 9);
    analogWrite(10, 255);
    }
    if(bulb_no==A3){
    digitalWrite(A3,HIGH);
    analogWrite(5, 0);
    analogWrite(6, 9);
    analogWrite(7, 255);
    }
    if(bulb_no==A4){
    digitalWrite(A4,HIGH);
    analogWrite(2, 0);
    analogWrite(3, 9);
    analogWrite(4, 255);
    }
    if(bulb_no==A5){
    digitalWrite(A5,HIGH);
    analogWrite(44, 0);
    analogWrite(45, 9);
    analogWrite(46, 255);
    }}

// red color will light up according to the bulb number
    void red(int bulb_no){
  if(bulb_no==A1){
    digitalWrite(A1,HIGH);
    analogWrite(11, 0);
    analogWrite(12, 255);
    analogWrite(13, 255);
    }
    if(bulb_no==A2){
    digitalWrite(A2,HIGH);
    analogWrite(8, 0);
    analogWrite(9, 255);
    analogWrite(10, 255);
    }
    if(bulb_no==A3){
    digitalWrite(A3,HIGH);
    analogWrite(5, 0);
    analogWrite(6, 255);
    analogWrite(7, 255);
    }
    if(bulb_no==A4){
    digitalWrite(A4,HIGH);
    analogWrite(2, 0);
    analogWrite(3, 255);
    analogWrite(4, 255);
    }
    if(bulb_no==A5){
    digitalWrite(A5,HIGH);
    analogWrite(44, 0);
    analogWrite(45, 255);
    analogWrite(46, 255);
    }}

// white color will light up according to the bulb number
    void white(int bulb_no){
  if(bulb_no==A1){
    digitalWrite(A1,HIGH);
    analogWrite(11, 0);
    analogWrite(12, 0);
    analogWrite(13, 0);
    }
    if(bulb_no==A2){
    digitalWrite(A2,HIGH);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
    }
    if(bulb_no==A3){
    digitalWrite(A3,HIGH);
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(7, 0);
    }
    if(bulb_no==A4){
    digitalWrite(A4,HIGH);
    analogWrite(2, 0);
    analogWrite(3, 0);
    analogWrite(4, 0);
    }
    if(bulb_no==A5){
    digitalWrite(A5,HIGH);
    analogWrite(44, 0);
    analogWrite(45, 0);
    analogWrite(46, 0);
    }}

//orange color will light up according to the bulb number
    void orange(int bulb_no){
  if(bulb_no==A1){
    digitalWrite(A1,HIGH);
    analogWrite(11, 0);
    analogWrite(12, 145);
    analogWrite(13, 255);
    }
    if(bulb_no==A2){
    digitalWrite(A2,HIGH);
    analogWrite(8, 0);
    analogWrite(9, 145);
    analogWrite(10, 255);
    }
    if(bulb_no==A3){
    digitalWrite(A3,HIGH);
    analogWrite(5, 0);
    analogWrite(6, 145);
    analogWrite(7, 255);
    }
    if(bulb_no==A4){
    digitalWrite(A4,HIGH);
    analogWrite(2, 0);
    analogWrite(3, 145);
    analogWrite(4, 255);
    }
    if(bulb_no==A5){
    digitalWrite(A5,HIGH);
    analogWrite(44, 0);
    analogWrite(45, 145);
    analogWrite(46, 255);
    }
  }

// got from internet :) :) this fade the all bulbs 
  void fade() {
  digitalWrite(A5,HIGH);
  digitalWrite(A4,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(A1,HIGH);
  unsigned int rgbColour[3];

  // Start off with red.
  rgbColour[0] = 255;
  rgbColour[1] = 0;
  rgbColour[2] = 0;  

  // Choose the colours to increment and decrement.
  for (int decColour = 0; decColour < 3; decColour += 1) {
    int incColour = decColour == 2 ? 0 : decColour + 1;

    // cross-fade the two colours.
    for(int i = 0; i < 255; i += 1) {
      rgbColour[decColour] -= 1;
      rgbColour[incColour] += 1;
      
      setColourRgb(rgbColour[0], rgbColour[1], rgbColour[2]);
      delay(5);
    }
  }
}

// got from internet :) :) this relate to fade function above 
void setColourRgb(int red,int green,int blue) {
  ////////////
  analogWrite(44, red);
  analogWrite(45, green);
  analogWrite(46, blue);
   ////////////
  analogWrite(2, red);
  analogWrite(3, green);
  analogWrite(4, blue);
   ////////////
  analogWrite(5, red);
  analogWrite(6, green);
  analogWrite(7, blue);
   ////////////
  analogWrite(8, red);
  analogWrite(9, green);
  analogWrite(10, blue);
   ////////////
  analogWrite(11, red);
  analogWrite(12, green);
  analogWrite(13, blue);
 }
