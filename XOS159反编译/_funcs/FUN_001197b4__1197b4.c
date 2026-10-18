// FUN_001197b4 @0x1197b4


void FUN_001197b4(long param_1,undefined8 param_2)



{

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar1;

  double dVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_2);

  FUN_002a06e0(param_2,extraout_x1,&cf___);

  dVar2 = *(double *)(param_1 + 0x20);

  if (dVar2 == 3.0) {

    auVar3._8_8_ = extraout_x1_00;

    auVar3._0_8_ = &cf___;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf___1f);

    auVar3 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002a1d60(param_2,auVar3._8_8_,auVar3._0_8_);

  uVar1 = extraout_x1_01;

  if (dVar2 != 3.0) {

    _objc_release(auVar3._0_8_);

    uVar1 = extraout_x1_02;

  }

  FUN_0029f1e0(param_2,uVar1,8);

  _objc_release(param_2);

  return;

}




