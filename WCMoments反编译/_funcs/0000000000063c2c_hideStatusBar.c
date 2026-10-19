// hideStatusBar @0x63c2c

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::hideStatusBar(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  uVar1 = _objc_msgSend_shouldHideStatusBar(param_1);
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_30);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setStatusBarHidden_(uVar2,local_30,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  return;
}

