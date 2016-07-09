const uint8_t pewFrameCount = 3;

const **uint8_t pew = {
  /* Frame number 0
              
       #      
      # #     
      # #     
      # #     
       #      
              
              
  */
  {0x00,0x02,0x05,0x05,0x05,0x02,0x00,0x00},
  /* Frame number 1
              
         #    
        # #   
        # #   
        # #   
         #    
              
              
  */
  {0x00,0x08,0x14,0x14,0x14,0x08,0x00,0x00},
  /* Frame number 2
       #      
      # #   # 
      # #  # #
      # #  # #
      # #  # #
      # #   # 
       #      
              
  */
  {0x02,0x45,0xa5,0xa5,0xa5,0x45,0x02,0x00}
};
