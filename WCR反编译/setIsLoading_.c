// setIsLoading: @ 01fcaae8

/* Function Stack Size: 0x14 bytes */

void WebViewController::setIsLoading_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isLoading) = (byte)param_3 & 1;
  return;
}

