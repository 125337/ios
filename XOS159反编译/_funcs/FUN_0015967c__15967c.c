// FUN_0015967c @0x15967c


void FUN_0015967c(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  

  if ((DAT_003e89e2 == '\x01') &&

     (iVar1 = FUN_00297b80(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) {

    FUN_002a6220(*(undefined8 *)(param_1 + 0x20));

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar2);

    if (lVar3 != 0) {

      FUN_00292760(*(undefined8 *)(param_1 + 0x20));

      return;

    }

  }

  return;

}




