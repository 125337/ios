// setEmoticonImageSize: @ 01c3790c

/* Function Stack Size: 0x20 bytes */

void WCRNameplateLibraryCell::setEmoticonImageSize_(ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  lVar1 = (long)_emoticonImageSize;
  ((undefined8 *)(param_1 + lVar1))[1] = in_d1;
  *(undefined8 *)(param_1 + lVar1) = in_d0;
  return;
}

