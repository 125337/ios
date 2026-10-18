// placeGlass:frame:animated:phase:leadsExpansion: @0x276fec


/* Function Stack Size: 0x48 bytes */



void XZYHomeDockLiquidContainer::placeGlass_frame_animated_phase_leadsExpansion_

               (ID param_1,SEL param_2,ID param_3,CGRect param_4,bool param_5,long_long param_6,

               bool param_7)



{

  uint uVar1;

  uint uVar2;

  int iVar3;

  ulong uVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar11;

  long lVar12;

  long lVar13;

  double dVar14;

  double dVar15;

  double dVar16;

  double dVar17;

  double dVar18;

  double dVar19;

  double dVar20;

  double dVar21;

  double dVar22;

  double dVar23;

  undefined1 auVar24 [16];

  undefined8 local_1a0;

  long lStack_198;

  long *local_190;

  undefined8 uStack_188;

  undefined8 local_180;

  undefined8 uStack_178;

  undefined8 uStack_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined1 auStack_130 [128];

  long local_b0;

  

  dVar22 = param_4.field1_0x10.field1_0x8;

  dVar20 = param_4.field1_0x10.field0_0x0;

  dVar18 = param_4.field0_0x0.field1_0x8;

  dVar14 = param_4.field0_0x0.field0_0x0;

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  dVar19 = dVar18;

  dVar21 = dVar20;

  dVar23 = dVar22;

  _objc_retain(param_3);

  if (param_6 == 0) {

    if (param_3 == 0) {

      uStack_148 = 0;

      local_150 = 0;

      uStack_138 = 0;

      local_140 = 0;

      uStack_158 = 0;

      local_160 = 0;

    }

    else {

      FUN_002a56a0(&local_160,param_3);

    }

    iVar3 = _CGAffineTransformIsIdentity(&local_160);

    if (iVar3 != 0) {

      FUN_00295600(param_3);

      uVar4 = _CGRectEqualToRect();

      if ((uVar4 & 1) != 0) goto LAB_0027737c;

    }

  }

  FUN_00297e40(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a540();

  lVar6 = _objc_retainAutoreleasedReturnValue();

  if (lVar6 == 0) {

    FUN_00297e40(param_3);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar7);

  }

  else {

    FUN_002925a0(lVar6);

  }

  _objc_release(lVar6);

  _objc_release(uVar5);

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lStack_198 = 0;

  local_1a0 = 0;

  uStack_188 = 0;

  local_190 = (long *)0x0;

  uStack_178 = 0;

  local_180 = 0;

  uStack_168 = 0;

  uStack_170 = 0;

  FUN_002956e0(param_3);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar24._0_8_;

  lVar6 = FUN_00293880(uVar7,auVar24._8_8_,&local_1a0,auStack_130,0x10);

  if (lVar6 != 0) {

    lVar12 = *local_190;

    uVar1 = 0;

    if (param_6 == 2) {

      uVar1 = param_7;

    }

    do {

      lVar11 = 0;

      do {

        if (*local_190 != lVar12) {

          _objc_enumerationMutation(uVar7);

        }

        lVar13 = *(long *)(lStack_198 + lVar11 * 8);

        FUN_002773d0(0,lVar13,uVar5);

        auVar24 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar24._0_8_;

        FUN_002a06a0(uVar8,auVar24._8_8_,param_6);

        FUN_00297e40(param_3);

        lVar9 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        uVar2 = uVar1 ^ 1;

        if (lVar13 != lVar9) {

          uVar2 = 1;

        }

        if ((uVar2 & 1) == 0) {

          FUN_002a62c0(uVar8);

          auVar24 = _objc_retainAutoreleasedReturnValue();

          FUN_00299540(auVar24._0_8_,auVar24._8_8_,&cf_position);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          dVar15 = (double)FUN_00290a80();

          _objc_release(uVar10);

          _objc_release(auVar24._0_8_);

          FUN_002a21a0(uVar8,extraout_x1,1);

          dVar16 = (double)_CGRectGetMidX(dVar14,dVar18,dVar20,dVar22);

          dVar17 = (double)_CGRectGetMidY(dVar14,dVar18,dVar20,dVar22);

          dVar19 = dVar17 - dVar19;

          FUN_0029d340(dVar16 - dVar15,dVar19,uVar8);

        }

        _objc_release(uVar8);

        lVar11 = lVar11 + 1;

      } while (lVar6 != lVar11);

      lVar6 = FUN_00293880(uVar7,extraout_x1_00,&local_1a0,auStack_130,0x10);

    } while (lVar6 != 0);

  }

  _objc_release(uVar7);

  FUN_00292180(&_OBJC_CLASS___CATransaction);

  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

  uStack_158 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 8);

  local_160 = *(undefined8 *)PTR__CGAffineTransformIdentity_00388998;

  uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x18);

  local_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x10);

  uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x28);

  local_140 = *(undefined8 *)(PTR__CGAffineTransformIdentity_00388998 + 0x20);

  FUN_002a21c0(param_3,extraout_x1_02,&local_160);

  FUN_0029e5e0(dVar14,dVar18,dVar20,dVar22,param_3);

  dVar19 = (double)_CGRectGetHeight(dVar14,dVar18,dVar20,dVar22);

  FUN_0029e680(dVar19 * 0.5,param_3);

  FUN_00297ee0(param_3);

  if (((param_5 == 0) || (dVar21 <= 0.0)) || (dVar23 <= 0.0)) {

    FUN_00271c80(param_3);

  }

  else {

    FUN_00277594(uVar5,1);

  }

  FUN_002930a0(&_OBJC_CLASS___CATransaction);

  _objc_release(uVar5);

LAB_0027737c:

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




