// FUN_0011a3b8 @0x11a3b8


void FUN_0011a3b8(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 extraout_x1;

  float fVar3;

  undefined1 auVar4 [16];

  undefined *local_68;

  undefined8 local_60;

  code *local_58;

  undefined *puStack_50;

  undefined8 local_48;

  

  FUN_002a5f80(param_2);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar4._0_8_,auVar4._8_8_,

               *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_00388498);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295480();

  _objc_release(uVar1);

  _objc_release(auVar4._0_8_);

  _objc_getAssociatedObject(*(undefined8 *)(param_1 + 0x20),"bottomConstraint");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_0029d620(0xc030000000000000,lVar2);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc2000000;

    local_58 = FUN_0011a4fc;

    puStack_50 = &DAT_00388e60;

    uVar1 = *(undefined8 *)(param_1 + 0x20);

    _objc_retain(uVar1);

    local_48 = uVar1;

    FUN_002917a0((double)fVar3,&_OBJC_CLASS___UIView,extraout_x1,&local_68);

    _objc_release(local_48);

  }

  _objc_release(lVar2);

  return;

}




