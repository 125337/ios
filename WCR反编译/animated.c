// animated @ 01707254

/* Function Stack Size: 0x10 bytes */

bool SwitchThemesLayerDelegate::animated(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

