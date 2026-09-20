// setMyPageSettingsExpanded: @ 01f4584c

/* Function Stack Size: 0x14 bytes */

void WCRefineUICleanViewController::setMyPageSettingsExpanded_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_myPageSettingsExpanded) = (byte)param_3 & 1;
  return;
}

