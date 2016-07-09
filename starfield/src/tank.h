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
  {0x5b,0x22,0x0a,0xfa,0x0a,0x22,0x6d,0x00},
  /* Frame number 1
      # ## ##
       #   #
       # #
       # #####
       # #
       #   #
       ## ###

  */
  {0x6d,0x22,0x0a,0xfa,0x0a,0x22,0x76,0x00},
  /* Frame number 2
       ## ###
       #   #
       # #
       # #####
       # #
       #   #
      ## ###

  */
  {0x76,0x22,0x0a,0xfa,0x0a,0x22,0x3b,0x00}
};
