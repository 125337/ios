// FUN_001513c4 @0x1513c4


void FUN_001513c4(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  

  iVar1 = FUN_00147794();

  if ((((iVar1 != 0) && (iVar1 = FUN_00147c54(), iVar1 != 0)) &&

      (iVar1 = FUN_00167c64(), iVar1 != 0)) && (DAT_003e8828 != 0)) {

    FUN_002a4880();

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      iVar1 = FUN_001678c4(DAT_003e8828);

      if ((iVar1 == 0) && (iVar1 = FUN_00167e4c(DAT_003e8828), iVar1 != 0)) {

        FUN_002927a0(param_1);

        return;

      }

      FUN_00168060(DAT_003e8828);

      return;

    }

  }

  return;

}




