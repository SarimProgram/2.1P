// This isn't always required, but it's a good habit to get into 
// and it never hurts.
#include "Particle.h"

// We define MY_LED to be the LED that we want to blink. 
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon 
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. 
// It allows your code to run before the cloud is connected.
SYSTEM_THREAD(ENABLED);

// This function is called when the Particle.function is called
void ledDOT() {
    
	digitalWrite(MY_LED, HIGH);
    
    delay(200);
    
    digitalWrite(MY_LED, LOW);

    
    delay(500);
  
}


void ledDASH() {
    
	digitalWrite(MY_LED, HIGH);
    
    
    delay(200);
    
    digitalWrite(MY_LED, LOW);

    
    delay(500);
   
}


// The setup() method is called once when the device boots.
void setup() {
	// In order to set a pin, you must tell Device OS that the 
    // pin is an OUTPUT pin.
	// This is often done from setup() since you only need to 
    // do it once.
	pinMode(MY_LED, OUTPUT);

	// This registers a function call. When the function "led" 
    // is called from the cloud, the ledToggle() function above
    // will be called.

}

void loop() {
// My Name is Sarim
// For S
	ledDOT();
	ledDOT();
	ledDOT();
	
	delay(500);
// For A
	ledDOT();
	ledDASH();
	
	delay(500);
	
// FOR R
	ledDOT();
	ledDASH();
	ledDOT();
	
	delay(500);
// FOR I
	ledDOT();
	ledDOT();
	
	delay(500);

// FOR M
	ledDASH();
	ledDASH();
	
	delay(500);
	
		
}

