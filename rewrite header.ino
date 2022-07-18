/*
Project - rewite existing code to suitable format
version : 0v01
Author Simon J Bird
 */


/// ================================ CODE HEADER ============================///
#define VERSION "0v01"
#define VERSIONNUMBER 001

/// ================================ INCLUDES ==============================///
#include <EEPROM.h>
#include <Keyboard.h>

/// ================================ DEFINES  ==============================///

#define CHIPSET "ATMega"
#define EMBEDDED_SYSTEM "adafruit-feather-32u4-bluefruit-le"
#define COMPILER_INFO "1.8.14"

 
#define CODING_DEBUG_FULL    true
#define CODING_DEBUG_MEDIUM  true
#define ERROR_LOGGING        true

/// ========================= HARDWARE WIRED - SET ======================== ///

//******************* PIN DEFINES FIXED ******************//
// what you should have here is a wiring diagram 
// ALL the pins used, even if commented out, as hardware only

                            //  physical Pin 7  |   POWERVCC  |
                            //  physical Pin 8  |   POWERGRD1 |
                            //  physical Pin 9  |   Crystal   |   
                            //  physical Pin 10 |   Crystal   | 


#define B_FORWARDS 13       //  physical Pin 7  |   GPIO      |
#define B_BACKWARDS 12      //  physical Pin 7  |   POWERVCC  | 
#define B_BOOST1 11         //  physical Pin 7  |   POWERVCC  |

#define B_LEFT 21           //  physical Pin 7  |   POWERVCC  |
#define B_RIGHT 22          //  physical Pin 7  |   POWERVCC  |
#define B_BOOST2 23         //  physical Pin 7  |   POWERVCC  |

#define B_UP 18             //  physical Pin 7  |   POWERVCC  |
#define B_DOWN 19           //  physical Pin 7  |   POWERVCC  |
#define B_BOOST3 20         //  physical Pin 7  |   POWERVCC  |
            
#define B_TLEFT 10          //  physical Pin 7  |   POWERVCC  |
#define B_TRIGHT 9          //  physical Pin 7  |   POWERVCC  |
#define B_BOOST4 6          //  physical Pin 7  |   POWERVCC  |

#define B_EXTRA1 5          //  physical Pin 7  |   POWERVCC  |
#define B_EXTRA2 3          //  physical Pin 7  |   POWERVCC  |
#define B_BOOST5 2          //  physical Pin 7  |   POWERVCC  |

#define B_INTERACT 1 

/// ============================ SOFTWARE SET  =============================///

bool Running = false;



bool Hardware_setup( void )   // THIS IS WIRED, IE CIRCUIT BOARD
{
    pinMode(B_FORWARDS,INPUT);
    pinMode(B_BACKWARDS,INPUT);
    pinMode(B_BOOST1,INPUT);
    
    pinMode(B_LEFT,INPUT);
    pinMode(B_RIGHT,INPUT);
    pinMode(B_BOOST2,INPUT);
    
    pinMode(B_UP,INPUT);
    pinMode(B_DOWN,INPUT);
    pinMode(B_BOOST3,INPUT);
    
    pinMode(B_TLEFT,INPUT);
    pinMode(B_TRIGHT,INPUT);
    pinMode(B_BOOST4,INPUT);
  
    pinMode(B_EXTRA1,INPUT);
    pinMode(B_EXTRA2,INPUT);
    pinMode(B_BOOST5,INPUT);
  
    pinMode(B_INTERACT,INPUT);
    return true;
}

