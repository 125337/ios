// FUN_00174eb4 @0x174eb4


void FUN_00174eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  

  _objc_retain();

  _objc_retain(param_3);

  iVar1 = FUN_00297820(param_3,extraout_x1,&cf_html);

  if (iVar1 == 0) {

    FUN_00172968(param_1,param_2);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00174f70(param_1,param_2,1,0);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(uVar2);

  return;

}




