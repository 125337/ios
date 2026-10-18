// handlePan: @0x28213c


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockLiquidContainer::handlePan_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  int iVar2;

  uint uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar10;

  long lVar11;

  float fVar12;

  double dVar13;

  double dVar14;

  undefined8 uVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar19 [16];

  undefined1 auVar20 [16];

  undefined8 local_220;

  long lStack_218;

  long *local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 uStack_1f0;

  undefined8 uStack_1e8;

  undefined8 local_1e0;

  undefined8 uStack_1d8;

  undefined8 uStack_1d0;

  undefined8 uStack_1c8;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined8 uStack_1a8;

  undefined8 local_1a0;

  undefined8 uStack_198;

  undefined8 uStack_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined8 local_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 local_138;

  undefined8 uStack_130;

  undefined1 auStack_128 [128];

  long local_a8;

  

  local_a8 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  dVar13 = (double)FUN_00298440(param_3,extraout_x1,param_1);

  dVar16 = in_d1;

  lVar4 = FUN_002a4240(param_3);

  if (lVar4 == 1) {

    auVar19 = FUN_0029a520(param_1);

    if (auVar19._0_8_ != 0) goto LAB_00282888;

    dVar14 = (double)FUN_002a5740(param_3,auVar19._8_8_,param_1);

    dVar17 = dVar16;

    FUN_00292260(param_1,extraout_x1_00,0);

    FUN_0029c3c0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar15 = FUN_0027e700();

    _objc_release(uVar5);

    iVar1 = FUN_0029c480(param_1);

    FUN_0029c3c0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a540();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      FUN_0029c3c0(param_1);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_00297e40();

      lVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_release(uVar7);

    }

    else {

      _objc_retain(lVar4);

      lVar8 = lVar4;

    }

    dVar14 = dVar13 - dVar14;

    _objc_release(lVar4);

    _objc_release(uVar6);

    _objc_release(uVar5);

    if (lVar8 == 0) {

      uStack_178 = 0;

      local_180 = 0;

      uStack_168 = 0;

      uStack_170 = 0;

      uStack_198 = 0;

      local_1a0 = 0;

      uStack_188 = 0;

      uStack_190 = 0;

      uStack_1b8 = 0;

      local_1c0 = 0;

      uStack_1a8 = 0;

      uStack_1b0 = 0;

      uStack_1d8 = 0;

      local_1e0 = 0;

      uStack_1c8 = 0;

      uStack_1d0 = 0;

    }

    else {

      FUN_002a4780(&local_1e0,lVar8);

    }

    _CATransform3DGetAffineTransform(&local_158,&local_1e0);

    fVar12 = (float)FUN_00299860(lVar8);

    FUN_002928c0(param_1);

    FUN_002a0560(dVar14,in_d1 - dVar16,param_1);

    iVar2 = _CGRectContainsPoint(uVar15,dVar17,in_d2,in_d3,dVar14,in_d1 - dVar16);

    if (iVar2 != 0) {

      dVar14 = (double)_CGRectGetMidX(uVar15,dVar17,in_d2,in_d3);

    }

    uVar5 = _CGRectGetMidY(uVar15,dVar17,in_d2,in_d3);

    FUN_002a0580(dVar14,uVar5,param_1);

    uStack_1f8 = 0;

    local_200 = 0;

    uStack_1e8 = 0;

    uStack_1f0 = 0;

    lStack_218 = 0;

    local_220 = 0;

    uStack_208 = 0;

    local_210 = (long *)0x0;

    FUN_002a4d60(param_1);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar19._0_8_;

    lVar4 = FUN_00293880(uVar5,auVar19._8_8_,&local_220,auStack_128,0x10);

    if (lVar4 != 0) {

      lVar10 = *local_210;

      do {

        lVar11 = 0;

        do {

          if (*local_210 != lVar10) {

            _objc_enumerationMutation(uVar5);

          }

          FUN_0029b840(*(undefined8 *)(lStack_218 + lVar11 * 8));

          lVar11 = lVar11 + 1;

        } while (lVar4 != lVar11);

        lVar4 = FUN_00293880(uVar5,extraout_x1_01,&local_220,auStack_128,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar5);

    FUN_0029c3c0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00271c80();

    _objc_release(uVar5);

    FUN_0029c3e0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_00271c80();

    _objc_release(uVar5);

    FUN_0029c3c0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a620();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b7c0();

    _objc_release(uVar6);

    _objc_release(uVar5);

    FUN_00299100(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a620();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b7c0();

    _objc_release(uVar6);

    _objc_release(uVar5);

    uVar6 = _CGRectGetMidX(uVar15,dVar17,in_d2,in_d3);

    dVar16 = (double)_CGRectGetMidY(uVar15,dVar17,in_d2,in_d3);

    FUN_002a5120(param_1);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    uVar5 = auVar19._0_8_;

    if (iVar1 == 0) {

      FUN_002921a0(uVar6,uVar5);

    }

    else {

      uStack_1d8 = uStack_150;

      local_1e0 = local_158;

      uStack_1c8 = uStack_140;

      uStack_1d0 = uStack_148;

      uStack_1b8 = uStack_130;

      local_1c0 = local_138;

      FUN_002921c0(uVar6,dVar16,(double)fVar12,uVar5,auVar19._8_8_,&local_1e0);

    }

    _objc_release(uVar5);

    FUN_00299100(param_1);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar19._0_8_,auVar19._8_8_,1);

    FUN_0029c3c0(param_1);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar20._0_8_,auVar20._8_8_,1);

    _objc_release(auVar20._0_8_);

    _objc_release(auVar19._0_8_);

    _objc_release(lVar8);

  }

  iVar1 = FUN_002a5580(param_1);

  if ((iVar1 != 0) && (uVar9 = FUN_002a55e0(param_1), (uVar9 & 1) == 0)) {

    lVar4 = FUN_002a4240(param_3);

    if ((lVar4 == 1) || (lVar4 = FUN_002a4240(param_3), lVar4 == 2)) {

      lVar4 = FUN_0029a520(param_1);

      if (lVar4 == 0) {

        FUN_00299120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar17 = (double)_CGRectGetWidth();

        FUN_002a4d60(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        uVar9 = FUN_00293860();

        _objc_release(uVar6);

        if ((long)uVar9 < 2) {

          uVar9 = 1;

        }

        dVar17 = dVar17 / (double)uVar9;

        _objc_release(uVar5);

        dVar14 = (double)FUN_00299a60(param_1);

        dVar18 = (double)FUN_00299a40(param_1);

        dVar18 = (dVar13 + dVar14) - dVar18;

        FUN_002a4d60(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_00293860();

        _objc_release(uVar5);

        uVar9 = lVar4 - 1U;

        if ((long)(dVar18 / dVar17) <= (long)(lVar4 - 1U)) {

          uVar9 = (long)(dVar18 / dVar17);

        }

        uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);

        auVar19 = FUN_0029a7e0(param_1);

        if (uVar9 != auVar19._0_8_) {

          FUN_002a0a40(param_1,auVar19._8_8_,uVar9);

        }

        dVar14 = dVar17 * 0.5;

        FUN_00299120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar13 = (double)_CGRectGetWidth();

        dVar13 = dVar13 - dVar17 * 0.5;

        _objc_release(uVar5);

        if (dVar18 <= dVar13) {

          dVar13 = dVar18;

        }

        if (dVar13 <= dVar14) {

          dVar13 = dVar14;

        }

        FUN_002a61e0(param_3,extraout_x1_02,param_1);

        FUN_002a0c80(param_1);

        dVar18 = 0.0;

        uVar3 = _UIAccessibilityIsReduceMotionEnabled();

        if ((uVar3 & 1) == 0) {

          FUN_00299a40(param_1);

          dVar16 = (in_d1 - dVar16) * 0.24;

          dVar18 = 12.0;

          if (dVar16 <= 12.0) {

            dVar18 = dVar16;

          }

          if (dVar18 <= -12.0) {

            dVar18 = -12.0;

          }

        }

        FUN_00299120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar16 = (double)_CGRectGetHeight();

        dVar18 = dVar18 + dVar16 * 0.5;

        _objc_release(uVar5);

        FUN_002a5120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_0029fd60(dVar14);

        _objc_release(uVar5);

        FUN_00299120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar16 = (double)_CGRectGetWidth();

        FUN_002a5120(param_1);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0029fa60(dVar16 + -dVar17 * 0.5);

        _objc_release(uVar6);

        _objc_release(uVar5);

        FUN_002a5120(param_1);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        if (uVar3 == 0) {

          uVar6 = FUN_0029b100(param_1);

          FUN_002954c0(dVar13,dVar18,uVar6,uVar5);

        }

        else {

          FUN_0029b800(dVar13,dVar18,uVar5);

        }

        _objc_release(uVar5);

      }

    }

    else {

      lVar4 = FUN_002a4240(param_3);

      if (lVar4 == 3) {

        FUN_002925a0(param_1);

        _CGRectInset();

        uVar3 = _CGRectContainsPoint();

        uVar3 = uVar3 ^ 1;

        uVar5 = extraout_x1_03;

      }

      else {

        auVar19 = FUN_002a4240(param_3);

        uVar5 = auVar19._8_8_;

        if (auVar19._0_8_ != 4) {

          auVar19 = FUN_002a4240(param_3);

          uVar5 = auVar19._8_8_;

          if (auVar19._0_8_ != 5) goto LAB_00282888;

        }

        uVar3 = 1;

      }

      FUN_002953a0(param_1,uVar5,uVar3);

    }

  }

LAB_00282888:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a8) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




