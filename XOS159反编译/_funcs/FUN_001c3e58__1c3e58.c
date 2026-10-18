// FUN_001c3e58 @0x1c3e58


void FUN_001c3e58(undefined8 param_1)



{

  undefined *puVar1;

  int iVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined8 local_280;

  long lStack_278;

  long *local_270;

  undefined8 uStack_268;

  undefined8 local_260;

  undefined8 uStack_258;

  undefined8 uStack_250;

  undefined8 uStack_248;

  undefined8 local_240;

  long lStack_238;

  long *local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 uStack_210;

  undefined8 uStack_208;

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  if ((DAT_003ea920 & 1) == 0) {

    if (DAT_003ea900 != 0) {

      FUN_0029e8a0(DAT_003ea900,extraout_x1,1);

      FUN_0029cb60(0,DAT_003ea900);

    }

    uVar3 = DAT_003ea910;

    DAT_003ea910 = 0;

    _objc_release(uVar3);

    goto LAB_001c45ac;

  }

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uStack_218 = 0;

  local_220 = 0;

  uStack_208 = 0;

  uStack_210 = 0;

  lStack_238 = 0;

  local_240 = 0;

  uStack_228 = 0;

  local_230 = (long *)0x0;

  FUN_00293440();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar17._0_8_;

  lVar4 = FUN_00293880(uVar7,auVar17._8_8_,&local_240,auStack_100,0x10);

  if (lVar4 != 0) {

    lVar10 = *local_230;

    do {

      lVar13 = 0;

      do {

        if (*local_230 != lVar10) {

          _objc_enumerationMutation(uVar7);

        }

        lVar12 = *(long *)(lStack_238 + lVar13 * 8);

        uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar17 = _objc_opt_isKindOfClass(lVar12,uVar5);

        uVar5 = auVar17._8_8_;

        if ((auVar17._0_8_ & 1) != 0) {

          _objc_retain(lVar12);

          lVar6 = FUN_00290f40(lVar12);

          if (lVar6 == 0) {

            _objc_release(uVar7);

            if (lVar12 == 0) goto LAB_001c3fc8;

            goto LAB_001c40a0;

          }

          _objc_release(lVar12);

          uVar5 = extraout_x1_00;

        }

        lVar13 = lVar13 + 1;

      } while (lVar4 != lVar13);

      lVar4 = FUN_00293880(uVar7,uVar5,&local_240,auStack_100,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar7);

LAB_001c3fc8:

  uStack_258 = 0;

  local_260 = 0;

  uStack_248 = 0;

  uStack_250 = 0;

  lStack_278 = 0;

  local_280 = 0;

  uStack_268 = 0;

  local_270 = (long *)0x0;

  FUN_00293440(uVar3);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  lVar4 = auVar17._0_8_;

  lVar10 = FUN_00293880(lVar4,auVar17._8_8_,&local_280,auStack_180,0x10);

  if (lVar10 != 0) {

    lVar13 = *local_270;

    do {

      lVar6 = 0;

      do {

        if (*local_270 != lVar13) {

          _objc_enumerationMutation(lVar4);

        }

        lVar12 = *(long *)(lStack_278 + lVar6 * 8);

        uVar7 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar17 = _objc_opt_isKindOfClass(lVar12,uVar7);

        uVar7 = auVar17._8_8_;

        if ((auVar17._0_8_ & 1) != 0) {

          _objc_retain(lVar12);

          lVar8 = FUN_00290f40(lVar12);

          if (lVar8 == 1) {

            _objc_release(lVar4);

            if (lVar12 != 0) goto LAB_001c40a0;

            goto LAB_001c41d4;

          }

          _objc_release(lVar12);

          uVar7 = extraout_x1_01;

        }

        lVar6 = lVar6 + 1;

      } while (lVar10 != lVar6);

      lVar10 = FUN_00293880(lVar4,uVar7,&local_280,auStack_180,0x10);

    } while (lVar10 != 0);

  }

LAB_001c41cc:

  _objc_release(lVar4);

LAB_001c41d4:

  _objc_release(uVar3);

  goto LAB_001c441c;

LAB_001c40a0:

  uStack_298 = 0;

  local_2a0 = 0;

  uStack_288 = 0;

  uStack_290 = 0;

  lStack_2b8 = 0;

  local_2c0 = 0;

  uStack_2a8 = 0;

  local_2b0 = (long *)0x0;

  FUN_002a6560(lVar12);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar17._0_8_;

  lVar4 = FUN_00293880(uVar7,auVar17._8_8_,&local_2c0,auStack_200,0x10);

  if (lVar4 == 0) {

    _objc_release(uVar7);

    lVar4 = lVar12;

    goto LAB_001c41cc;

  }

  lVar13 = 0;

  lVar6 = 0;

  lVar10 = 0;

  lVar8 = *local_2b0;

  dVar16 = *(double *)PTR__UIWindowLevelNormal_003884d8;

  do {

    lVar11 = 0;

    do {

      if (*local_2b0 != lVar8) {

        _objc_enumerationMutation(uVar7);

      }

      lVar14 = *(long *)(lStack_2b8 + lVar11 * 8);

      auVar17 = FUN_002978a0(lVar14);

      uVar5 = auVar17._8_8_;

      if ((auVar17._0_8_ & 1) == 0) {

        if (lVar10 == 0) {

          _objc_retain(lVar14);

          lVar10 = lVar14;

        }

        dVar15 = (double)FUN_002a6540(lVar14);

        if (dVar15 == dVar16 && lVar6 == 0) {

          _objc_retain(lVar14);

          lVar6 = lVar14;

        }

        iVar2 = FUN_00297900(lVar14);

        uVar5 = extraout_x1_02;

        if (iVar2 != 0) {

          _objc_retain(lVar14);

          _objc_release(lVar13);

          uVar5 = extraout_x1_03;

          lVar13 = lVar14;

        }

      }

      lVar11 = lVar11 + 1;

    } while (lVar4 != lVar11);

    lVar4 = FUN_00293880(uVar7,uVar5,&local_2c0,auStack_200,0x10);

  } while (lVar4 != 0);

  _objc_release(uVar7);

  if (lVar13 == 0) {

    if (lVar6 != 0) {

      _objc_retain(lVar6);

      lVar4 = lVar10;

      lVar10 = lVar6;

      goto LAB_001c41f0;

    }

    _objc_release(lVar12);

    if (lVar10 != 0) goto LAB_001c420c;

    goto LAB_001c41d4;

  }

  _objc_retain(lVar13);

  _objc_release(lVar10);

  lVar4 = lVar6;

  lVar10 = lVar13;

LAB_001c41f0:

  _objc_release(lVar4);

  _objc_release(lVar10);

  _objc_release(lVar12);

LAB_001c420c:

  _objc_release(uVar3);

  if (DAT_003ea900 == 0) {

LAB_001c424c:

    _objc_alloc(&objc::class_t::XZYDLBubbleView);

    puVar1 = PTR__CGRectZero_00388bf0;

    lVar13 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                          *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                          *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                          *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

    FUN_00297e40();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x402c000000000000);

    _objc_release(uVar3);

    FUN_00297e40(lVar13);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a2860(0x40c3878000000000);

    _objc_release(uVar3);

    FUN_0029cb60(0,lVar13);

    FUN_0029e8a0(lVar13,extraout_x1_04,1);

    FUN_00291380(lVar10,extraout_x1_05,lVar13);

    FUN_002925e0(lVar10,extraout_x1_06,lVar13);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    auVar17 = FUN_00296b80(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),

                           *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));

    uVar7 = auVar17._0_8_;

    FUN_002a1d80(uVar7,auVar17._8_8_,1);

    FUN_0029ffc0(uVar7,extraout_x1_07,1);

    FUN_0029c960(uVar7,extraout_x1_08,1);

    FUN_0029fd00(0x3fe6666666666666,uVar7);

    FUN_0029f460(uVar7,extraout_x1_09,4);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar7,auVar17._8_8_,auVar17._0_8_);

    _objc_release(auVar17._0_8_);

    FUN_002a23c0(uVar7,extraout_x1_10,0);

    FUN_00291380(lVar13,extraout_x1_11,uVar7);

    lVar4 = DAT_003ea900;

    DAT_003ea900 = lVar13;

    _objc_retain(lVar13);

    _objc_release(lVar4);

    uVar3 = DAT_003ea908;

    DAT_003ea908 = uVar7;

    _objc_retain(uVar7);

    _objc_release(uVar3);

    lVar4 = DAT_003ea8f8;

    DAT_003ea8f8 = lVar10;

    _objc_retain(lVar10);

    _objc_release(lVar4);

    _objc_release(uVar7);

    _objc_release(lVar13);

    _objc_release(lVar10);

  }

  else {

    FUN_002a6520();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != lVar10) {

      if (DAT_003ea900 != 0) {

        FUN_0029b340(DAT_003ea900);

      }

      goto LAB_001c424c;

    }

    FUN_002925e0(lVar10);

    lVar4 = DAT_003ea8f8;

    DAT_003ea8f8 = lVar10;

    _objc_retain(lVar10);

    _objc_release(lVar4);

    _objc_release(lVar10);

  }

