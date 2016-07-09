const uint8_t bannerFrameCount = 1;

const uint8_t PROGMEM banner[][1024] = {
  /* Frame number 0
                                                                                                                                      
                                       ######          ########                                                                       
                                 #############         #########                                                                      
                                ################       ##########   #########                                                         
                             #  ################       ##########   ####################                                              
                            ### #################      ##########   #####################        ############                         
                           #### #################     ############   ####################    ##################                       
                          #####  ######  ########     ############   #####################   ###################                      
                         ######  ######   ########    ############    ####################    ###################                     
                         ######  #######   #######   #############    ############     ####    ##################                     
                        #######  #######   #######   ##############    ########          ###   ###################                    
                       ########  #######   #######   ##############    #########          ##    ###################                   
                      #########  #######   #######   ##############    #########           ##    ###################                  
                    #########    ####### ########## #######  #######   ##########                ####################                 
                  ##########     ####### ########## #######  #######    ##########               #####################                
                 ##########       ################# ######    #######   ##########                ####################                
              ############   ##   ################# ######    #######    #########                ##########                          
            ##############  ####  ########################     #######    #########                ##########                         
           ############## ######  ########################     #######    ##########               ##########  ###########            
           ############  #######   ############### #######      #######    #########                #######################           
           ########### #########   #######################       ######     #########               #######################           
          ##########  ##########   ########   ### #######   #### #######    ##########               ######################           
         ########## ############   ########       ######################     ##########              ######################           
         #######################   #########      #######################    ##########              ######################           
         #######################   #########     #########################    ##########             ######################           
         #######################   #########     ############## ##########    ##########      ##     ######################           
         ################ #######   ########     ############## ###########   ###########  #####      ##########      #####           
         ############### ########   ########     #############  ############   ##################     ##########                      
         ############## #########   ########     #############  #############  ###################    ################                
         ############# ##########   ########    ##############   ############   ###################    ######################         
         ###########  ###########   ############ #############    ########## ##  ####################  ######################         
         ##########  ############# ####### #####################   ## #### ####  ###################   ######################         
         ######### ######################### ### ########## ### #  ##   ## #### ##  ####### ######  # #######################         
         #######  #######################    ##   #### #### ##    ###      ####  # ####### #    ###  #  #####################         
         #####    ################## ###     ### ########                ##     # ########   #  ###    ######################         
         ###    ################## ######    # ## ###  # ##          #   ## ### #    #  ###      ##   #######################         
         ##   ########## ### #### #### ###   ### #  ####            #         # #      ### #   #     # #####################          
             ###########   ## ####   ####     #      ##  #    ###           # # # ##  #     #         ###  ####### ###### ###         
           ##############  #####    ##  # #    #        #    ##         ##  ###                     ###  #  #######   #####           
           ################  #                              ###   ###  ###########  #####             #  #        #   ### ##          
           ### ############ ##                              ####  ###  ########### #########                     ### #  ####          
          # ############# #           ####            #### ###### ###  ##########  #########                      #   # # #           
         # # ######## ##             ###########    ###### ###### ###  ########    #########                            #   #         
             ### ####                ############  #######  #########  #######    #####   ###                                         
             #  # ###                ############ ########  #########  ######     ###########                                         
             # ##                    ###########  ########  ##########  #####     ###########                                         
           # #                          #####     ######### ##########  #######   ###########                                         
           ####                         #####    ##########  #########  ########  ####   ####                                         
           ###                          #####    ###########  ########  #########     #######                                         
           ##                           #####    ###########  #### ###  #########    ########                                         
                                        #####    ############  ###  ##  #### ####  ########                                           
                                        #####    ##### ###### ###       # #######  ######                                             
                                       # ####   #####   #### ##  ##         #    #######                                              
                                          ##    #####  ####   ##    #              ##                                        #        
                                                 #  ###                             #                                  # ##  # ##  ## 
                                                  #  #                                                                 # # # # # # #  
                                                   #                                                                   # ##  # # # # #
          ##    #  ##### #  #         #           ###         #  #                                                    #  ### # ##   # 
          # #  # #   #   #  #  #     #            #          ### #        ##   #                                                      
          # #  # #   #  ### # # #    ##  #  # #   ##   #  # # #  # #     #  # # # # # # #                                             
          ##   # #   #   #  # ###    #  # # ##    #   # # ##  #  ## #      #  # #  #   #                                ### #  # ###  
          # # # # #  #   #  # #      #  # # #     #   # # #   #  #  #     #   # #  #   #                                 # # # # #    
          ##  #   #  #   #  #  ##    #   #  #     ###  ## #   #  #  #    ####  #  # # # #                               #  # # # ###  
                                                                                                                        ### #  # ###  
  */
  {0x00,0x00,0x00,0x00,0x7e,0x4a,0x34,0x00,0x06,0x38,0x44,0x38,0x06,0x40,0x40,0x7e,0x40,0x40,0x10,0x7e,0x10,0x00,0x7e,0x00,0x1c,0x2a,0x1a,0x00,0x00,0x00,0x00,0x3e,0x50,0x00,0x0c,0x12,0x0c,0x00,0x1e,0x08,0x10,0x00,0x00,0x00,0x7e,0xd2,0x42,0x00,0x0c,0x12,0x0e,0x00,0x1e,0x08,0x10,0x20,0x7e,0x20,0x00,0x7e,0x08,0x10,0x0e,0x00,0x00,0x00,0x00,0x12,0x26,0x2a,0x12,0x00,0x1c,0x22,0x1c,0x00,0x12,0x0c,0x12,0x00,0x12,0x0c,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x0b,0xcd,0xc9,0x46,0x09,0xc6,0x00,0xcf,0x40,0x8f,0x0b,0x8b,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0xc0,0xc0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0xf0,0xf8,0xfc,0xfc,0xf8,0x00,0x00,0x00,0x0c,0xfe,0xfd,0xfc,0xfe,0xf3,0xe2,0xf4,0xfc,0xfc,0xfc,0xf8,0x30,0x08,0xdc,0xf4,0xf0,0xe8,0x88,0xc0,0xe4,0xe0,0x00,0x00,0xf0,0xe0,0xf0,0xf0,0xd8,0xf0,0xf0,0xf0,0xf0,0x08,0x08,0x3c,0x3e,0x78,0xf8,0xf8,0xf0,0xe0,0xe0,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x02,0x01,0x00,0x07,0x00,0x03,0x02,0x01,0x00,0x03,0x02,0x00,0x00,0x00,0x00,0x20,0x40,0xa3,0xc1,0xff,0x71,0xf4,0xec,0xf0,0xf8,0xf8,0xf8,0xc0,0xe0,0xe0,0xc0,0x80,0xc0,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x7c,0x7c,0x7f,0x7f,0x3f,0x3f,0x3f,0x3c,0x3c,0x3c,0x18,0x01,0x0f,0x1f,0x3f,0x3f,0x7f,0x7f,0x7f,0x7f,0x03,0x60,0xfe,0xff,0xff,0xff,0x7f,0x1f,0xff,0xff,0xff,0x07,0x00,0xf8,0xff,0xff,0xff,0xff,0xff,0xf3,0xe3,0xc1,0xc0,0x80,0x1f,0xff,0xff,0xff,0xfe,0xee,0xee,0xef,0xff,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0x80,0x00,0x80,0x40,0x00,0xe0,0x80,0xc0,0x80,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,0xf8,0xf3,0xe3,0xe7,0xcf,0xcf,0x9f,0x9f,0x7f,0xff,0xff,0xff,0xff,0xff,0xf3,0xf9,0xf9,0xfe,0xf6,0xfb,0xfe,0xfe,0xfc,0xf4,0xe8,0xf8,0xda,0xfe,0xf4,0xfc,0xde,0x88,0x82,0x80,0x00,0xf8,0xec,0xba,0x10,0xa8,0xf0,0xf0,0xf8,0xec,0xac,0xf8,0xe2,0xd4,0xd0,0x00,0xc1,0xc3,0x87,0x04,0x84,0x00,0x41,0xc1,0xc9,0x10,0x00,0x01,0x83,0xb3,0x31,0xc1,0xd7,0xd3,0xdf,0x01,0xbd,0xc1,0x24,0x64,0xe1,0xf1,0xe5,0xe9,0xf9,0xf8,0x90,0x48,0x84,0xa0,0x80,0x88,0xe0,0xf0,0x70,0x00,0x82,0x4a,0x97,0xbc,0xfc,0xfb,0xf8,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfb,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xfa,0xff,0xfd,0xf4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfc,0xfd,0xfb,0xf7,0xef,0xdf,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x01,0x00,0xc1,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0x03,0x03,0x03,0x03,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe1,0x81,0xf8,0xfc,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0x3e,0x1f,0x0d,0x03,0xe3,0xf8,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x1f,0x1f,0x3f,0x3f,0x3f,0x7f,0x7f,0x1f,0x0f,0x07,0x03,0x02,0xc0,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xcf,0xcf,0xcf,0xcf,0xcf,0xe7,0xe7,0xe7,0xe7,0xe7,0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x3f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xfd,0xfb,0xfb,0xf7,0xef,0xef,0xdf,0x3f,0x3f,0x7f,0xff,0xff,0x7f,0x00,0x00,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xf8,0xf8,0xfc,0xfc,0xfc,0xf8,0xef,0x7f,0xff,0xff,0xff,0xff,0xff,0xfb,0x03,0x03,0x07,0x07,0x87,0xe7,0xf3,0xff,0xff,0xff,0xff,0x7f,0x1f,0x07,0x01,0x80,0xe0,0xf0,0xfc,0xff,0xff,0xff,0xff,0xff,0x7f,0x3f,0x0f,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xe0,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x1f,0x1f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x03,0x07,0x07,0x0f,0x1f,0x3f,0xff,0xff,0xfe,0xfc,0xf8,0xf8,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xff,0x7f,0x01,0x07,0x87,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x00,0x07,0x7f,0xff,0xff,0xff,0xff,0xfe,0xf8,0xf8,0xfe,0xff,0xff,0xff,0xff,0x3f,0x07,0x01,0x00,0xc0,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0xc7,0xc3,0x80,0x80,0x80,0x80,0x80,0xc0,0xc0,0xe0,0x70,0x38,0x08,0x00,0x80,0xe0,0xf0,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3f,0x1f,0x0f,0x07,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0f,0x07,0x00,0x1e,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x7e,0x7e,0x7f,0x7f,0x7f,0x7f,0x3f,0x1f,0x1f,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x1f,0x03,0x00,0x00,0x1c,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x07,0x01,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};
