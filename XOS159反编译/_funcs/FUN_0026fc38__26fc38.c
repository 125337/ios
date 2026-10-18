// FUN_0026fc38 @0x26fc38


void FUN_0026fc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5)



{

  int iVar1;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  _objc_retain(param_4);

  _objc_retain(param_5);

  _objc_retain(param_3);

  iVar1 = FUN_002977c0(param_4,extraout_x1,param_5);

  if (iVar1 == 0) {

    FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_00,&cf_opacity);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    FUN_0029e600(uVar2,auVar3._8_8_,param_4);

    FUN_002a20a0(uVar2,extraout_x1_01,param_5);

    FUN_0029de80(param_1,uVar2);

    FUN_00295680(&_OBJC_CLASS___CAMediaTimingFunction,extraout_x1_02,

                 *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_00388650);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f00(uVar2,auVar3._8_8_,auVar3._0_8_);

    _objc_release(auVar3._0_8_);

    FUN_00284e5c(param_2,param_3,uVar2,&cf_opacity);

  }

  else {

    FUN_002a44a0(&cf_xzy_liquid_motion_,extraout_x1_00,&cf_opacity);

    auVar3 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar3._0_8_;

    FUN_0029b260(param_3,auVar3._8_8_,uVar2);

  }

  _objc_release(param_3);

  _objc_release(uVar2);

  _objc_release(param_5);

  _objc_release(param_4);

  return;

}




