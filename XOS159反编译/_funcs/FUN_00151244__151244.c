// FUN_00151244 @0x151244


void FUN_00151244(undefined8 param_1)



{

  bool bVar1;

  long lVar2;

  double dVar3;

  

  FUN_00136604();

  FUN_00298700(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    dVar3 = (double)FUN_00159b64();

    bVar1 = false;

    if ((0.0 < DAT_003e6b28) && (bVar1 = false, !NAN(ABS(dVar3 - DAT_003e6b28)))) {

      bVar1 = ABS(dVar3 - DAT_003e6b28) < 0.5;

    }

    if (!bVar1) {

      FUN_00292280(lVar2);

      FUN_00294c60(lVar2);

    }

  }

  _objc_release(lVar2);

  return;

}




