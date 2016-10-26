#include <TrinketHidCombo_m.h>
#define VFO_UP   2
#define VFO_DOWN 0
#define MODE     5

static uint8_t enc_prev_pos   = 0;
static uint8_t enc_flags      = 0;
void setup()
{  
   pinMode(VFO_UP, INPUT);
   pinMode(VFO_DOWN, INPUT);
   pinMode(MODE, INPUT);

   digitalWrite(VFO_UP, LOW);
   digitalWrite(VFO_DOWN, LOW);
   //digitalWrite(MODE, LOW);
  
  TrinketHidCombo.begin(); 
}

void loop(){
  if(!digitalRead(VFO_UP) ==HIGH) {
     TrinketHidCombo.pressKey(0x01,0xXX);
     TrinketHidCombo.pressKey(0,0);
    delay(10); 
    }else{
   }
    
   
  if(!digitalRead(VFO_DOWN) ==HIGH) {
      TrinketHidCombo.pressKey(0x01,0xXX);
      TrinketHidCombo.pressKey(0,0);
     delay(10);
    // }else{
   //}
   
 // if(!digitalRead(MODE) ==HIGH) {
     // TrinketHidCombo.pressKey(0x01,0x19);
     // TrinketHidCombo.pressKey(0,0);
     // delay(10);
    
   }
    
    TrinketHidCombo.poll(); 
}
