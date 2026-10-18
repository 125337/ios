// FUN_0012ef0c @0x12ef0c


void FUN_0012ef0c(undefined8 param_1)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  

  _objc_retain();

  uVar2 = FUN_0012ec24();

  if (((uVar2 & 1) != 0) && (iVar1 = FUN_00130124(param_1), iVar1 != 0)) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e6ab8);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar3 != 0) {

      FUN_00130354(param_1,0);

    }

  }

  _objc_release(param_1);

  return;

}




