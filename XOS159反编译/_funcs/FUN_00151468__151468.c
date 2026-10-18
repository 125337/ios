// FUN_00151468 @0x151468


void FUN_00151468(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  

  FUN_002a68a0();

  iVar1 = FUN_00297b80(param_1);

  if (iVar1 != 0) {

    FUN_002a6220(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) {

      _objc_release(uVar2);

    }

    else {

      FUN_002990e0(param_1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5520();

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar4);

      _objc_release(lVar3);

      _objc_release(uVar2);

      if (lVar5 == param_1) {

        if ((DAT_003e8828 != 0) && (iVar1 = FUN_001678c4(), iVar1 != 0)) {

          FUN_00168060(DAT_003e8828);

          return;

        }

        FUN_002927a0(param_1);

        return;

      }

    }

  }

  FUN_00136604();

  return;

}




