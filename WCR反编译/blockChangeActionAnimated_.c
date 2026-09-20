// blockChangeActionAnimated: @ 0170f3e0

/* Function Stack Size: 0x14 bytes */

void SwitchThemesDayNight::blockChangeActionAnimated_(ID param_1,SEL param_2,bool param_3)

{
  *(undefined1 *)(param_1 + (long)_shouldSkipChangeAction) = 1;
  *(byte *)(param_1 + (long)_shouldAnimate) = (byte)param_3 & 1;
  return;
}

