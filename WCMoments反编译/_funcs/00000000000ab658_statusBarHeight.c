// statusBarHeight @0xab658

/* Function Stack Size: 0x10 bytes */

double WCMTOCropViewController::statusBarHeight(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  double in_d2;
  undefined8 local_90;
  double local_28;
  
  _objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_28 = (double)_objc_msgSend_safeAreaInsets(uVar2,local_90);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_view(param_1,local_90);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_safeAreaInsets(uVar2,local_90);
  bVar1 = false;
  if (1.1920928955078125e-07 < in_d2) {
    _objc_msgSend_currentDevice(&_OBJC_CLASS___UIDevice,local_90);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = _objc_msgSend_userInterfaceIdiom(uVar3,local_90);
    bVar1 = lVar4 == 0;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar5 = _objc_msgSend_statusBarHidden(param_1,local_90);
  if (((uVar5 & 1) != 0) && (!bVar1)) {
    local_28 = 0.0;
  }
  return local_28;
}

