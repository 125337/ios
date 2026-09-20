// setOn: @ 0170f1c0

/* Function Stack Size: 0x14 bytes */

void SwitchThemesDayNight::setOn_(ID param_1,SEL param_2,bool param_3)

{
  if ((*(byte *)(param_1 + (long)_on) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_on) = (byte)param_3 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s__setOn__026b3758,param_3 & 1);
  }
  return;
}

