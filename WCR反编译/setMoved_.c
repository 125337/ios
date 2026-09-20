// setMoved: @ 0170fdb8

/* Function Stack Size: 0x14 bytes */

void SwitchThemesDayNight::setMoved_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_moved) = (byte)param_3 & 1;
  return;
}

