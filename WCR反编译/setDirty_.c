// setDirty: @ 01843fa8

/* Function Stack Size: 0x14 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::setDirty_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_dirty) = (byte)param_3 & 1;
  return;
}

