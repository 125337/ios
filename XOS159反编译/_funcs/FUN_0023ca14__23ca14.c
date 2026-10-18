// FUN_0023ca14 @0x23ca14


void FUN_0023ca14(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5

                 )



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002a27e0(param_1,extraout_x1,param_2);

  FUN_002a2800(param_1,extraout_x1_00,param_3);

  FUN_0029d660(param_1,extraout_x1_01,0);

  FUN_0029d740(param_1,extraout_x1_02,0);

  FUN_00296540(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d6c0(auVar6._0_8_,auVar6._8_8_,1);

  _objc_release(auVar6._0_8_);

  FUN_002a1f80(param_1,extraout_x1_03,0,0);

  FUN_0023b444(param_3,param_5,param_3 == param_4);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec20(param_1,auVar6._8_8_,auVar6._0_8_,0);

  _objc_release(auVar6._0_8_);

  FUN_00293040(0x3fe8f5c28f5c28f6,0x3feae147ae147ae1,0x3feeb851eb851eb8,0x3ff0000000000000,

               &_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00293060(0x3fe28f5c28f5c28f,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00231604(uVar2,uVar3);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  iVar1 = FUN_002365b0();

  if (iVar1 == 0) {

    lVar5 = FUN_00297fa0(DAT_003eb168);

    if (lVar5 != 0) {

      FUN_0023cdac(DAT_003eb168);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      if (auVar6._0_8_ != 0) goto LAB_0023cc24;

    }

    FUN_00293040(0x3fd28f5c28f5c28f,0x3fde147ae147ae14,0x3ff0000000000000,0x3ff0000000000000,

                 &_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar5 = FUN_00297fa0(DAT_003eb170);

    if (lVar5 != 0) {

      FUN_0023cdac(DAT_003eb170);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      if (auVar6._0_8_ != 0) goto LAB_0023cc24;

    }

    FUN_00293060(0x3fee147ae147ae14,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

  }

LAB_0023cc24:

  uVar2 = auVar6._0_8_;

  if (param_3 != param_4) {

    uVar2 = uVar4;

  }

  FUN_002a1f40(param_1,auVar6._8_8_,uVar2);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(param_1,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_00297e40(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a14a0(0);

  _objc_release(uVar2);

  FUN_00297e40(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0);

  _objc_release(uVar2);

  FUN_00297e40(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2860(0x4000000000000000);

  _objc_release(uVar2);

  FUN_00239d20(param_3,param_2);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0023966c(param_1,uVar2,1);

  _objc_release(uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




