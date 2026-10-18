// FUN_00223b70 @0x223b70


void FUN_00223b70(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined8 local_430;

  long lStack_428;

  long *local_420;

  undefined8 uStack_418;

  undefined8 local_410;

  undefined8 uStack_408;

  undefined8 uStack_400;

  undefined8 uStack_3f8;

  undefined8 local_3f0;

  long lStack_3e8;

  long *local_3e0;

  undefined8 uStack_3d8;

  undefined8 local_3d0;

  undefined8 uStack_3c8;

  undefined8 uStack_3c0;

  undefined8 uStack_3b8;

  undefined8 local_3b0;

  long lStack_3a8;

  long *local_3a0;

  undefined8 uStack_398;

  undefined8 local_390;

  undefined8 uStack_388;

  undefined8 uStack_380;

  undefined8 uStack_378;

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

  undefined1 auStack_2f0 [128];

  undefined1 auStack_270 [128];

  undefined1 auStack_1f0 [128];

  undefined1 auStack_170 [128];

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00224068();

  if (DAT_003eb080 != -1) {

    FUN_0028fb30();

  }

  if (DAT_003eb078 != 0) {

    FUN_002a2e60(&_OBJC_CLASS___UIApplication);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uStack_308 = 0;

    local_310 = 0;

    uStack_2f8 = 0;

    uStack_300 = 0;

    lStack_328 = 0;

    local_330 = 0;

    uStack_318 = 0;

    local_320 = (long *)0x0;

    FUN_00293440(uVar1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar13._0_8_;

    lVar4 = FUN_00293880(uVar3,auVar13._8_8_,&local_330,auStack_f0,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_320;

      do {

        lVar12 = 0;

        do {

          if (*local_320 != lVar8) {

            _objc_enumerationMutation(uVar3);

          }

          uVar10 = *(undefined8 *)(lStack_328 + lVar12 * 8);

          uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

          auVar13 = _objc_opt_isKindOfClass(uVar10,uVar5);

          uVar5 = auVar13._8_8_;

          if ((auVar13._0_8_ & 1) != 0) {

            _objc_retain(uVar10);

            lStack_368 = 0;

            local_370 = 0;

            uStack_358 = 0;

            local_360 = (long *)0x0;

            uStack_348 = 0;

            local_350 = 0;

            uStack_338 = 0;

            uStack_340 = 0;

            FUN_002a6560(uVar10);

            auVar13 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar13._0_8_;

            auVar13 = FUN_00293880(uVar5,auVar13._8_8_,&local_370,auStack_170,0x10);

            if (auVar13._0_8_ != 0) {

              lVar9 = *local_360;

              do {

                uVar6 = auVar13._8_8_;

                lVar7 = 0;

                do {

                  if (*local_360 != lVar9) {

                    _objc_enumerationMutation(uVar5);

                    uVar6 = extraout_x1;

                  }

                  lVar11 = *(long *)(lStack_368 + lVar7 * 8);

                  if ((lVar11 != 0) &&

                     (auVar14 = FUN_002978a0(lVar11), uVar6 = auVar14._8_8_,

                     (auVar14._0_8_ & 1) == 0)) {

                    FUN_00291240(uVar2,uVar6,lVar11);

                    uVar6 = extraout_x1_00;

                  }

                  lVar7 = lVar7 + 1;

                } while (auVar13._0_8_ != lVar7);

                auVar13 = FUN_00293880(uVar5,uVar6,&local_370,auStack_170,0x10);

              } while (auVar13._0_8_ != 0);

            }

            _objc_release(uVar5);

            _objc_release(uVar10);

            uVar5 = extraout_x1_01;

          }

          lVar12 = lVar12 + 1;

        } while (lVar12 != lVar4);

        lVar4 = FUN_00293880(uVar3,uVar5,&local_330,auStack_f0,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    lVar4 = FUN_00293860(uVar2);

    if (lVar4 == 0) {

      uStack_388 = 0;

      local_390 = 0;

      uStack_378 = 0;

      uStack_380 = 0;

      lStack_3a8 = 0;

      local_3b0 = 0;

      uStack_398 = 0;

      local_3a0 = (long *)0x0;

      FUN_002a6560(uVar1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar13._0_8_;

      auVar13 = FUN_00293880(uVar3,auVar13._8_8_,&local_3b0,auStack_1f0,0x10);

      if (auVar13._0_8_ != 0) {

        lVar4 = *local_3a0;

        do {

          uVar5 = auVar13._8_8_;

          lVar8 = 0;

          do {

            if (*local_3a0 != lVar4) {

              _objc_enumerationMutation(uVar3);

              uVar5 = extraout_x1_02;

            }

            lVar12 = *(long *)(lStack_3a8 + lVar8 * 8);

            if ((lVar12 != 0) &&

               (auVar14 = FUN_002978a0(lVar12), uVar5 = auVar14._8_8_, (auVar14._0_8_ & 1) == 0)) {

              FUN_00291240(uVar2,uVar5,lVar12);

              uVar5 = extraout_x1_03;

            }

            lVar8 = lVar8 + 1;

          } while (auVar13._0_8_ != lVar8);

          auVar13 = FUN_00293880(uVar3,uVar5,&local_3b0,auStack_1f0,0x10);

        } while (auVar13._0_8_ != 0);

      }

      _objc_release(uVar3);

    }

    uStack_3c8 = 0;

    local_3d0 = 0;

    uStack_3b8 = 0;

    uStack_3c0 = 0;

    lStack_3e8 = 0;

    local_3f0 = 0;

    uStack_3d8 = 0;

    local_3e0 = (long *)0x0;

    _objc_retain(uVar2);

    lVar4 = FUN_00293880(uVar2,extraout_x1_04,&local_3f0,auStack_270,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_3e0;

      do {

        lVar12 = 0;

        do {

          if (*local_3e0 != lVar8) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_0022be5c(*(undefined8 *)(lStack_3e8 + lVar12 * 8),DAT_003eb078);

          lVar12 = lVar12 + 1;

        } while (lVar4 != lVar12);

        lVar4 = FUN_00293880(uVar2,extraout_x1_05,&local_3f0,auStack_270,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    uStack_408 = 0;

    local_410 = 0;

    uStack_3f8 = 0;

    uStack_400 = 0;

    lStack_428 = 0;

    local_430 = 0;

    uStack_418 = 0;

    local_420 = (long *)0x0;

    _objc_retain(uVar2);

    lVar4 = FUN_00293880(uVar2,extraout_x1_06,&local_430,auStack_2f0,0x10);

    if (lVar4 != 0) {

      lVar8 = *local_420;

      do {

        lVar12 = 0;

        do {

          if (*local_420 != lVar8) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_00297ee0(*(undefined8 *)(lStack_428 + lVar12 * 8));

          lVar12 = lVar12 + 1;

        } while (lVar4 != lVar12);

        lVar4 = FUN_00293880(uVar2,extraout_x1_07,&local_430,auStack_2f0,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    _objc_release(uVar2);

    _objc_release(uVar1);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




