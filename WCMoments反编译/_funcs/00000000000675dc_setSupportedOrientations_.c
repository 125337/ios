// setSupportedOrientations: @0x675dc

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::setSupportedOrientations_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  _objc_msgSend_rotationHandler(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSupportedOrientations_(uVar1,local_40,param_3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

