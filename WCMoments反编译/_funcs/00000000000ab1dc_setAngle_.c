// setAngle: @0xab1dc

/* Function Stack Size: 0x18 bytes */

void WCMTOCropViewController::setAngle_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAngle_(uVar1,local_40,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

