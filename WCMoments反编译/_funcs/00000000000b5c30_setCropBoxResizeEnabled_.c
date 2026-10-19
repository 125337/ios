// setCropBoxResizeEnabled: @0xb5c30

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setCropBoxResizeEnabled_(ID param_1,SEL param_2,bool param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_40;
  
  *(byte *)(param_1 + (long)_cropBoxResizeEnabled) = (byte)param_3 & 1;
  bVar1 = *(byte *)(param_1 + (long)_cropBoxResizeEnabled);
  _objc_msgSend_gridPanGestureRecognizer(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setEnabled_(uVar2,local_40,bVar1 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

