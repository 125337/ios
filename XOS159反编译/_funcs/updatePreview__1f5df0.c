// updatePreview @0x1f5df0


/* Function Stack Size: 0x10 bytes */



void XZYCLGDividerAppearanceViewController::updatePreview(ID param_1,SEL param_2)



{

  uint uVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  double dVar8;

  undefined1 auVar9 [16];

  

  FUN_00293c80();

  FUN_001d0ec4(1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a800(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  dVar8 = (double)FUN_00293d40(param_1);

  FUN_0029a820(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d620(dVar8 + 18.0);

  _objc_release(uVar3);

  uVar4 = FUN_00293c00(param_1);

  dVar8 = -18.0;

  if ((uVar4 & 1) == 0) {

    FUN_0029a740(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00296480();

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    _objc_release(uVar3);

    if (lVar5 != 0) {

      dVar8 = (double)FUN_00293c20(param_1);

      uVar3 = 0;

      dVar8 = dVar8 + -18.0;

      goto LAB_001f5ee8;

    }

  }

  uVar3 = 1;

LAB_001f5ee8:

  FUN_0029a760(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d620(dVar8);

  _objc_release(uVar6);

  FUN_0029a740(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  FUN_00293d40(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf___0fpt);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00299580(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  FUN_00293c80(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&cf___0fpt);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00295560(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  FUN_00293c20(param_1);

  FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf____0fpt);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ce0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar9._0_8_,auVar9._8_8_,uVar3);

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  uVar1 = FUN_00293c00(param_1);

  FUN_00292ca0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e0c0(auVar9._0_8_,auVar9._8_8_,uVar1 ^ 1);

  _objc_release(auVar9._0_8_);

  iVar2 = FUN_00293c00(param_1);

  uVar6 = 0x3fdccccccccccccd;

  uVar3 = uVar6;

  if (iVar2 == 0) {

    uVar3 = 0x3ff0000000000000;

  }

  FUN_00292ca0(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(uVar3);

  _objc_release(uVar7);

  iVar2 = FUN_00293c00(param_1);

  if (iVar2 == 0) {

    uVar6 = 0x3ff0000000000000;

  }

  FUN_00292ce0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(uVar6);

  _objc_release(uVar3);

  FUN_002a6220(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00297ee0();

  _objc_release(uVar3);

  return;

}




