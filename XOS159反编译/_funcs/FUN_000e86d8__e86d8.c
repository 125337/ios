// FUN_000e86d8 @0xe86d8


void FUN_000e86d8(undefined8 param_1)



{

  byte bVar1;

  byte bVar2;

  int iVar3;

  long lVar4;

  

  (*DAT_003e7df8)();

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66e8,0,1);

  FUN_002a4880(param_1);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  bVar2 = DAT_003e7d9d;

  bVar1 = DAT_003e7d99;

  _objc_release();

  if ((((lVar4 != 0) && ((bVar1 & 1) != 0)) && ((bVar2 & 1) != 0)) &&

     (iVar3 = FUN_000eb7a0(param_1), iVar3 != 0)) {

    FUN_00291300(param_1);

    return;

  }

  FUN_0029b540(param_1);

  return;

}




