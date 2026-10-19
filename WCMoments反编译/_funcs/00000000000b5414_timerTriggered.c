// timerTriggered @0xb5414

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::timerTriggered(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  _objc_msgSend_setEditing_resetCropBox_animated_(param_1,param_2,0,1,1);
  _objc_msgSend_resetTimer(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setResetTimer_(param_1,local_28,0);
  return;
}

