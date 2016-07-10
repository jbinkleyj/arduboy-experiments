#ifndef BOOM_H
#define BOOM_H

const uint8_t boomFrameCount = 5;
const uint8_t boomFrameWidth = 16;
const uint8_t boomFrameHeight = 16;
const uint8_t PROGMEM boomFrames[][32] = {
  /* Frame number 0
                      
                      
                      
                      
              ##      
                      
              #       
             #        
              ##      
            #  #      
              #       
             #        
                      
                      
                      
                      
  */
  {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x50,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x08,0x05,0x03,0x00,0x00,0x00,0x00,0x00,0x00},
  /* Frame number 1
                      
                      
                      
                #     
               #  #   
           # ## # #   
         #########    
          #######     
           #### #     
           ####       
          # # # #     
              #  #    
             #        
                      
                      
                      
  */
  {0x00,0x00,0x00,0x40,0xc0,0xe0,0xc0,0xe0,0xe0,0xd0,0xe8,0x40,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x03,0x07,0x13,0x0f,0x00,0x05,0x08,0x00,0x00,0x00,0x00},
  /* Frame number 2
                      
                      
                      
              #       
                  #   
           ### #  #   
        #   ########  
             ### #    
         #   ###      
             ###      
            ####      
           #   # #    
                      
                      
                      
                      
  */
  {0x00,0x00,0x40,0x00,0x00,0x20,0x60,0xe0,0xc8,0xe0,0x40,0xc0,0x70,0x40,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x04,0x07,0x07,0x0f,0x00,0x08,0x00,0x00,0x00,0x00},
  /* Frame number 3
                      
                      
                      
                      
             #    #   
           ##  #  #   
        #  #     ###  
                      
         ###  #       
          #    #      
            # ## #    
           #  #  #    
                      
                      
                      
                      
  */
  {0x00,0x00,0x40,0x00,0x00,0x60,0x20,0x10,0x00,0x20,0x00,0x40,0x70,0x40,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x09,0x04,0x00,0x0d,0x06,0x00,0x0c,0x00,0x00,0x00,0x00},
  /* Frame number 4
                      
                      
         #    #       
          ##       #  
          #           
        # #        ## 
                 ###  
         #      #     
                  #   
         #       #    
                      
               #      
                      
                      
                      
                      
  */
  {0x00,0x00,0x20,0x84,0x38,0x08,0x00,0x00,0x04,0x00,0x80,0x40,0x40,0x68,0x20,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x02,0x01,0x00,0x00,0x00}
};

#endif
