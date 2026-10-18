// FUN_0010dce4 @0x10dce4


void FUN_0010dce4(long param_1)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  

  _objc_retain();

  if (param_1 == 0) {

    uVar1 = 0;

  }

  else {

    uVar1 = extraout_x1;

    if (DAT_003e81b8 != -1) {

      FUN_0028f2b0();

      uVar1 = extraout_x1_00;

    }

    FUN_002a4600(DAT_003e81b0,uVar1,param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




