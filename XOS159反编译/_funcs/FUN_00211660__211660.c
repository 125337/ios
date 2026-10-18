// FUN_00211660 @0x211660


bool FUN_00211660(undefined8 param_1,undefined8 param_2,ulong param_3)



{

  bool bVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  long lVar4;

  

  _objc_retain();

  lVar4 = 0;

  if (9 < param_3) {

    param_3 = 10;

  }

  uVar2 = extraout_x1;

  do {

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,uVar2,lVar4,param_2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00211d9c(param_1,uVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    _objc_release(lVar3);

    bVar1 = param_3 - 1 != lVar4;

    lVar4 = lVar4 + 1;

    uVar2 = extraout_x1_00;

  } while (lVar3 == 0 && bVar1);

  _objc_release(param_1);

  return lVar3 != 0;

}




