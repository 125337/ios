// FUN_001a4248 @0x1a4248


/* WARNING: Type propagation algorithm not settling */



undefined1  [16]

FUN_001a4248(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,

            long param_5,undefined8 param_6,undefined1 *param_7)



{

  undefined *puVar1;

  long lVar2;

  double dVar3;

  uint uVar4;

  int iVar5;

  int iVar6;

  long lVar7;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  ulong uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar14;

  undefined8 uVar15;

  long lVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined1 auVar19 [16];

  long local_1d0;

  undefined8 local_1c0;

  undefined8 uStack_1b8;

  undefined8 uStack_1b0;

  undefined8 local_1a8;

  long local_1a0;

  long local_198;

  long local_190;

  long local_188 [3];

  undefined8 local_170;

  long lStack_168;

  long *local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  long local_130;

  long local_128;

  long local_120;

  double local_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain();

  *param_7 = 0;

  if (param_5 == 0) {

    uVar17 = *(undefined8 *)PTR__CGRectNull_00388bd0;

    uVar18 = 0;

    goto LAB_001a4b10;

  }

  _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ee0);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  if (lVar7 == 0) {

    uVar4 = 0;

  }

  else {

    uVar4 = FUN_002924e0(lVar7);

  }

  _objc_release(lVar7);

  uStack_1b8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

  local_1c0 = *(undefined8 *)PTR__CGRectZero_00388bf0;

  local_1a8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18);

  uVar8 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

  uStack_1b0 = uVar8;

  iVar5 = FUN_001a0234(param_5,&local_1c0);

  uVar17 = local_1c0;

  puVar1 = PTR_LOOP_003e6ee8;

  if (iVar5 != 0) {

    uVar18 = 0;

    if ((uVar4 & 1) != 0) {

      FUN_002a6100(local_1c0,uStack_1b8,uStack_1b0,local_1a8,&_OBJC_CLASS___NSValue);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar1,uVar8,1);

      _objc_release(uVar8);

      puVar1 = PTR_LOOP_003e6ef0;

      FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1,param_6);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar1,uVar8,1);

      _objc_release(uVar8);

    }

    *param_7 = 1;

    goto LAB_001a4b10;

  }

  iVar5 = (int)param_6;

  if (uVar4 != 0) {

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ef0);

    lVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(param_5,PTR_LOOP_003e6ee8);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    if (((lVar9 != 0) && (lVar7 != 0)) && (iVar6 = FUN_002924e0(lVar7), iVar5 == iVar6)) {

      auVar19 = FUN_00290aa0(lVar9);

      uVar18 = auVar19._8_8_;

      uVar17 = auVar19._0_8_;

      if ((1.0 < param_3) && (1.0 < param_4)) {

        *param_7 = 1;

        _objc_release(lVar9);

        _objc_release(lVar7);

        goto LAB_001a4b10;

      }

    }

    _objc_release(lVar9);

    _objc_release(lVar7);

  }

  _objc_retain(param_5);

  _objc_retain(param_5);

  auVar19 = _objc_opt_respondsToSelector(param_5,"getHeadImageView");

  if ((auVar19._0_8_ & 1) == 0) {

    local_1d0 = 0;

  }

  else {

    FUN_00299c80(param_5,auVar19._8_8_,"getHeadImageView");

    local_1d0 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(param_5);

  local_118 = -1.7976931348623157e+308;

  FUN_000822c8(param_5);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  lVar7 = 0;

  if ((lVar9 == 0) || (lVar9 == local_1d0)) {

LAB_001a4590:

    auVar19 = _objc_opt_respondsToSelector(param_5,"getContentView");

    if ((auVar19._0_8_ & 1) != 0) {

      FUN_00299c80(param_5,auVar19._8_8_,"getContentView");

      uVar17 = _objc_retainAutoreleasedReturnValue();

      local_128 = lVar7;

      FUN_001a9198(param_5,uVar17,local_1d0,param_6,0,&local_128,&local_118);

      lVar16 = local_128;

      _objc_retain(local_128);

      _objc_release(lVar7);

      iVar6 = FUN_001a9238(param_5,lVar16,local_1d0,param_6);

      if (iVar6 != 0) {

        _objc_retain(lVar16);

        _objc_release(uVar17);

        goto LAB_001a49dc;

      }

      _objc_release(uVar17);

      lVar7 = lVar16;

    }

    if (DAT_003e9688 != -1) {

      FUN_0028f7c4();

    }

    uVar17 = _objc_opt_class(param_5);

    _CFDictionaryGetValue(DAT_003e9690,uVar17);

    auVar19 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar19._0_8_;

    lVar16 = lVar7;

    if (lVar10 != 0) {

      FUN_002a6080(param_5,auVar19._8_8_,lVar10);

      uVar18 = _objc_retainAutoreleasedReturnValue();

      uVar13 = _objc_opt_class(&_OBJC_CLASS___UIView);

      uVar11 = _objc_opt_isKindOfClass(uVar18,uVar13);

      if ((uVar11 & 1) != 0) {

        local_130 = lVar7;

        FUN_001a9198(param_5,uVar18,local_1d0,iVar5,0,&local_130,&local_118);

        lVar16 = local_130;

        _objc_retain(local_130);

        _objc_release(lVar7);

      }

      _objc_release(uVar18);

    }

    uVar18 = DAT_003e9680;

    uStack_148 = 0;

    local_150 = 0;

    uStack_138 = 0;

    uStack_140 = 0;

    lStack_168 = 0;

    local_170 = 0;

    uStack_158 = 0;

    local_160 = (long *)0x0;

    _objc_retain(DAT_003e9680);

    auVar19 = FUN_00293880(uVar18,extraout_x1_00,&local_170,auStack_110,0x10);

    if (auVar19._0_8_ != 0) {

      lVar7 = *local_160;

      do {

        uVar13 = auVar19._8_8_;

        lVar14 = 0;

        do {

          if (*local_160 != lVar7) {

            _objc_enumerationMutation(uVar18);

            uVar13 = extraout_x1_01;

          }

          uVar15 = *(undefined8 *)(lStack_168 + lVar14 * 8);

          FUN_002a6080(param_5,uVar13,uVar15);

          uVar13 = _objc_retainAutoreleasedReturnValue();

          uVar12 = _objc_opt_class(&_OBJC_CLASS___UIView);

          uVar11 = _objc_opt_isKindOfClass(uVar13,uVar12);

          dVar3 = local_118;

          if ((uVar11 & 1) != 0) {

            local_188[2] = lVar16;

            FUN_001a9198(param_5,uVar13,local_1d0,iVar5,0,local_188 + 2,&local_118);

            lVar2 = local_188[2];

            _objc_retain(local_188[2]);

            _objc_release(lVar16);

            lVar16 = lVar2;

            if (dVar3 < local_118) {

              _CFDictionarySetValue(DAT_003e9690,uVar17,uVar15);

            }

          }

          _objc_release(uVar13);

          lVar14 = lVar14 + 1;

          uVar13 = extraout_x1_02;

        } while (auVar19._0_8_ != lVar14);

        auVar19 = FUN_00293880(uVar18,extraout_x1_02,&local_170,auStack_110,0x10);

      } while (auVar19._0_8_ != 0);

    }

    _objc_release(uVar18);

    uVar11 = FUN_001a9238(param_5,lVar16,local_1d0,iVar5);

    if ((uVar11 & 1) == 0) {

      local_188[0] = 0;

      local_188[1] = 0xffefffffffffffff;

      FUN_001a9444(param_5,param_5,local_1d0,iVar5,0,0,local_188,local_188 + 1);

      lVar7 = local_188[0];

      _objc_retain(local_188[0]);

      if (lVar7 != 0) {

        local_190 = lVar16;

        FUN_001a9198(param_5,lVar7,local_1d0,iVar5,0,&local_190,&local_118);

        lVar14 = local_190;

        _objc_retain(local_190);

        _objc_release(lVar16);

        lVar16 = lVar14;

      }

      _objc_release(lVar7);

      local_188[1] = 0xffefffffffffffff;

      local_198 = 0;

      FUN_001a9444(param_5,param_5,local_1d0,iVar5,1,0,&local_198,local_188 + 1);

      lVar7 = local_198;

      _objc_retain(local_198);

      if (lVar7 != 0) {

        local_1a0 = lVar16;

        FUN_001a9198(param_5,lVar7,local_1d0,iVar5,1,&local_1a0,&local_118);

        lVar14 = local_1a0;

        _objc_retain(local_1a0);

        _objc_release(lVar16);

        lVar16 = lVar14;

      }

      _objc_release(lVar7);

    }

    _objc_retain(lVar16);

    _objc_release(lVar10);

  }

  else {

    iVar6 = FUN_001a90ec(lVar9);

    if (iVar6 == 0) {

      lVar7 = 0;

      goto LAB_001a4590;

    }

    local_120 = 0;

    FUN_001a9198(param_5,lVar9,local_1d0,param_6,0,&local_120,&local_118);

    lVar16 = local_120;

    _objc_retain(local_120);

    iVar6 = FUN_001a9238(param_5,lVar16,local_1d0,param_6);

    lVar7 = lVar16;

    if (iVar6 == 0) goto LAB_001a4590;

    _objc_retain(lVar16);

  }

LAB_001a49dc:

  _objc_release(lVar9);

  _objc_release(lVar16);

  _objc_release(local_1d0);

  _objc_release(param_5);

  if (lVar16 == 0) {

LAB_001a4af8:

    uVar17 = *(undefined8 *)PTR__CGRectNull_00388bd0;

    uVar18 = 0;

  }

  else {

    FUN_002a4880(lVar16);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00295600(lVar16);

    auVar19 = FUN_00293720(uVar13,extraout_x1_03,param_5);

    uVar18 = auVar19._8_8_;

    uVar17 = auVar19._0_8_;

    _objc_release(uVar13);

    puVar1 = PTR_LOOP_003e6ee8;

    if ((param_3 <= 1.0) || (param_4 <= 1.0)) goto LAB_001a4af8;

    if (uVar4 != 0) {

      FUN_002a6100(uVar17,uVar8,param_3,param_4,&_OBJC_CLASS___NSValue);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar1,uVar8,1);

      _objc_release(uVar8);

      puVar1 = PTR_LOOP_003e6ef0;

      FUN_00299380(&_OBJC_CLASS___NSNumber,extraout_x1_04,iVar5);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      _objc_setAssociatedObject(param_5,puVar1,uVar8,1);

      _objc_release(uVar8);

    }

    *param_7 = 1;

  }

  _objc_release(lVar16);

LAB_001a4b10:

  _objc_release(param_5);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    auVar19._8_8_ = uVar18;

    auVar19._0_8_ = uVar17;

    return auVar19;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




