const uint8_t tankFrameCount = 3;

const uint8_t PROGMEM tank[][8] = {
  /* Frame number 0
      ## ## # 
       #   #  
       # #    
       # #####
       # #    
       #   #  
      # ## ## 
              
  */
  {0x82,0xfc,0x02,0xba,0x90,0x56,0x92,0x10},
  /* Frame number 1
      # ## ## 
       #   #  
       # #    
       # #####
       # #    
       #   #  
       ## ### 
              
  */
  {0x80,0x7e,0x82,0xb8,0x12,0xd6,0x92,0x10},
  /* Frame number 2
       ## ### 
       #   #  
       # #    
       # #####
       # #    
       #   #  
      ## ###  
              
  */
  {0x02,0xfe,0x80,0x3a,0x92,0xd6,0x90,0x10}
};
