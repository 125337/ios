// FUN_00199508 @0x199508


void FUN_00199508(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar4._0_8_;

  FUN_0029efa0(uVar1,auVar4._8_8_,param_2,*(undefined8 *)(param_1 + 0x20));

  FUN_002a4a40(uVar1);

  FUN_0018dc7c();

  uVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  FUN_002a4dc0();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar4._8_8_,*(undefined8 *)(param_1 + 0x30),5);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00292aa0(auVar4._0_8_,auVar5._8_8_,auVar5._0_8_);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  if (lVar3 != 0) {

    FUN_001aed18(param_2,2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar3);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(auVar4._0_8_,auVar4._8_8_,uVar2);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(lVar3);

  _objc_release(uVar1);

  return;

}




