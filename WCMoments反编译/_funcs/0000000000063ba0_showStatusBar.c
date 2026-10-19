// showStatusBar @0x63ba0

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::showStatusBar(ID param_1,SEL param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  uVar2 = _objc_msgSend_shouldHideStatusBar(param_1);
  if ((uVar2 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + (long)_originStatusBarHidden);
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_38);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setStatusBarHidden_(uVar3,local_38,bVar1 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  return;
}

