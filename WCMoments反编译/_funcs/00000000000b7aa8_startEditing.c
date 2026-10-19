// startEditing @0xb7aa8

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::startEditing(ID param_1,SEL param_2)

{
  undefined8 local_28;
  
  _objc_msgSend_cancelResetTimer(param_1);
  _objc_msgSend_setEditing_resetCropBox_animated_(param_1,local_28,1,0,1);
  return;
}

