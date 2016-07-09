const uint8_t pewFrameCount = 3;

const uint8_t PROGMEM pew[][8] = {
  /* Frame number 0
              
       #      
      # #     
      # #     
      # #     
       #      
              
              
  */
  {0x38,0x44,0x38,0x00,0x00,0x00,0x00,0x00},
  /* Frame number 1
              
         #    
        # #   
        # #   
        # #   
         #    
              
              
  */
  {0x00,0x00,0x38,0x44,0x38,0x00,0x00,0x00},
  /* Frame number 2
       #      
      # #   # 
      # #  # #
      # #  # #
      # #  # #
      # #   # 
       #      
              
  */
  {0x7c,0x82,0x7c,0x00,0x00,0x38,0x44,0x38}
};
