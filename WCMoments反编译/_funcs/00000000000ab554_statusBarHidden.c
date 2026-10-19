// statusBarHidden @0xab554

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropViewController::statusBarHidden(ID param_1,SEL param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined1 local_11;
  
  _objc_msgSend_navigationController(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_presentingViewController(param_1,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_msgSend_prefersStatusBarHidden(uVar3,local_40);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar1 & 1) == 0) {
      local_11 = 1;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    _objc_msgSend_navigationController(param_1,local_40);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_11 = _objc_msgSend_prefersStatusBarHidden(uVar3,local_40);
    local_11 = local_11 & 1;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  return (uint)local_11;
}

