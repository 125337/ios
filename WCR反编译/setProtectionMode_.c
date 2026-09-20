// setProtectionMode: @ 019acaa8

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setProtectionMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_protectionMode) = (byte)param_3 & 1;
  return;
}

