// setDraftDirty: @ 01c4f3f8

/* Function Stack Size: 0x14 bytes */

void WCRefineNameplateSpecialUserDetailViewController::setDraftDirty_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_draftDirty) = (byte)param_3 & 1;
  return;
}

