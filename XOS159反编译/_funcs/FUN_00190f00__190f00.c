// FUN_00190f00 @0x190f00


void FUN_00190f00(ulong param_1)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  

  bVar1 = param_1 < 10;

  if (9 < (long)param_1) {

    FUN_001aaf74();

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00293860();

    bVar1 = (long)(param_1 - 10) < lVar3;

    _objc_release(uVar2);

  }

  if (!bVar1) {

    param_1 = 0;

  }

  FUN_00190cb0(param_1);

  return;

}




