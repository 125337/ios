// FUN_00153438 @0x153438


void FUN_00153438(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

                 undefined8 param_5)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  double dVar6;

  undefined1 auVar7 [16];

  undefined1 auVar8 [16];

  undefined *local_98;

  undefined8 local_90;

  code *local_88;

  undefined *puStack_80;

  undefined8 local_78;

  

  FUN_002a6220();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    FUN_002a62a0(lVar2,extraout_x1,0x1863d);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b340();

    _objc_release(uVar1);

    uVar1 = _objc_alloc(&_OBJC_CLASS___UIView);

    FUN_002925a0(lVar2);

    uVar1 = FUN_00296b80(uVar1);

    FUN_00293060(0,0x3fd999999999999a,&_OBJC_CLASS___UIColor);

    auVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar1,auVar7._8_8_,auVar7._0_8_);

    _objc_release(auVar7._0_8_);

    FUN_002a1c80(uVar1,extraout_x1_00,0x1863d);

    FUN_0029cb60(0,uVar1);

    auVar7 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    auVar7 = FUN_00296f20(auVar7._0_8_,auVar7._8_8_,param_5,"cadis_dismissCalendarPopup:");

    FUN_00291140(uVar1,auVar7._8_8_,auVar7._0_8_);

    FUN_002925a0(lVar2);

    FUN_002925a0(lVar2);

    _objc_alloc(&_OBJC_CLASS___UIView);

    dVar6 = (double)NEON_fminnm(param_3 + -32.0,0x4077c00000000000);

    uVar3 = FUN_00296b80((param_3 - dVar6) * 0.5,param_4 * 0.15);

    FUN_002a4a60(&_OBJC_CLASS___UIColor);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar3,auVar8._8_8_,auVar8._0_8_);

    _objc_release(auVar8._0_8_);

    FUN_00297e40(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4030000000000000);

    _objc_release(uVar4);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar5 = FUN_00290a20();

    FUN_00297e40(uVar3);

    auVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1460(auVar8._0_8_,auVar8._8_8_,uVar5);

    _objc_release(auVar8._0_8_);

    _objc_release(uVar4);

    FUN_00297e40(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14a0(0x3e19999a);

    _objc_release(uVar4);

    FUN_00297e40(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14e0(0x4028000000000000);

    _objc_release(uVar4);

    FUN_00297e40(uVar3);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1480(0,0x4010000000000000);

    _objc_release(uVar4);

    FUN_002a1c80(uVar3,extraout_x1_01,0x1863e);

    FUN_00291380(uVar1,extraout_x1_02,uVar3);

    FUN_00291380(lVar2,extraout_x1_03,uVar1);

    FUN_00292740(param_5);

    local_98 = PTR___NSConcreteStackBlock_003886f0;

    local_90 = 0xc2000000;

    local_88 = FUN_00165b18;

    puStack_80 = &DAT_00388e60;

    _objc_retain(uVar1);

    local_78 = uVar1;

    FUN_002917a0(0x3fd0000000000000,&_OBJC_CLASS___UIView,extraout_x1_04,&local_98);

    _objc_release(local_78);

    _objc_release(uVar3);

    _objc_release(auVar7._0_8_);

    _objc_release(uVar1);

  }

  _objc_release(lVar2);

  return;

}




