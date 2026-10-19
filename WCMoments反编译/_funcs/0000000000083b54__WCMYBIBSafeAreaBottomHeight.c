// _WCMYBIBSafeAreaBottomHeight @0x83b54

undefined1  [16]
_WCMYBIBSafeAreaBottomHeight(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_58;
  
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_delegate(uVar1,local_58);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_window(uVar2,local_58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_safeAreaInsets(uVar3,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  return auVar4;
}

