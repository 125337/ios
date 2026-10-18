// FUN_0020cd60 @0x20cd60


void FUN_0020cd60(long param_1,long param_2)



{

  undefined8 *puVar1;

  cfstringStruct *pcVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  long lVar15;

  long lVar16;

  long lVar17;

  long lVar18;

  long lVar19;

  undefined8 uVar20;

  ulong uVar21;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  ulong extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  ulong extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  ulong extraout_x1_11;

  long lVar22;

  double dVar23;

  double dVar24;

  undefined1 auVar25 [16];

  long local_138;

  undefined *local_e0;

  undefined8 local_d8;

  code *local_d0;

  undefined *puStack_c8;

  undefined8 local_c0;

  long local_b8;

  undefined8 *local_b0;

  undefined8 local_a8;

  undefined8 *local_a0;

  undefined8 local_98;

  code *local_90;

  code *pcStack_88;

  undefined8 local_80;

  

  _objc_retain();

  _objc_retain(param_2);

  if ((param_1 == 0) || (param_2 == 0)) goto LAB_0020d530;

  _objc_setAssociatedObject(param_1,&DAT_003eaab0,param_2,1);

  uVar5 = _objc_opt_class(&objc::class_t::XZYCLG3DGroupCell);

  auVar25 = _objc_opt_isKindOfClass(param_1,uVar5);

  if ((auVar25._0_8_ & 1) != 0) {

    FUN_00293380(param_1,auVar25._8_8_,param_2);

    goto LAB_0020d530;

  }

  _objc_getAssociatedObject(param_1,&DAT_003ead78);

  lVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead79);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7a);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7b);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7c);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7d);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7e);

  lVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead7f);

  lVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead80);

  lVar14 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003eaabc);

  lVar15 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,&DAT_003ead81);

  lVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00295de0(param_2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  dVar23 = (double)FUN_001f3744();

  _objc_release(uVar5);

  FUN_00295de0(param_2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  dVar24 = (double)FUN_001f3664();

  _objc_release(uVar5);

  FUN_002a5680(lVar7);

  lVar17 = _objc_retainAutoreleasedReturnValue();

  if (lVar17 == 0) {

    FUN_002a5680(param_1);

    lVar18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    _objc_retain(lVar17);

    lVar18 = lVar17;

  }

  _objc_release(lVar17);

  _objc_retain(lVar18);

  if (DAT_003eaabe == '\x01') {

    iVar3 = FUN_001d52f8(lVar18);

    puVar1 = &DAT_003ea960;

    if (iVar3 == 0) {

      puVar1 = &DAT_003ea958;

    }

    FUN_0020d76c(*puVar1);

    lVar17 = _objc_retainAutoreleasedReturnValue();

    if (lVar17 == 0) {

      _objc_release(0);

      goto LAB_0020d028;

    }

    _objc_release(lVar18);

    _objc_retain(lVar17);

    _objc_retain(lVar17);

    lVar19 = lVar17;

    local_138 = lVar17;

  }

  else {

LAB_0020d028:

    _objc_release(lVar18);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    lVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4fc0(&_OBJC_CLASS___UIColor);

    lVar19 = _objc_retainAutoreleasedReturnValue();

    local_138 = 0;

  }

  if (lVar6 != 0) {

    FUN_001d0ec4(dVar23,1);

    auVar25 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(lVar6,auVar25._8_8_,auVar25._0_8_);

    _objc_release(auVar25._0_8_);

    FUN_002a1da0(lVar6,extraout_x1,lVar17);

  }

  if (lVar16 != 0) {

    FUN_0029d620(dVar24 + 18.0,lVar16);

  }

  if (lVar7 != 0) {

    FUN_00295de0(param_2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    _objc_retain(lVar18);

    _objc_retain(lVar17);

    local_a0 = &local_a8;

    local_a8 = 0;

    local_98 = 0x3032000000;

    local_90 = FUN_0020da88;

    pcStack_88 = FUN_0020da98;

    local_80 = 0;

    if (lVar18 == 0) {

      FUN_0020dae4(uVar5,lVar17);

      lVar22 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      local_e0 = PTR___NSConcreteStackBlock_003886f0;

      local_d8 = 0xc2000000;

      local_d0 = FUN_0020daa0;

      puStack_c8 = &DAT_0038f148;

      local_b0 = local_a0;

      _objc_retain(uVar5);

      local_c0 = uVar5;

      _objc_retain(lVar17);

      local_b8 = lVar17;

      FUN_00299c60(lVar18,extraout_x1_00,&local_e0);

      lVar22 = local_a0[5];

      _objc_retain(lVar22);

      _objc_release(local_b8);

      _objc_release(local_c0);

    }

    __Block_object_dispose(&local_a8,8);

    _objc_release(local_80);

    _objc_release(lVar17);

    _objc_release(lVar18);

    _objc_release(uVar5);

    _objc_release(uVar5);

    if (lVar22 == 0) {

      uVar5 = 0;

    }

    else {

      dVar24 = 14.0;

      if (14.0 <= dVar23 + 2.0) {

        dVar24 = dVar23 + 2.0;

      }

      uVar5 = NEON_fminnm(dVar24,0x4036000000000000);

    }

    FUN_0029ec00(lVar7,extraout_x1_01,lVar22);

    FUN_0029e8a0(lVar7,extraout_x1_02,lVar22 == 0);

    if (lVar8 != 0) {

      FUN_0029d620(uVar5,lVar8);

    }

    if (lVar9 != 0) {

      FUN_0029d620(uVar5,lVar9);

    }

    if (lVar10 != 0) {

      uVar5 = 0;

      if (lVar22 != 0) {

        uVar5 = 0x4014000000000000;

      }

      FUN_0029d620(uVar5,lVar10);

    }

    _objc_release(lVar22);

  }

  FUN_00295de0(param_2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_001cb9dc();

  uVar20 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  uVar21 = extraout_x1_03;

  if (lVar6 != 0) {

    if (DAT_003e70f1 == '\x01') {

      FUN_00295da0(param_2);

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_04,&cf__);

      uVar5 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(uVar20);

      uVar5 = uVar20;

    }

    FUN_002a5020(lVar6);

    auVar25 = _objc_retainAutoreleasedReturnValue();

    uVar21 = FUN_00297820(uVar5,auVar25._8_8_,auVar25._0_8_);

    _objc_release(auVar25._0_8_);

    if ((uVar21 & 1) == 0) {

      FUN_002a1d60(lVar6,extraout_x1_05,uVar5);

    }

    _objc_release(uVar5);

    uVar21 = extraout_x1_06;

  }

  if (lVar11 != 0) {

    FUN_002a1f40(lVar11,uVar21,lVar19);

    FUN_00293320(0x4024000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,extraout_x1_07,6);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    iVar3 = FUN_00297860(param_2);

    pcVar2 = &cf_chevron_right;

    if (iVar3 == 0) {

      pcVar2 = &cf_chevron_down;

    }

    FUN_002a4be0(&_OBJC_CLASS___UIImage,extraout_x1_08,pcVar2,uVar5);

    lVar22 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    FUN_0029ec00(lVar11,extraout_x1_09,lVar22);

    FUN_00295de0(param_2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_001d6dec();

    if (lVar22 == 0) {

      uVar4 = 1;

    }

    _objc_release(uVar5);

    FUN_0029e8a0(lVar11,extraout_x1_10,uVar4);

    if (lVar12 != 0) {

      dVar23 = -18.0;

      if ((uVar4 & 1) == 0) {

        FUN_00295de0(0xc032000000000000,param_2);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        dVar23 = (double)FUN_001f3820();

        _objc_release(uVar5);

        dVar23 = dVar23 + -18.0;

      }

      FUN_0029d620(dVar23,lVar12);

    }

    if (lVar13 != 0) {

      uVar5 = 0;

      if (uVar4 == 0) {

        uVar5 = 0x4026000000000000;

      }

      FUN_0029d620(uVar5,lVar13);

    }

    if (lVar14 != 0) {

      uVar5 = 0;

      if (uVar4 == 0) {

        uVar5 = 0x4026000000000000;

      }

      FUN_0029d620(uVar5,lVar14);

    }

    _objc_release(lVar22);

    uVar21 = extraout_x1_11;

  }

  if (lVar15 != 0) {

    if (DAT_003e70f0 == '\x01') {

      auVar25 = FUN_002a59c0(param_2);

    }

    else {

      auVar25._8_8_ = 0;

      auVar25._0_8_ = uVar21;

      auVar25 = auVar25 << 0x40;

    }

    FUN_002a2340(lVar15,auVar25._8_8_,auVar25._0_8_);

  }

  _objc_release(uVar20);

  _objc_release(lVar19);

  _objc_release(lVar17);

  _objc_release(local_138);

  _objc_release(lVar18);

  _objc_release(lVar16);

  _objc_release(lVar15);

  _objc_release(lVar14);

  _objc_release(lVar13);

  _objc_release(lVar12);

  _objc_release(lVar11);

  _objc_release(lVar10);

  _objc_release(lVar9);

  _objc_release(lVar8);

  _objc_release(lVar7);

  _objc_release(lVar6);

LAB_0020d530:

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




