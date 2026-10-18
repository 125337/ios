// FUN_000e2368 @0xe2368


void FUN_000e2368(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  (*DAT_003e7d80)();

  iVar1 = FUN_000e2584();

  if (iVar1 != 0) {

    auVar3 = _objc_alloc(&_OBJC_CLASS___UIDropInteraction);

    uVar2 = FUN_00296aa0(auVar3._0_8_,auVar3._8_8_,param_1);

    FUN_002a6220(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00291180(auVar3._0_8_,auVar3._8_8_,uVar2);

    _objc_release(auVar3._0_8_);

    _objc_release(uVar2);

    return;

  }

  return;

}