LAB_001c441c:

  if (DAT_003ea900 != 0) {

    FUN_002a64c0(&_OBJC_CLASS___NSCharacterSet);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a45c0(param_1,auVar17._8_8_,auVar17._0_8_);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar17._0_8_);

    auVar17 = FUN_00297fa0(uVar3);

    if (auVar17._0_8_ == 0) {

      uVar9 = FUN_002978a0(DAT_003ea900);

      if (((uVar9 & 1) == 0) && (dVar16 = (double)FUN_002916a0(DAT_003ea900), 0.01 < dVar16)) {

        FUN_002917c0(0x3fd0000000000000,&_OBJC_CLASS___UIView,extraout_x1_15,

                     &PTR___NSConcreteGlobalBlock_0038ebd8,&PTR___NSConcreteGlobalBlock_0038ec18);

        uVar7 = DAT_003ea910;

        DAT_003ea910 = 0;

        _objc_release(uVar7);

      }

    }

    else {

      uVar9 = FUN_00297820(uVar3,auVar17._8_8_,DAT_003ea910);

      if ((uVar9 & 1) == 0) {

        uVar5 = FUN_002937a0(uVar3);

        uVar7 = DAT_003ea910;

        DAT_003ea910 = uVar5;

        _objc_release(uVar7);

        FUN_002a1d60(DAT_003ea908,extraout_x1_12,uVar3);

        FUN_001c4c74();

        FUN_002a6520(DAT_003ea900);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar4 != 0) {

          FUN_002a6520(DAT_003ea900);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          FUN_002925e0(auVar17._0_8_,auVar17._8_8_,DAT_003ea900);

          _objc_release(auVar17._0_8_);

        }

        auVar17 = FUN_002978a0(DAT_003ea900);

        uVar7 = auVar17._8_8_;

        if (((auVar17._0_8_ & 1) != 0) ||

           (dVar16 = (double)FUN_002916a0(DAT_003ea900), uVar7 = extraout_x1_13, dVar16 < 1.0)) {

          FUN_0029e8a0(DAT_003ea900,uVar7,0);

          FUN_0029cb60(0,DAT_003ea900);

          FUN_002917a0(0x3fcc28f5c28f5c29,&_OBJC_CLASS___UIView,extraout_x1_14,

                       &PTR___NSConcreteGlobalBlock_0038ec38);

        }

      }

    }

    _objc_release(uVar3);

  }

LAB_001c45ac:

  _objc_release(param_1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




