// FUN_001c1b2c @0x1c1b2c


void FUN_001c1b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  code *pcVar3;

  undefined1 auVar4 [16];

  undefined1 auVar5 [16];

  

  FUN_001c1c94();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_sync_enter();

  FUN_001c1c94();

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6180(&_OBJC_CLASS___NSValue,auVar4._8_8_,param_2);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar4._0_8_,auVar5._8_8_,auVar5._0_8_);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  pcVar3 = (code *)FUN_0029a060();

  _objc_release(uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_sync_exit(uVar1);

  _objc_release(uVar1);

  if (pcVar3 != (code *)0x0) {

    (*pcVar3)(param_1,param_2,param_3);

  }

  FUN_001c1cd8(param_2,param_3);

  return;

}




