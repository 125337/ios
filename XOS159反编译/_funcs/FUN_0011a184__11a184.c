// FUN_0011a184 @0x11a184


void FUN_0011a184(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 long param_5,undefined8 param_6)



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

  

  _objc_retain(param_6);

  FUN_002a5f80(param_6);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_003884a0)

  ;

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00290aa0();

  _objc_release(uVar1);

  _objc_release(auVar4._0_8_);

  FUN_002a5f80(param_6);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar4._0_8_,auVar4._8_8_,

               *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_00388498);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295480();

  _objc_release(uVar1);

  _objc_release(auVar4._0_8_);

  _objc_getAssociatedObject(*(undefined8 *)(param_5 + 0x20),"bottomConstraint");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_002a6220(*(undefined8 *)(param_5 + 0x20));

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029bb60();

    FUN_0029d620((-16.0 - param_4) + param_3,lVar2);

    _objc_release(uVar1);

    local_68 = PTR___NSConcreteStackBlock_003886f0;

    local_60 = 0xc2000000;

    local_58 = FUN_0011a370;

    puStack_50 = &DAT_00388e60;

    uVar1 = *(undefined8 *)(param_5 + 0x20);

    _objc_retain(uVar1);

    local_48 = uVar1;

    FUN_002917a0((double)fVar3,&_OBJC_CLASS___UIView,extraout_x1,&local_68);

    _objc_release(local_48);

  }

  _objc_release(lVar2);

  _objc_release(param_6);

  return;

}




