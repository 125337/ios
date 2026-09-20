// suppressExternalReload @ 01b7c860

/* Function Stack Size: 0x10 bytes */

bool WCRefineLongPressMenuViewController::suppressExternalReload(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_suppressExternalReload) & 1;
}

