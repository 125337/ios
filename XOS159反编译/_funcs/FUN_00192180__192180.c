// FUN_00192180 @0x192180


bool FUN_00192180(long param_1)



{

  long *plVar1;

  bool bVar2;

  int iVar3;

  

  _objc_retain();

  FUN_0018da3c();

  if ((param_1 == 0) || (DAT_003e95b0 != 1 && DAT_003e95b8 != 1)) {

    bVar2 = false;

  }

  else {

    iVar3 = FUN_00191330(param_1);

    plVar1 = &DAT_003e95b0;

    if (iVar3 == 0) {

      plVar1 = &DAT_003e95b8;

    }

    bVar2 = *plVar1 == 1;

  }

  _objc_release(param_1);

  return bVar2;

}




