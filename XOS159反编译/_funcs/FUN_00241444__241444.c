// FUN_00241444 @0x241444


void FUN_00241444(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

  long local_380;

  long local_378;

  undefined8 local_370;

  long lStack_368;

  long *local_360;

  undefined8 uStack_358;

  undefined8 local_350;

  undefined8 uStack_348;

  undefined8 uStack_340;

  undefined8 uStack_338;

  undefined8 local_330;

  long lStack_328;

  long *local_320;

  undefined8 uStack_318;

  undefined8 local_310;

  undefined8 uStack_308;

  undefined8 uStack_300;

  undefined8 uStack_2f8;

  undefined8 local_2f0;

  long lStack_2e8;

  long *local_2e0;

  undefined8 uStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 uStack_2c0;

  undefined8 uStack_2b8;

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined1 auStack_270 [128];

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  uStack_288 = 0;

  local_290 = 0;

  uStack_278 = 0;

  uStack_280 = 0;

  lStack_2a8 = 0;

  local_2b0 = 0;

  uStack_298 = 0;

  local_2a0 = (long *)0x0;

  FUN_00293440(uVar1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar11._0_8_;

  lVar4 = FUN_00293880(uVar3,auVar11._8_8_,&local_2b0,auStack_f0,0x10);

  if (lVar4 != 0) {

    lVar6 = *local_2a0;

    do {

      lVar8 = 0;

      do {

        if (*local_2a0 != lVar6) {

          _objc_enumerationMutation(uVar3);

        }

        uVar7 = *(undefined8 *)(lStack_2a8 + lVar8 * 8);

        uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar11 = _objc_opt_isKindOfClass(uVar7,uVar5);

        uVar5 = auVar11._8_8_;

        if ((auVar11._0_8_ & 1) != 0) {

          uStack_2c8 = 0;

          local_2d0 = 0;

          uStack_2b8 = 0;

          uStack_2c0 = 0;

          lStack_2e8 = 0;

          local_2f0 = 0;

          uStack_2d8 = 0;

          local_2e0 = (long *)0x0;

          FUN_002a6560(uVar7);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          uVar5 = auVar11._0_8_;

          auVar11 = FUN_00293880(uVar5,auVar11._8_8_,&local_2f0,auStack_170,0x10);

          if (auVar11._0_8_ != 0) {

            lVar9 = *local_2e0;

            do {

              uVar7 = auVar11._8_8_;

              lVar10 = 0;

              do {

                if (*local_2e0 != lVar9) {

                  _objc_enumerationMutation(uVar5);

                  uVar7 = extraout_x1;

                }

                FUN_00291240(uVar2,uVar7,*(undefined8 *)(lStack_2e8 + lVar10 * 8));

                lVar10 = lVar10 + 1;

                uVar7 = extraout_x1_00;

              } while (auVar11._0_8_ != lVar10);

              auVar11 = FUN_00293880(uVar5,extraout_x1_00,&local_2f0,auStack_170,0x10);

            } while (auVar11._0_8_ != 0);

          }

          _objc_release(uVar5);

          uVar5 = extraout_x1_01;

        }

        lVar8 = lVar8 + 1;

      } while (lVar8 != lVar4);

      lVar4 = FUN_00293880(uVar3,uVar5,&local_2b0,auStack_f0,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  uStack_308 = 0;

  local_310 = 0;

  uStack_2f8 = 0;

  uStack_300 = 0;

  lStack_328 = 0;

  local_330 = 0;

  uStack_318 = 0;

  local_320 = (long *)0x0;

  _objc_retain(uVar2);

  local_380 = FUN_00293880(uVar2,extraout_x1_02,&local_330,auStack_1f0,0x10);

  if (local_380 != 0) {

    lVar4 = *local_320;

    do {

      local_378 = 0;

      do {

        if (*local_320 != lVar4) {

          _objc_enumerationMutation(uVar2);

        }

        lStack_368 = 0;

        local_370 = 0;

        uStack_358 = 0;

        local_360 = (long *)0x0;

        uStack_348 = 0;

        local_350 = 0;

        uStack_338 = 0;

        uStack_340 = 0;

        FUN_002a4840(*(undefined8 *)(lStack_328 + local_378 * 8));

        auVar11 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar11._0_8_;

        lVar6 = FUN_00293880(uVar3,auVar11._8_8_,&local_370,auStack_270,0x10);

        if (lVar6 != 0) {

          lVar8 = *local_360;

          do {

            lVar9 = 0;

            do {

              if (*local_360 != lVar8) {

                _objc_enumerationMutation(uVar3);

              }

              uVar7 = *(undefined8 *)(lStack_368 + lVar9 * 8);

              uVar5 = _objc_opt_class(&_OBJC_CLASS___UITabBar);

              auVar11 = _objc_opt_isKindOfClass(uVar7,uVar5);

              uVar5 = auVar11._8_8_;

              if ((auVar11._0_8_ & 1) != 0) {

                _objc_getAssociatedObject(uVar7,PTR_LOOP_003e7258);

                lVar10 = _objc_retainAutoreleasedReturnValue();

                if (lVar10 != 0) {

                  _objc_setAssociatedObject(lVar10,PTR_LOOP_003e72a8,0,3);

                  _objc_setAssociatedObject(lVar10,PTR_LOOP_003e72d8,0,3);

                }

                _objc_release(lVar10);

                uVar5 = extraout_x1_03;

              }

              lVar9 = lVar9 + 1;

            } while (lVar6 != lVar9);

            lVar6 = FUN_00293880(uVar3,uVar5,&local_370,auStack_270,0x10);

          } while (lVar6 != 0);

        }

        _objc_release(uVar3);

        local_378 = local_378 + 1;

      } while (local_378 != local_380);

      local_380 = FUN_00293880(uVar2,extraout_x1_04,&local_330,auStack_1f0,0x10);

    } while (local_380 != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




