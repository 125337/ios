// allowsAlbumPick @ 016e50c4

/* Function Stack Size: 0x10 bytes */

bool RepeatThemeIconSelectorViewController::allowsAlbumPick(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_allowsAlbumPick) & 1;
}

