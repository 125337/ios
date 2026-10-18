// FUN_001d393c @0x1d393c


void FUN_001d393c(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  long lVar2;

  

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 != 0) {

    lVar2 = FUN_00297fa0(param_2);

    uVar1 = 0;

    if (lVar2 != 0) {

      uVar1 = param_2;

    }

    _objc_setAssociatedObject(param_1,&DAT_003ead82,uVar1,3);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




