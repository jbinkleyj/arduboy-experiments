#ifndef MUSIC_H
#define MUSIC_H

// 1, 5, 1(8)

// A E A

const byte PROGMEM powerIntroMusic[] = {
  TUNE_OP_PLAYNOTE | 0, 48, // C POWER CHORD:
  TUNE_OP_PLAYNOTE | 1, 54, // G
  TUNE_OP_PLAYNOTE | 2, 60, // C
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 48, // C POWER CHORD:
  TUNE_OP_PLAYNOTE | 1, 54, // G
  TUNE_OP_PLAYNOTE | 2, 60, // C
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 48, // C POWER CHORD:
  TUNE_OP_PLAYNOTE | 1, 54, // G
  TUNE_OP_PLAYNOTE | 2, 60, // C
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 48, // C POWER CHORD:
  TUNE_OP_PLAYNOTE | 1, 54, // G
  TUNE_OP_PLAYNOTE | 2, 60, // C
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 50, // D POWER CHORD:
  TUNE_OP_PLAYNOTE | 0, 56, // A
  TUNE_OP_PLAYNOTE | 0, 62, // D
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 50, // D POWER CHORD:
  TUNE_OP_PLAYNOTE | 0, 56, // A
  TUNE_OP_PLAYNOTE | 0, 62, // D
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 50, // D POWER CHORD:
  TUNE_OP_PLAYNOTE | 0, 56, // A
  TUNE_OP_PLAYNOTE | 0, 62, // D
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_PLAYNOTE | 0, 50, // D POWER CHORD:
  TUNE_OP_PLAYNOTE | 0, 56, // A
  TUNE_OP_PLAYNOTE | 0, 62, // D
  0, 124,
  TUNE_OP_STOPNOTE | 0,
  TUNE_OP_STOPNOTE | 1,
  TUNE_OP_STOPNOTE | 2,
  0, 124,
  TUNE_OP_RESTART
};

const byte PROGMEM introMusic[] = {
  TUNE_OP_PLAYNOTE | 0, 60, // PLAY_NOTE on CHAN0, middle C
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 62, // PLAY_NOTE on CHAN0, D
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 64, // PLAY_NOTE on CHAN0, E
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 65, // PLAY_NOTE on CHAN0, F
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 67, // PLAY_NOTE on CHAN0, G
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 69, // PLAY_NOTE on CHAN0, A
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 71, // PLAY_NOTE on CHAN0, B
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_PLAYNOTE | 0, 72, // PLAY_NOTE on CHAN0, C
  0x00, 200,                // Wait 200 msec
  TUNE_OP_STOPNOTE | 0,     // STOP_NOTE on CHAN0
  TUNE_OP_RESTART | 0       // RESTART on CHAN0
};

#endif