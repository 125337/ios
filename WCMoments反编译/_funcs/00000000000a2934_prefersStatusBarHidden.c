// prefersStatusBarHidden @0xa2934

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::prefersStatusBarHidden(ID param_1,SEL param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_58;
  undefined1 local_11;
  
  uVar3 = _objc_msgSend_overrideStatusBar(param_1);
  if ((uVar3 & 1) == 0) {
    bVar1 = _objc_msgSend_statusBarHidden(param_1,local_58);
    local_11 = (bool)(bVar1 & 1);
  }
  else {
    uVar2 = _objc_msgSend_inTransition(param_1,local_58);
    local_11 = false;
    if (((uVar2 ^ 1) & 1) != 0) {
      _objc_msgSend_view(param_1,local_58);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_superview(uVar4,local_58);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      local_11 = lVar5 != 0;
      (*(code *)PTR__objc_release_00110458)(lVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
  }
  return (uint)local_11;
}

