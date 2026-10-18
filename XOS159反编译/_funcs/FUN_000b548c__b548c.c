// FUN_000b548c @0xb548c


void FUN_000b548c(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined8 local_270;

  long lStack_268;

  long *local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  undefined8 uStack_240;

  undefined8 uStack_238;

  undefined8 local_230;

  long lStack_228;

  long *local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);

  if (lVar1 != 0) {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = FUN_00291a00();

    _objc_release(uVar2);

    if ((lVar3 == 0) && (lVar3 = _objc_getClass("InputToolViewBar"), lVar3 != 0)) {

      FUN_002a6220(lVar1);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      FUN_00291dc0(&_OBJC_CLASS___NSMutableArray,auVar15._8_8_,auVar15._0_8_);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar15._0_8_);

      while( true ) {

        lVar5 = FUN_00293860(lVar4);

        if (lVar5 == 0) goto LAB_000b5820;

        FUN_00295440(lVar4);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        lVar5 = auVar15._0_8_;

        FUN_0029b480(lVar4,auVar15._8_8_,0);

        uVar6 = _objc_opt_isKindOfClass(lVar5,lVar3);

        if ((uVar6 & 1) != 0) break;

        uStack_208 = 0;

        local_210 = 0;

        uStack_1f8 = 0;

        uStack_200 = 0;

        lStack_228 = 0;

        local_230 = 0;

        uStack_218 = 0;

        local_220 = (long *)0x0;

        FUN_002a4840(lVar5);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        uVar2 = auVar15._0_8_;

        auVar15 = FUN_00293880(uVar2,auVar15._8_8_,&local_230,auStack_f0,0x10);

        if (auVar15._0_8_ != 0) {

          lVar12 = *local_220;

          do {

            uVar7 = auVar15._8_8_;

            lVar13 = 0;

            do {

              if (*local_220 != lVar12) {

                _objc_enumerationMutation(uVar2);

                uVar7 = extraout_x1;

              }

              FUN_00291240(lVar4,uVar7,*(undefined8 *)(lStack_228 + lVar13 * 8));

              lVar13 = lVar13 + 1;

              uVar7 = extraout_x1_00;

            } while (auVar15._0_8_ != lVar13);

            auVar15 = FUN_00293880(uVar2,extraout_x1_00,&local_230,auStack_f0,0x10);

          } while (auVar15._0_8_ != 0);

        }

        _objc_release(uVar2);

        _objc_release(lVar5);

      }

      if (lVar5 == 0) goto LAB_000b5820;

      uStack_248 = 0;

      local_250 = 0;

      uStack_238 = 0;

      uStack_240 = 0;

      lStack_268 = 0;

      local_270 = 0;

      uStack_258 = 0;

      local_260 = (long *)0x0;

      FUN_002a4840(lVar5);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar15._0_8_;

      lVar3 = FUN_00293880(uVar2,auVar15._8_8_,&local_270,auStack_170,0x10);

      if (lVar3 != 0) {

        lVar12 = *local_260;

        do {

          lVar13 = 0;

          do {

            if (*local_260 != lVar12) {

              _objc_enumerationMutation(uVar2);

            }

            lVar11 = *(long *)(lStack_268 + lVar13 * 8);

            uVar7 = _objc_opt_class(&_OBJC_CLASS___UITextView);

            uVar6 = _objc_opt_isKindOfClass(lVar11,uVar7);

            if ((uVar6 & 1) != 0) {

              _objc_retain(lVar11);

              goto LAB_000b57c4;

            }

            uStack_288 = 0;

            local_290 = 0;

            uStack_278 = 0;

            uStack_280 = 0;

            lStack_2a8 = 0;

            local_2b0 = 0;

            uStack_298 = 0;

            local_2a0 = (long *)0x0;

            FUN_002a4840(lVar11);

            auVar15 = _objc_retainAutoreleasedReturnValue();

            uVar7 = auVar15._0_8_;

            lVar8 = FUN_00293880(uVar7,auVar15._8_8_,&local_2b0,auStack_1f0,0x10);

            if (lVar8 != 0) {

              lVar14 = *local_2a0;

              do {

                lVar10 = 0;

                do {

                  if (*local_2a0 != lVar14) {

                    _objc_enumerationMutation(uVar7);

                  }

                  lVar11 = *(long *)(lStack_2a8 + lVar10 * 8);

                  uVar9 = _objc_opt_class(&_OBJC_CLASS___UITextView);

                  auVar15 = _objc_opt_isKindOfClass(lVar11,uVar9);

                  if ((auVar15._0_8_ & 1) != 0) {

                    _objc_retain(lVar11);

                    _objc_release(uVar7);

                    uVar7 = extraout_x1_02;

                    if (lVar11 != 0) goto LAB_000b57c4;

                    goto LAB_000b5784;

                  }

                  lVar10 = lVar10 + 1;

                } while (lVar8 != lVar10);

                lVar8 = FUN_00293880(uVar7,auVar15._8_8_,&local_2b0,auStack_1f0,0x10);

              } while (lVar8 != 0);

            }

            _objc_release(uVar7);

            uVar7 = extraout_x1_01;

LAB_000b5784:

            lVar13 = lVar13 + 1;

          } while (lVar13 != lVar3);

          lVar3 = FUN_00293880(uVar2,uVar7,&local_270,auStack_170,0x10);

        } while (lVar3 != 0);

      }

      lVar11 = 0;

LAB_000b57c4:

      _objc_release(uVar2);

      _objc_release(lVar5);

      _objc_release(lVar4);

      if (lVar11 != 0) {

        _objc_getAssociatedObject(lVar11,PTR_LOOP_003e6588);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if (lVar3 != lVar1) {

          _objc_setAssociatedObject(lVar11,PTR_LOOP_003e6588,lVar1,0);

        }

        _objc_release(lVar3);

        lVar4 = lVar11;

LAB_000b5820:

        _objc_release(lVar4);

      }

    }

  }

  _objc_release(lVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_70) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




