// FUN_0005942c @0x5942c


void FUN_0005942c(undefined8 param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar1 [16];

  

  _objc_retain(param_2);

  FUN_0029f1e0(param_2,extraout_x1,2);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf___0f);

  auVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(param_2,auVar1._8_8_,auVar1._0_8_);

  _objc_release(auVar1._0_8_);

  FUN_0029d460(param_2,extraout_x1_01,1);

  _objc_release(param_2);

  return;

}




