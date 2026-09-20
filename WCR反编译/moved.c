// moved @ 0170fd8c

/* Function Stack Size: 0x10 bytes */

bool SwitchThemesDayNight::moved(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_moved) & 1;
}

