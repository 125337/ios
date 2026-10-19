// overrideStatusBar @0xab47c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::overrideStatusBar(ID param_1,SEL param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined1 local_11;
  
  _objc_msgSend_navigationController(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_presentingViewController(param_1,local_48);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_prefersStatusBarHidden(uVar3,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

