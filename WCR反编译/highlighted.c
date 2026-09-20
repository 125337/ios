// highlighted @ 017d2304

/* Function Stack Size: 0x10 bytes */

bool WCRAISettingsAction::highlighted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

