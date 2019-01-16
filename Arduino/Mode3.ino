// SEQUENCER

// SETTINGS ///////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////

extern unsigned long states[32];
extern int last_xbend;
extern int last_ybend;
extern int bpm;
extern bool notes[12];
extern int octave;
extern Adafruit_NeoTrellisM4 trellis;
extern Adafruit_ADXL343 accel;

void Mode3_Init() {

  Serial.println("Mode 3 Initialized");
  clearAllButtons();
}

void Mode3_Quit() {
  
}

void Mode3_Update(int xBend, int yBend) {

}

void Mode3_KeyEvent(uint8_t key, uint8_t type) {

  // catch global settings
  //if (type == 2 && key > 15 && key < 24) {
  //
  //  return;
  //}

  switch(type) {

    case 0: 

      // down

      break;

    case 1:
    
      // regular press
      
      break;

    case 2:

      // long press

      break;
      
    case 3: 
      
      // double press

      break;
  }
}
