const uint8_t batFrameCount = 2;

const uint8_t PROGMEM bat[][8] = {
  /* Frame number 0
              
              
         #    
       ## ##  
      # # # # 
              
              
              
  */
  {0x08,0x10,0x18,0x20,0x18,0x10,0x08,0x00},
  /* Frame number 1
              
              
      #  #  # 
       ## ##  
              
              
              
              
  */
  {0x20,0x10,0x10,0x20,0x10,0x10,0x20,0x00}
};