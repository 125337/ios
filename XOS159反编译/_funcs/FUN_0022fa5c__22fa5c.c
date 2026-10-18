// FUN_0022fa5c @0x22fa5c


void FUN_0022fa5c(void)



{

  undefined8 uVar1;

  ulong uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined8 uVar11;

  long lVar12;

  undefined1 auVar13 [16];

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

  if (DAT_003eb0e8 == '\x01') {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_respondsToSelector(uVar1,"windows");

    if ((uVar2 & 1) != 0) {

      _objc_msgSend(uVar1,"windows");

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uStack_208 = 0;

      local_210 = 0;

      uStack_1f8 = 0;

      uStack_200 = 0;

      lStack_228 = 0;

      local_230 = 0;

      uStack_218 = 0;

      local_220 = (long *)0x0;

      _objc_retain();

      lVar4 = FUN_00293880(uVar3,extraout_x1,&local_230,auStack_f0,0x10);

      if (lVar4 != 0) {

        lVar12 = *local_220;

        do {

          lVar8 = 0;

          do {

            if (*local_220 != lVar12) {

              _objc_enumerationMutation(uVar3);

            }

            FUN_00297e40(*(undefined8 *)(lStack_228 + lVar8 * 8));

            uVar5 = _objc_retainAutoreleasedReturnValue();

            FUN_00230e34();

            _objc_release(uVar5);

            lVar8 = lVar8 + 1;

          } while (lVar4 != lVar8);

          lVar4 = FUN_00293880(uVar3,extraout_x1_00,&local_230,auStack_f0,0x10);

        } while (lVar4 != 0);

      }

      _objc_release(uVar3);

      _objc_release(uVar3);

    }

    uStack_248 = 0;

    local_250 = 0;

    uStack_238 = 0;

    uStack_240 = 0;

    lStack_268 = 0;

    local_270 = 0;

    uStack_258 = 0;

    local_260 = (long *)0x0;

    FUN_00293440(uVar1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar13._0_8_;

    lVar4 = FUN_00293880(uVar3,auVar13._8_8_,&local_270,auStack_170,0x10);

    if (lVar4 != 0) {

      lVar12 = *local_260;

      do {

        lVar8 = 0;

        do {

          if (*local_260 != lVar12) {

            _objc_enumerationMutation(uVar3);

          }

          uVar11 = *(undefined8 *)(lStack_268 + lVar8 * 8);

          uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

          auVar13 = _objc_opt_isKindOfClass(uVar11,uVar5);

          uVar5 = auVar13._8_8_;

          if ((auVar13._0_8_ & 1) != 0) {

            _objc_retain(uVar11);

            lStack_2a8 = 0;

            local_2b0 = 0;

            uStack_298 = 0;

            local_2a0 = (long *)0x0;

            uStack_288 = 0;

            local_290 = 0;

            uStack_278 = 0;

            uStack_280 = 0;

            FUN_002a6560(uVar11);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar13._0_8_;

            lVar6 = FUN_00293880(uVar5,auVar13._8_8_,&local_2b0,auStack_1f0,0x10);

            if (lVar6 != 0) {

              lVar9 = *local_2a0;

              do {

                lVar10 = 0;

                do {

                  if (*local_2a0 != lVar9) {

                    _objc_enumerationMutation(uVar5);

                  }

                  FUN_00297e40(*(undefined8 *)(lStack_2a8 + lVar10 * 8));

                  uVar7 = _objc_retainAutoreleasedReturnValue();

                  FUN_00230e34();

                  _objc_release(uVar7);

                  lVar10 = lVar10 + 1;

                } while (lVar6 != lVar10);

                lVar6 = FUN_00293880(uVar5,extraout_x1_01,&local_2b0,auStack_1f0,0x10);

              } while (lVar6 != 0);

            }

            _objc_release(uVar5);

            _objc_release(uVar11);

            uVar5 = extraout_x1_02;

          }

          lVar8 = lVar8 + 1;

        } while (lVar8 != lVar4);

        lVar4 = FUN_00293880(uVar3,uVar5,&local_270,auStack_170,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    _objc_release(uVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




