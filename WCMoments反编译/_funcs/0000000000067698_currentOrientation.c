// currentOrientation @0x67698

/* Function Stack Size: 0x10 bytes */

long_long WCMYBImageBrowser::currentOrientation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long_long lVar2;
  undefined8 local_38;
  
  _objc_msgSend_rotationHandler(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_currentOrientation(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return lVar2;
}

