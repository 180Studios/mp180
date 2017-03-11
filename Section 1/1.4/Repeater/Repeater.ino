
void setup() {  
  Serial.begin(9600);
  while (!Serial) {}
  Serial.println("Staring Serial Repeater");
}

void loop() { 
  if(Serial.available() > 0 ){   
    String message = serialMessage();
<<<<<<< HEAD:Section 1/1.4/Repeater/Repeater.ino
    //add code here
=======
    /*enter code that prints message to serial port*/
>>>>>>> de63e9065bda6b0896e2ad0ac9e75bb2967af2cf:Repeater/Repeater.ino
  }
}

String serialMessage(){
  String message = "";
   while(Serial.available() > 0) {
      message += char(Serial.read());
      delay(5);
    }
    return message;
}



