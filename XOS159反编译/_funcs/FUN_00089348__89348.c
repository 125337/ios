// FUN_00089348 @0x89348


void FUN_00089348(undefined8 param_1)



{

  byte bVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  byte local_31;

  

  FUN_000895b0(param_1,&PTR__OBJC_CLASS___NSConstantArray_003bddf8,1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar5 = FUN_00297fa0();

  if (auVar5._0_8_ == 0) {

    uVar4 = 0;

  }

  else {

    local_31 = 0;

    FUN_002a4460(uVar2,auVar5._8_8_,&cf_theme_xos);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    bVar1 = FUN_00295180(auVar5._0_8_,auVar5._8_8_,uVar3,&local_31);

    _objc_release(auVar5._0_8_);

    uVar4 = 0;

    if (((local_31 | bVar1 ^ 0xff) & 1) == 0) {

      uVar4 = uVar2;

    }

    _objc_retain(uVar4);

    _objc_release(uVar3);

  }

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




