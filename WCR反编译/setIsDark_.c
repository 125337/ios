// setIsDark: @ 016e5034

/* Function Stack Size: 0x14 bytes */

void RepeatThemeIconSelectorViewController::setIsDark_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isDark) = (byte)param_3 & 1;
  return;
}

