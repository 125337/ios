// on @ 0170fa04

/* Function Stack Size: 0x10 bytes */

bool SwitchThemesDayNight::on(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_on) & 1;
}

