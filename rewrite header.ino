/*
Project - rewrite existing code to suitable format
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

#define UNUSED1        1    //  physical Pin 7  |   RESET| PC6    |
#define UNUSED2        2    //  physical Pin 8  |   RXD  | PD0    |
#define UNUSED3        3    //  physical Pin 9  |   TXD  | PD1    |   
#define UNUSED4        4    //  physical Pin 10 |   INT0 | PD2    | 


#define B_FORWARDS     5    //  physical Pin 7  |   PWM | PD3     |
#define B_BACKWARDS    6    //  physical Pin 7  |       | PD4     |        
#define POWERVCC       91   //  physical Pin 7  |   POWERVCC      |

#define GROUND         92   //  physical Pin 7  |   GROUND        |
#define UNUSED5        93   //  physical Pin 7  |   CRYSTAL | PB6 |
#define UNUSED6        94   //  physical Pin 7  |   CRYSTAL | PB7 |

#define B_UP 18        7    //  physical Pin 7  |   PD5           |
#define B_DOWN         8    //  physical Pin 7  |   PD6           |
#define B_TRIGHT 20    9    //  physical Pin 7  |   PD7           |
#define B_TLEFT 10     10   //  physical Pin 7  |   PB0           |

#define B_BOOST1 9     11   //  physical Pin 7  |   PC5  | ANLG 5 |
#define B_BOOST2 6     12   //  physical Pin 7  |   PC4  | ANLG 4 |

#define B_EXTRA1 5     13   //  physical Pin 7  |   PC3  | ANLG 3 |
#define B_EXTRA2 3     14   //  physical Pin 7  |   PC2  | ANLG 2 |
#define B_BOOST3 2     15   //  physical Pin 7  |   PC1  | ANLG 1 |
#define B_BOOST4 2     16   //  physical Pin 7  |   PC0  | ANLG 0 |

#define GROUND2        95   //  physical Pin 7  |   GROUND        |
#define ANLG_REF       96   //  physical Pin 7  |   ANLG REF      |
#define UNUSED5        97   //  physical Pin 7  |   POWERVCC      |
#define UNUSED6        17   //  physical Pin 7  |   PD13 | PWM    |
#define UNUSED7 21     18   //  physical Pin 7  |   PD12 | PWM    |
#define UNUSED8 21     19   //  physical Pin 7  |   PD11 | PWM    |
#define UNUSED9 21     20   //  physical Pin 7  |   PD10 | PWM    |
#define UNUSED10 21    21   //  physical Pin 7  |   PD9  | PWM    |

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

