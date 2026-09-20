// setEmoticonPlaying: @ 01c37850

/* Function Stack Size: 0x14 bytes */

void WCRNameplateLibraryCell::setEmoticonPlaying_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_emoticonPlaying) = (byte)param_3 & 1;
  return;
}

