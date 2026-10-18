// FUN_000e8c54 @0xe8c54


void FUN_000e8c54(undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  float fVar9;

  float fVar10;

  double dVar11;

  double dVar12;

  undefined1 auVar13 [16];

  undefined8 local_210;

  long lStack_208;

  long *local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined1 auStack_190 [128];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_setAssociatedObject(param_3,PTR_LOOP_003e6758,0,1);

  (*DAT_003e7e18)(param_3,param_4);

  if (DAT_003e7d99 != '\x01') {

    FUN_0029b280(param_3);

    if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

      FUN_0029b520(param_3);

      return;

    }

    goto LAB_000e9158;

  }

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar13._8_8_;

  uVar1 = auVar13._0_8_;

  if ((DAT_003e7d9c == '\x01') && ((DAT_003e7d9b & 1) == 0)) {

    FUN_002a4840(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002937a0();

    _objc_release(uVar2);

    uStack_1a8 = 0;

    local_1b0 = 0;

    uStack_198 = 0;

    uStack_1a0 = 0;

    lStack_1c8 = 0;

    local_1d0 = 0;

    uStack_1b8 = 0;

    local_1c0 = (long *)0x0;

    _objc_retain(uVar3);

    lVar4 = FUN_00293880(uVar3,extraout_x1,&local_1d0,auStack_110,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_1c0;

      do {

        lVar7 = 0;

        do {

          if (*local_1c0 != lVar8) {

            _objc_enumerationMutation(uVar3);

          }

          uVar6 = *(undefined8 *)(lStack_1c8 + lVar7 * 8);

          uVar2 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

          auVar13 = _objc_opt_isKindOfClass(uVar6,uVar2);

          uVar2 = auVar13._8_8_;

          if ((auVar13._0_8_ & 1) != 0) {

            _objc_retain(uVar6);

            FUN_00294ae0(uVar6);

            lVar5 = _objc_retainAutoreleasedReturnValue();

            _objc_release();

            if (lVar5 != 0) {

              FUN_0029df80(uVar6,extraout_x1_00,0);

            }

            FUN_00292dc0(&_OBJC_CLASS___UIColor);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(uVar6,auVar13._8_8_,auVar13._0_8_);

            _objc_release(auVar13._0_8_);

            FUN_00292dc0(&_OBJC_CLASS___UIColor);

            uVar2 = _objc_retainAutoreleasedReturnValue();

            FUN_00293640(uVar6);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            FUN_0029cf60(auVar13._0_8_,auVar13._8_8_,uVar2);

            _objc_release(auVar13._0_8_);

            _objc_release(uVar2);

            _objc_release(uVar6);

            uVar2 = extraout_x1_01;

          }

          lVar7 = lVar7 + 1;

        } while (lVar4 != lVar7);

        lVar4 = FUN_00293880(uVar3,uVar2,&local_1d0,auStack_110,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(param_3,auVar13._8_8_,auVar13._0_8_);

    _objc_release(auVar13._0_8_);

    FUN_002a0420(param_3,extraout_x1_02,0);

    FUN_002a6080(param_3,extraout_x1_03,&cf__maskContainerView);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 != 0) {

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(lVar4,auVar13._8_8_,auVar13._0_8_);

      _objc_release(auVar13._0_8_);

      FUN_002a0420(lVar4,extraout_x1_04,0);

    }

    _objc_release(lVar4);

    _objc_release(uVar3);

    uVar2 = extraout_x1_05;

    if ((DAT_003e7d9b & 1) == 0) goto LAB_000e8f18;

LAB_000e8fa8:

    fVar9 = 0.0;

    dVar12 = 0.0;

    fVar10 = 0.0;

  }

  else {

    if ((DAT_003e7d9b & 1) != 0) goto LAB_000e8fa8;

LAB_000e8f18:

    fVar9 = (float)FUN_00295460(uVar1,uVar2,&cf_SHTM_CONTENT_X_OFFSET);

    dVar12 = (double)fVar9;

    fVar10 = 0.0;

    if ((DAT_003e7d9b & 1) == 0) {

      fVar10 = (float)FUN_00295460(uVar1,extraout_x1_06,&cf_SHTM_CONTENT_Y_OFFSET);

    }

  }

  if ((fVar9 != 0.0) || (fVar10 != 0.0)) {

    uStack_1e8 = 0;

    local_1f0 = 0;

    uStack_1d8 = 0;

    uStack_1e0 = 0;

    lStack_208 = 0;

    local_210 = 0;

    uStack_1f8 = 0;

    local_200 = (long *)0x0;

    FUN_002a4840(param_3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar13._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar13._8_8_,&local_210,auStack_190,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_200;

      do {

        lVar7 = 0;

        do {

          if (*local_200 != lVar8) {

            _objc_enumerationMutation(uVar2);

          }

          uVar6 = *(undefined8 *)(lStack_208 + lVar7 * 8);

          uVar3 = _objc_opt_class(&_OBJC_CLASS___UIVisualEffectView);

          auVar13 = _objc_opt_isKindOfClass(uVar6,uVar3);

          uVar3 = auVar13._8_8_;

          if ((auVar13._0_8_ & 1) == 0) {

            if (DAT_003e7e50 == 0) {

              DAT_003e7e50 = _objc_getClass("SHTMOuterGlowOverlayView");

            }

            lVar5 = DAT_003e7e50;

            _objc_retain(DAT_003e7e50);

            _objc_autorelease(lVar5);

            uVar3 = _objc_opt_class(lVar5);

            auVar13 = _objc_opt_isKindOfClass(uVar6,uVar3);

            uVar3 = auVar13._8_8_;

            if ((auVar13._0_8_ & 1) == 0) {

              dVar11 = (double)FUN_00295600(uVar6);

              param_2 = param_2 + (double)fVar10;

              FUN_0029e5e0(dVar11 + dVar12,param_2,uVar6);

              uVar3 = extraout_x1_07;

            }

          }

          lVar7 = lVar7 + 1;

        } while (lVar4 != lVar7);

        lVar4 = FUN_00293880(uVar2,uVar3,&local_210,auStack_190,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

  }

  FUN_00291a60(0x3ff0000000000000,0x3ff0000000000000,param_3);

  if (DAT_003e7da0 == '\x01') {

    FUN_002912c0(param_3);

  }

  else {

    FUN_0029b520(param_3);

  }

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

LAB_000e9158:

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




