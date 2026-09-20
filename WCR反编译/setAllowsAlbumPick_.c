// setAllowsAlbumPick: @ 016e50f0

/* Function Stack Size: 0x14 bytes */

void RepeatThemeIconSelectorViewController::setAllowsAlbumPick_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_allowsAlbumPick) = (byte)param_3 & 1;
  return;
}

