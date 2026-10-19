// _WCMYBIBStatusbarHeight @0x83a10

undefined1  [16] _WCMYBIBStatusbarHeight(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double in_d3;
  undefined8 local_78;
  double local_18;
  
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_delegate(uVar1,local_78);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_window(uVar2,local_78);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_18 = (double)_objc_msgSend_safeAreaInsets(uVar3,local_78);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_18 <= 0.0) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_statusBarFrame(uVar1,local_78);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_18 = in_d3;
  }
  if (local_18 <= 0.0) {
    local_18 = 20.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_18;
  return auVar4;
}

