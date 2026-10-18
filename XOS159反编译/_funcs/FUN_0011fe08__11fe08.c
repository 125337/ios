// FUN_0011fe08 @0x11fe08


void FUN_0011fe08(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  float fVar4;

  float fVar5;

  undefined1 auVar6 [16];

  

  FUN_002a50a0(*(undefined8 *)(param_1 + 0x20));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5020();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295480();

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  fVar5 = -50.0;

  if (-50.0 < fVar4) {

    fVar5 = fVar4;

  }

  fVar4 = 50.0;

  if (fVar5 <= 50.0) {

    fVar4 = fVar5;

  }

  FUN_0029e500(fVar4,auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x28));

  _objc_release(auVar6._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4a40();

  _objc_release(uVar1);

  FUN_0029b240(DAT_003e8348);

  uVar1 = _objc_loadWeakRetained(param_1 + 0x30);

  FUN_00292f00();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




