// FUN_001ec0b4 @0x1ec0b4


void FUN_001ec0b4(void)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ulong uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

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

  long lVar9;

  undefined8 uVar10;

  long lVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

  long local_390;

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

  

  uVar2 = DAT_003eaa78;

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  DAT_003eaa78 = 0;

  _objc_release(uVar2);

  uVar2 = DAT_003eaa88;

  DAT_003eaa98 = 0;

  DAT_003eaa88 = 0;

  _objc_release(uVar2);

  FUN_0020c558(0);

  if (DAT_003eaf08 != -1) {

    thunk_FUN_00223ad4();

  }

  _os_unfair_lock_lock(&DAT_003ead54);

  FUN_00291620(DAT_003eaa70);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _os_unfair_lock_unlock(&DAT_003ead54);

  uStack_288 = 0;

  local_290 = 0;

  uStack_278 = 0;

  uStack_280 = 0;

  lStack_2a8 = 0;

  local_2b0 = 0;

  uStack_298 = 0;

  local_2a0 = (long *)0x0;

  _objc_retain(uVar2);

  auVar13 = FUN_00293880(uVar2,extraout_x1,&local_2b0,auStack_f0,0x10);

  if (auVar13._0_8_ != 0) {

    lVar9 = *local_2a0;

    do {

      uVar8 = auVar13._8_8_;

      local_390 = auVar13._0_8_;

      local_378 = 0;

      do {

        if (*local_2a0 != lVar9) {

          _objc_enumerationMutation(uVar2);

          uVar8 = extraout_x1_00;

        }

        uVar3 = *(undefined8 *)(lStack_2a8 + local_378 * 8);

        FUN_002a6080(uVar3,uVar8,&cf_m_tableView);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar8 = auVar13._8_8_;

        if (auVar13._0_8_ != 0) {

          uStack_2c8 = 0;

          local_2d0 = 0;

          uStack_2b8 = 0;

          uStack_2c0 = 0;

          lStack_2e8 = 0;

          local_2f0 = 0;

          uStack_2d8 = 0;

          local_2e0 = (long *)0x0;

          FUN_002a62e0();

          auVar14 = _objc_retainAutoreleasedReturnValue();

          uVar8 = auVar14._0_8_;

          lVar4 = FUN_00293880(uVar8,auVar14._8_8_,&local_2f0,auStack_170,0x10);

          if (lVar4 != 0) {

            lVar12 = *local_2e0;

            do {

              lVar11 = 0;

              do {

                if (*local_2e0 != lVar12) {

                  _objc_enumerationMutation(uVar8);

                }

                uVar10 = *(undefined8 *)(lStack_2e8 + lVar11 * 8);

                FUN_0029b9c0(uVar10);

                auVar14 = _objc_retainAutoreleasedReturnValue();

                uVar5 = FUN_00297820(auVar14._0_8_,auVar14._8_8_,&cf_XZYCLGDividerCell);

                _objc_release(auVar14._0_8_);

                uVar6 = extraout_x1_01;

                if ((uVar5 & 1) != 0) {

                  _objc_getAssociatedObject(uVar10,&DAT_003eaabc);

                  uVar6 = _objc_retainAutoreleasedReturnValue();

                  uVar5 = _objc_opt_respondsToSelector(uVar6,"refreshThemeStyle");

                  if ((uVar5 & 1) != 0) {

                    FUN_0029afe0(uVar6);

                  }

                  _objc_getAssociatedObject(uVar10,&DAT_003eaab0);

                  lVar7 = _objc_retainAutoreleasedReturnValue();

                  if ((lVar7 != 0) && (iVar1 = FUN_00297760(lVar7), iVar1 != 0)) {

                    FUN_0020cd60(uVar10,lVar7);

                    FUN_00293640(uVar10);

                    uVar10 = _objc_retainAutoreleasedReturnValue();

                    FUN_0029ff40();

                    _objc_release(uVar10);

                  }

                  _objc_release(lVar7);

                  _objc_release(uVar6);

                  uVar6 = extraout_x1_02;

                }

                lVar11 = lVar11 + 1;

              } while (lVar4 != lVar11);

              lVar4 = FUN_00293880(uVar8,uVar6,&local_2f0,auStack_170,0x10);

            } while (lVar4 != 0);

          }

          _objc_release(uVar8);

          _objc_getAssociatedObject(uVar3,&DAT_003eae53);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          lVar4 = auVar14._0_8_;

          if (lVar4 != 0) {

            FUN_002a6080(lVar4,auVar14._8_8_,&cf_orderedButtons);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            uStack_308 = 0;

            local_310 = 0;

            uStack_2f8 = 0;

            uStack_300 = 0;

            lStack_328 = 0;

            local_330 = 0;

            uStack_318 = 0;

            local_320 = (long *)0x0;

            _objc_retain();

            auVar14 = FUN_00293880(uVar8,extraout_x1_03,&local_330,auStack_1f0,0x10);

            if (auVar14._0_8_ != 0) {

              lVar12 = *local_320;

              do {

                uVar6 = auVar14._8_8_;

                lVar11 = 0;

                do {

                  if (*local_320 != lVar12) {

                    _objc_enumerationMutation(uVar8);

                    uVar6 = extraout_x1_04;

                  }

                  FUN_002a6080(*(undefined8 *)(lStack_328 + lVar11 * 8),uVar6,&cf_badge);

                  uVar6 = _objc_retainAutoreleasedReturnValue();

                  auVar15 = _objc_opt_respondsToSelector(uVar6,"refreshThemeStyle");

                  if ((auVar15._0_8_ & 1) != 0) {

                    FUN_00299c80(uVar6,auVar15._8_8_,"refreshThemeStyle");

                  }

                  _objc_release(uVar6);

                  lVar11 = lVar11 + 1;

                  uVar6 = extraout_x1_05;

                } while (auVar14._0_8_ != lVar11);

                auVar14 = FUN_00293880(uVar8,extraout_x1_05,&local_330,auStack_1f0,0x10);

              } while (auVar14._0_8_ != 0);

            }

            _objc_release(uVar8);

            _objc_release(uVar8);

          }

          _objc_getAssociatedObject(uVar3,&DAT_003ead83);

          auVar14 = _objc_retainAutoreleasedReturnValue();

          lVar12 = auVar14._0_8_;

          if (lVar12 != 0) {

            FUN_002a6080(lVar12,auVar14._8_8_,&cf_orderedButtons);

            uVar8 = _objc_retainAutoreleasedReturnValue();

            uStack_348 = 0;

            local_350 = 0;

            uStack_338 = 0;

            uStack_340 = 0;

            lStack_368 = 0;

            local_370 = 0;

            uStack_358 = 0;

            local_360 = (long *)0x0;

            _objc_retain();

            auVar14 = FUN_00293880(uVar8,extraout_x1_06,&local_370,auStack_270,0x10);

            if (auVar14._0_8_ != 0) {

              lVar11 = *local_360;

              do {

                uVar6 = auVar14._8_8_;

                lVar7 = 0;

                do {

                  if (*local_360 != lVar11) {

                    _objc_enumerationMutation(uVar8);

                    uVar6 = extraout_x1_07;

                  }

                  FUN_002a6080(*(undefined8 *)(lStack_368 + lVar7 * 8),uVar6,&cf_badge);

                  uVar6 = _objc_retainAutoreleasedReturnValue();

                  auVar15 = _objc_opt_respondsToSelector(uVar6,"refreshThemeStyle");

                  if ((auVar15._0_8_ & 1) != 0) {

                    FUN_00299c80(uVar6,auVar15._8_8_,"refreshThemeStyle");

                  }

                  _objc_release(uVar6);

                  lVar7 = lVar7 + 1;

                  uVar6 = extraout_x1_08;

                } while (auVar14._0_8_ != lVar7);

                auVar14 = FUN_00293880(uVar8,extraout_x1_08,&local_370,auStack_270,0x10);

              } while (auVar14._0_8_ != 0);

            }

            _objc_release(uVar8);

            _objc_release(uVar8);

          }

          FUN_0020b734(uVar3,1);

          _objc_release(lVar12);

          _objc_release(lVar4);

          _objc_release(auVar13._0_8_);

          uVar8 = extraout_x1_09;

        }

        local_378 = local_378 + 1;

      } while (local_378 != local_390);

      auVar13 = FUN_00293880(uVar2,uVar8,&local_2b0,auStack_f0,0x10);

    } while (auVar13._0_8_ != 0);

  }

  _objc_release(uVar2);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




