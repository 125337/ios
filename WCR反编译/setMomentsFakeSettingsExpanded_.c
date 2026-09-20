// setMomentsFakeSettingsExpanded: @ 01c22144

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsViewController::setMomentsFakeSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_momentsFakeSettingsExpanded) = (byte)param_3 & 1;
  return;
}

