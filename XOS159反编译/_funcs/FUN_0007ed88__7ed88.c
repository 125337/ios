// FUN_0007ed88 @0x7ed88


void FUN_0007ed88(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002994e0(auVar2._0_8_,auVar2._8_8_,0);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar3._0_8_,auVar3._8_8_,&cf_CoverRes_Bubbles);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar4._0_8_,auVar4._8_8_,param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  _objc_release(auVar2._0_8_);

  _objc_release(param_3);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




