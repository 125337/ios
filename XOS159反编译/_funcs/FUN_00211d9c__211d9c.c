// FUN_00211d9c @0x211d9c


void FUN_00211d9c(undefined8 param_1,undefined8 param_2)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  

  _objc_retain();

  _objc_retain(param_2);

  DAT_003ead8c = DAT_003ead8c + 1;

  FUN_00298480(param_1,extraout_x1,param_2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  DAT_003ead8c = DAT_003ead8c + -1;

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




