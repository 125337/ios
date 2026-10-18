// FUN_0007ecb4 @0x7ecb4


void FUN_0007ecb4(void)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  if (DAT_003e7770 == 0) {

    DAT_003e7770 = _objc_getClass("MMContext");

  }

  lVar1 = DAT_003e7770;

  _objc_retain(DAT_003e7770);

  _objc_autorelease(lVar1);

  FUN_00293c40();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c680();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar2);

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




