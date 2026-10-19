// setEditing: @0xb66c0

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setEditing_(ID param_1,SEL param_2,bool param_3)

{
  _objc_msgSend_setEditing_resetCropBox_animated_(param_1,param_2,param_3 & 1,0,0);
  return;
}

