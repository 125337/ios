// setIsOffline: @ 01fcaa8c

/* Function Stack Size: 0x14 bytes */

void WebViewController::setIsOffline_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isOffline) = (byte)param_3 & 1;
  return;
}

