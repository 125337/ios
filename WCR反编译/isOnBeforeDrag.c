// isOnBeforeDrag @ 0170fde8

/* Function Stack Size: 0x10 bytes */

bool SwitchThemesDayNight::isOnBeforeDrag(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isOnBeforeDrag) & 1;
}

