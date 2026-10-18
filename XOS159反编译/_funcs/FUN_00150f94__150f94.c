// FUN_00150f94 @0x150f94


void FUN_00150f94(undefined8 param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  

  if ((DAT_003e89e2 == '\x01') && (iVar1 = FUN_00297b80(), iVar1 != 0)) {

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar3 != 0) {

      FUN_0016968c(1);

      FUN_00292760(param_1);

    }

  }

  FUN_00169c44();

  return;

}




