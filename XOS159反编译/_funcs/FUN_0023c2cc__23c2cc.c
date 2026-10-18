// FUN_0023c2cc @0x23c2cc


void FUN_0023c2cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5

                 )



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined4 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002a27e0(param_1,extraout_x1,param_2);

  FUN_002a2800(param_1,extraout_x1_00,param_3);

  FUN_0029d660(param_1,extraout_x1_01,0);

  FUN_0029d740(param_1,extraout_x1_02,0);

  FUN_00296540(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d6c0(auVar5._0_8_,auVar5._8_8_,1);

  _objc_release(auVar5._0_8_);

  FUN_002a1f80(param_1,extraout_x1_03,0,0);

  FUN_0023b444(param_3,param_5,param_3 == param_4);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec20(param_1,auVar5._8_8_,auVar5._0_8_,0);

  _objc_release(auVar5._0_8_);

  if (param_3 == param_4) {

    FUN_00293060(0x3fb47ae147ae147b,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00293060(0x3feeb851eb851eb8,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00231604(uVar1,uVar2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00293060(0x3fdae147ae147ae1,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00293060(0x3fe51eb851eb851f,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00231604(uVar1,uVar2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar2);

  _objc_release(uVar1);

  FUN_002a1f40(param_1,extraout_x1_04,uVar3);

  if (param_3 == param_4) {

    FUN_00293060(0x3ff0000000000000,0x3fef5c28f5c28f5c);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00293060(0x3fc47ae147ae147b,0x3fef5c28f5c28f5c,&_OBJC_CLASS___UIColor);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00231604(uVar1,uVar2);

    auVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar5._0_8_;

  }

  FUN_0029cf60(param_1,auVar5._8_8_,auVar5._0_8_);

  if (param_3 == param_4) {

    _objc_release(auVar5._0_8_);

    _objc_release(uVar2);

  }

  _objc_release(uVar1);

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = 0x403b000000000000;

  if (param_3 != param_4) {

    uVar2 = 0x4038000000000000;

  }

  FUN_0029d820(uVar2);

  _objc_release(uVar1);

  FUN_00292400(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar2 = FUN_00290a20();

  FUN_00297e40(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1460(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar1);

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar4 = 0x3e3851ec;

  if (param_3 != param_4) {

    uVar4 = 0;

  }

  FUN_002a14a0(uVar4);

  _objc_release(uVar1);

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = 0x402c000000000000;

  if (param_3 != param_4) {

    uVar2 = 0;

  }

  FUN_002a14e0(uVar2);

  _objc_release(uVar1);

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1480(0,0x4018000000000000);

  _objc_release(uVar1);

  FUN_00297e40(param_1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = 0x4008000000000000;

  if (param_3 != param_4) {

    uVar2 = 0x3ff0000000000000;

  }

  FUN_002a2860(uVar2);

  _objc_release(uVar1);

  FUN_00239d20(param_3,param_2);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0023966c(param_1,uVar1,1);

  _objc_release(uVar1);

  _objc_release(uVar3);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




