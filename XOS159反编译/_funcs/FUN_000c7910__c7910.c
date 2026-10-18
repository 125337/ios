// FUN_000c7910 @0xc7910


void FUN_000c7910(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  

  (*DAT_003e7cd8)();

  FUN_002a6520(param_1);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if ((lVar2 != 0) && ((DAT_003e7d10 & 1) != 0)) {

    iVar1 = FUN_000c93cc(param_1);

    _objc_release(lVar2);

    if (iVar1 != 0) {

      uVar3 = FUN_000c94e4(param_1);

      FUN_000c89a8(param_1,uVar3);

      return;

    }

    return;

  }

  _objc_release(lVar2);

  return;

}




