// setIsOnBeforeDrag: @ 0170fe14

/* Function Stack Size: 0x14 bytes */

void SwitchThemesDayNight::setIsOnBeforeDrag_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isOnBeforeDrag) = (byte)param_3 & 1;
  return;
}

