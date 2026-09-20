// setMomentsAutoLikeSettingsExpanded: @ 01c221a0

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsViewController::setMomentsAutoLikeSettingsExpanded_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_momentsAutoLikeSettingsExpanded) = (byte)param_3 & 1;
  return;
}

