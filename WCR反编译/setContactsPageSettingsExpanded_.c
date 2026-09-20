// setContactsPageSettingsExpanded: @ 01f457f0

/* Function Stack Size: 0x14 bytes */

void WCRefineUICleanViewController::setContactsPageSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_contactsPageSettingsExpanded) = (byte)param_3 & 1;
  return;
}

