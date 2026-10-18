// FUN_0018b898 @0x18b898


void FUN_0018b898(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar5 [16];

  

  _objc_retain();

  FUN_00291880(param_1,extraout_x1,&cf_xzyBreath);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    FUN_0018c134();

    uVar1 = DAT_003e8da8;

    _objc_retain(DAT_003e8da8);

    FUN_0018c134();

    uVar2 = DAT_003e8db0;

    _objc_retain(DAT_003e8db0);

    FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_00,&cf_shadowColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease(uVar1);

    auVar5 = FUN_00290a20();

    FUN_0029e600(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_retainAutorelease(uVar2);

    auVar5 = FUN_00290a20();

    FUN_002a20a0(uVar4,auVar5._8_8_,auVar5._0_8_);

    FUN_0029de80(0x4000000000000000,uVar4);

    FUN_0029ce20(uVar4,extraout_x1_01,1);

    FUN_002a0cc0(0x7f800000,uVar4);

    FUN_00295680(&_OBJC_CLASS___CAMediaTimingFunction,extraout_x1_02,

                 *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_00388650);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f00(uVar4,auVar5._8_8_,auVar5._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_00291020(param_1,extraout_x1_03,uVar4,&cf_xzyBreath);

    _objc_release(uVar4);

    _objc_release(uVar2);

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  return;

}




