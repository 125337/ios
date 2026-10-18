// FUN_001cf604 @0x1cf604


void FUN_001cf604(undefined8 param_1)



{

  undefined8 uVar1;

  long lVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  FUN_001cf100(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00297fa0();

  if (lVar2 != 0) {

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b3c0(auVar3._0_8_,auVar3._8_8_,uVar1,0);

    _objc_release(auVar3._0_8_);

  }

  FUN_0020c804(param_1,0);

  _objc_release(uVar1);

  _objc_release(param_1);

  return;

}




