// setMinimumAspectRatio: @0xab890

/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::setMinimumAspectRatio_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMinimumAspectRatio_(param_3,uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

