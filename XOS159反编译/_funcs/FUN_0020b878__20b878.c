// FUN_0020b878 @0x20b878


void FUN_0020b878(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    _objc_setAssociatedObject(lVar1,&DAT_003ead60,PTR____kCFBooleanFalse_00388318,1);

    _objc_getAssociatedObject(lVar1,&DAT_003ead5f);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar2);

    _objc_setAssociatedObject(lVar1,&DAT_003ead5f,0,1);

    if ((DAT_003ead50 & 1) == 0) {

      FUN_0020a174(lVar1,uVar3);

    }

  }

  _objc_release(lVar1);

  return;

}




