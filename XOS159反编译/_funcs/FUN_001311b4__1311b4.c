// FUN_001311b4 @0x1311b4


void FUN_001311b4(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_00291ee0(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00297fa0();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    FUN_00291ee0(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00291ec0(auVar5._0_8_,auVar5._8_8_,

                 *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360,0,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar5._0_8_);

    uVar3 = _objc_opt_class(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_opt_isKindOfClass(uVar1,uVar3);

    if ((uVar4 & 1) != 0) goto LAB_0013126c;

    _objc_release(uVar1);

  }

  FUN_002a5060(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

LAB_0013126c:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




