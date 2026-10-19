// setReverseContentLayout: @0xab064

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setReverseContentLayout_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  _objc_msgSend_toolbar(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setReverseContentLayout_(uVar1,local_40,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

