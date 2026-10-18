// FUN_000c9da8 @0xc9da8


undefined8 FUN_000c9da8(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain();

  if (param_1 == 0) {

    uVar2 = 0;

  }

  else {

    FUN_00293e00(param_1);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    lVar1 = auVar3._0_8_;

    if (lVar1 == 0) {

      uVar2 = 0;

    }

    else {

      uVar2 = FUN_00297820(lVar1,auVar3._8_8_,&cf_e);

    }

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return uVar2;

}




