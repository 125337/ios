// FUN_002369b4 @0x2369b4


void FUN_002369b4(void)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  

  if (DAT_003eb269 == '\x01') {

    FUN_00236a48(0xffffffffffffffff,0);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if ((lVar1 == 0) || (lVar2 = FUN_00297fa0(lVar1), lVar2 == 0)) {

      uVar3 = 0;

    }

    else {

      FUN_00236cac(lVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

    }

    _objc_release(lVar1);

  }

  else {

    uVar3 = 0;

  }

  _objc_autoreleaseReturnValue(uVar3);

  return;

}




