// FUN_001491a4 @0x1491a4


void FUN_001491a4(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined1 auVar5 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_release(uVar1);

  lVar4 = FUN_00297fa0(uVar3);

  if (lVar4 == 0) {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_0029b4a0(uVar1,auVar5._8_8_,*(undefined8 *)(param_1 + 0x28));

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

    FUN_002a0060(uVar1,auVar5._8_8_,uVar3,*(undefined8 *)(param_1 + 0x28));

  }

  _objc_release(uVar1);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a120(auVar5._0_8_,auVar5._8_8_,&cf_CadisHeaderNeedsRebuild,0);

  _objc_release(auVar5._0_8_);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x30));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar1);

  _objc_release(uVar3);

  return;

}




