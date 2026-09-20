// setSuppressExternalReload: @ 01b7c88c

/* Function Stack Size: 0x14 bytes */

void WCRefineLongPressMenuViewController::setSuppressExternalReload_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_suppressExternalReload) = (byte)param_3 & 1;
  return;
}

