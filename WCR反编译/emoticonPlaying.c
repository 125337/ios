// emoticonPlaying @ 01c37824

/* Function Stack Size: 0x10 bytes */

bool WCRNameplateLibraryCell::emoticonPlaying(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_emoticonPlaying) & 1;
}

