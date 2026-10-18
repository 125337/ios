// FUN_0024da68 @0x24da68


void FUN_0024da68(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  if (param_1 < 100) {

    uVar2 = 0;

  }

  else {

    FUN_0024d85c();

    uVar1 = _objc_retainAutoreleasedReturnValue();

    auVar3 = FUN_00293860();

    if (param_1 + -100 < auVar3._0_8_) {

      FUN_00299500(uVar1,auVar3._8_8_,param_1 + -100);

      uVar2 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      uVar2 = 0;

    }

    _objc_release(uVar1);

  }

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




