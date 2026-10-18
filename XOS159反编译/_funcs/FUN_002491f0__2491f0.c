// FUN_002491f0 @0x2491f0


void FUN_002491f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  char cVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  double dVar8;

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_90;

  undefined8 local_88;

  code *local_80;

  undefined *puStack_78;

  long local_70;

  double local_68;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002a27e0(param_1,extraout_x1,param_2);

  FUN_002a2800(param_1,extraout_x1_00,param_3);

  FUN_00249798(param_3,param_2);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c760(param_1,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  FUN_002a1f80(param_1,extraout_x1_01,0,0);

  FUN_0029d660(param_1,extraout_x1_02,0);

  FUN_0029d740(param_1,extraout_x1_03,0);

  FUN_00296540(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d6c0(auVar9._0_8_,auVar9._8_8_,1);

  _objc_release(auVar9._0_8_);

  if (DAT_003eb269 == '\x01') {

    FUN_00236a48(param_3,0);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) goto LAB_00249308;

    FUN_00236cac(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar3);

    if (lVar4 == 0) goto LAB_00249308;

LAB_00249348:

    dVar8 = DAT_003e7250;

    _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);

    dVar8 = dVar8 * 0.6;

    uVar5 = FUN_00296e00(dVar8,dVar8);

    local_90 = PTR___NSConcreteStackBlock_003886f0;

    local_88 = 0xc2000000;

    local_80 = FUN_00249a18;

    puStack_78 = &DAT_0038f988;

    _objc_retain(lVar4);

    local_70 = lVar4;

    local_68 = dVar8;

    FUN_00296560(uVar5,extraout_x1_05,&local_90);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(lVar4);

    _objc_release(local_70);

    _objc_release(uVar5);

    uVar5 = extraout_x1_06;

  }

  else {

LAB_00249308:

    FUN_00248b94(param_3,param_4);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0023720c(0x4036000000000000,uVar5,6);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    if (lVar4 != 0) goto LAB_00249348;

    uVar6 = 0;

    uVar5 = extraout_x1_04;

  }

  FUN_0029ec20(param_1,uVar5,uVar6,0);

  iVar2 = FUN_002365b0();

  if (iVar2 == 0) {

    lVar3 = FUN_00297fa0(DAT_003eb168);

    if (lVar3 != 0) {

      FUN_0023cdac(DAT_003eb168);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      if (auVar9._0_8_ != 0) goto LAB_002494c0;

    }

    FUN_00293040(0x3fd28f5c28f5c28f,0x3fde147ae147ae14,0x3ff0000000000000,0x3ff0000000000000,

                 &_OBJC_CLASS___UIColor);

    auVar9 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar3 = FUN_00297fa0(DAT_003eb170);

    if (lVar3 != 0) {

      FUN_0023cdac(DAT_003eb170);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      if (auVar9._0_8_ != 0) goto LAB_002494c0;

    }

    FUN_00293060(0x3fee666666666666,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    auVar9 = _objc_retainAutoreleasedReturnValue();

  }

LAB_002494c0:

  FUN_002a1f40(param_1,auVar9._8_8_,auVar9._0_8_);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(param_1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_002925a0(param_1);

  dVar8 = (double)_CGRectGetWidth();

  FUN_00297e40(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(dVar8 * 0.5);

  _objc_release(uVar5);

  FUN_00297e40(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f960(auVar10._0_8_,auVar10._8_8_,0);

  _objc_release(auVar10._0_8_);

  FUN_00292400(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar7 = FUN_00290a20();

  FUN_00297e40(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1460(auVar10._0_8_,auVar10._8_8_,uVar7);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar5);

  FUN_00297e40(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a14a0(0x3e23d70a);

  _objc_release(uVar5);

  FUN_00297e40(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a14e0(0x4028000000000000);

  _objc_release(uVar5);

  FUN_00297e40(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1480(0,0x401c000000000000);

  _objc_release(uVar5);

  FUN_002925a0(param_1);

  dVar8 = (double)_CGRectGetWidth();

  if (0.5 < dVar8) {

    FUN_002925a0(param_1);

    dVar8 = (double)_CGRectGetHeight();

    if (0.5 < dVar8) {

      FUN_00248c6c(param_1);

      _objc_unsafeClaimAutoreleasedReturnValue();

    }

  }

  cVar1 = DAT_003e7268;

  if (DAT_003e7268 == '\x01') {

    FUN_00239d20(param_3,param_2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    uVar5 = 0;

  }

  FUN_0023966c(param_1,uVar5,1);

  if (cVar1 != '\0') {

    _objc_release(uVar5);

  }

  _objc_release(auVar9._0_8_);

  _objc_release(uVar6);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




