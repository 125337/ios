// FUN_0022ef28 @0x22ef28


void FUN_0022ef28(void)



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

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  double dVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined8 local_380;

  long lStack_378;

  long *local_370;

  undefined8 uStack_368;

  undefined8 local_360;

  undefined8 uStack_358;

  undefined8 uStack_350;

  undefined8 uStack_348;

  undefined8 local_340;

  long lStack_338;

  long *local_330;

  undefined8 uStack_328;

  undefined8 local_320;

  undefined8 uStack_318;

  undefined8 uStack_310;

  undefined8 uStack_308;

  undefined8 local_300;

  long lStack_2f8;

  long *local_2f0;

  undefined8 uStack_2e8;

  undefined8 local_2e0;

  undefined8 uStack_2d8;

  undefined8 uStack_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  long lStack_2b8;

  long *local_2b0;

  undefined8 uStack_2a8;

  undefined8 local_2a0;

  undefined8 uStack_298;

  undefined8 uStack_290;

  undefined8 uStack_288;

  undefined1 auStack_280 [128];

  undefined1 auStack_200 [128];

  undefined1 auStack_180 [128];

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  if (DAT_003eb0e9 != '\x01') goto LAB_0022f63c;

  DAT_003eb130 = _CACurrentMediaTime();

  FUN_002a2e60(&_OBJC_CLASS___UIApplication);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lStack_2b8 = 0;

  local_2c0 = 0;

  uStack_2a8 = 0;

  local_2b0 = (long *)0x0;

  uStack_298 = 0;

  local_2a0 = 0;

  uStack_288 = 0;

  uStack_290 = 0;

  FUN_00293440();

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar17._0_8_;

  lVar4 = FUN_00293880(uVar7,auVar17._8_8_,&local_2c0,auStack_100,0x10);

  if (lVar4 != 0) {

    lVar11 = *local_2b0;

    do {

      lVar12 = 0;

      do {

        if (*local_2b0 != lVar11) {

          _objc_enumerationMutation(uVar7);

        }

        lVar10 = *(long *)(lStack_2b8 + lVar12 * 8);

        uVar5 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar17 = _objc_opt_isKindOfClass(lVar10,uVar5);

        uVar5 = auVar17._8_8_;

        if ((auVar17._0_8_ & 1) != 0) {

          _objc_retain(lVar10);

          lVar6 = FUN_00290f40(lVar10);

          if (lVar6 == 0) {

            _objc_release(uVar7);

            if (lVar10 == 0) goto LAB_0022f068;

            goto LAB_0022f140;

          }

          _objc_release(lVar10);

          uVar5 = extraout_x1;

        }

        lVar12 = lVar12 + 1;

      } while (lVar4 != lVar12);

      lVar4 = FUN_00293880(uVar7,uVar5,&local_2c0,auStack_100,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar7);

LAB_0022f068:

  uStack_2d8 = 0;

  local_2e0 = 0;

  uStack_2c8 = 0;

  uStack_2d0 = 0;

  lStack_2f8 = 0;

  local_300 = 0;

  uStack_2e8 = 0;

  local_2f0 = (long *)0x0;

  FUN_00293440(uVar3);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  lVar4 = auVar17._0_8_;

  lVar11 = FUN_00293880(lVar4,auVar17._8_8_,&local_300,auStack_180,0x10);

  if (lVar11 != 0) {

    lVar12 = *local_2f0;

    do {

      lVar6 = 0;

      do {

        if (*local_2f0 != lVar12) {

          _objc_enumerationMutation(lVar4);

        }

        lVar10 = *(long *)(lStack_2f8 + lVar6 * 8);

        uVar7 = _objc_opt_class(&_OBJC_CLASS___UIWindowScene);

        auVar17 = _objc_opt_isKindOfClass(lVar10,uVar7);

        uVar7 = auVar17._8_8_;

        if ((auVar17._0_8_ & 1) != 0) {

          _objc_retain(lVar10);

          lVar8 = FUN_00290f40(lVar10);

          if (lVar8 == 1) {

            _objc_release(lVar4);

            if (lVar10 != 0) goto LAB_0022f140;

            goto LAB_0022f274;

          }

          _objc_release(lVar10);

          uVar7 = extraout_x1_00;

        }

        lVar6 = lVar6 + 1;

      } while (lVar11 != lVar6);

      lVar11 = FUN_00293880(lVar4,uVar7,&local_300,auStack_180,0x10);

    } while (lVar11 != 0);

  }

LAB_0022f26c:

  _objc_release(lVar4);

LAB_0022f274:

  uVar9 = _objc_opt_respondsToSelector(uVar3,"windows");

  if ((uVar9 & 1) == 0) {

    _objc_release(uVar3);

    lVar11 = 0;

  }

  else {

    _objc_msgSend(uVar3,"windows");

    lVar4 = _objc_retainAutoreleasedReturnValue();

    uStack_358 = 0;

    local_360 = 0;

    uStack_348 = 0;

    uStack_350 = 0;

    lStack_378 = 0;

    local_380 = 0;

    uStack_368 = 0;

    local_370 = (long *)0x0;

    _objc_retain();

    lVar12 = FUN_00293880(lVar4,extraout_x1_03,&local_380,auStack_280,0x10);

    if (lVar12 == 0) {

      lVar11 = 0;

      lVar10 = lVar4;

LAB_0022f408:

      _objc_release(lVar10);

    }

    else {

      lVar10 = 0;

      lVar6 = 0;

      lVar8 = *local_370;

      dVar16 = *(double *)PTR__UIWindowLevelNormal_003884d8;

      do {

        lVar14 = 0;

        do {

          if (*local_370 != lVar8) {

            _objc_enumerationMutation(lVar4);

          }

          lVar11 = *(long *)(lStack_378 + lVar14 * 8);

          auVar17 = FUN_002978a0(lVar11);

          uVar7 = auVar17._8_8_;

          if ((auVar17._0_8_ & 1) == 0) {

            if (lVar6 == 0) {

              _objc_retain(lVar11);

              lVar6 = lVar11;

            }

            dVar15 = (double)FUN_002a6540(lVar11);

            if (dVar15 == dVar16 && lVar10 == 0) {

              _objc_retain(lVar11);

              lVar10 = lVar11;

            }

            auVar17 = FUN_00297900(lVar11);

            uVar7 = auVar17._8_8_;

            if ((auVar17._0_8_ & 1) != 0) {

              _objc_retain(lVar11);

              _objc_release(lVar4);

              goto LAB_0022f3bc;

            }

          }

          lVar14 = lVar14 + 1;

        } while (lVar12 != lVar14);

        lVar12 = FUN_00293880(lVar4,uVar7,&local_380,auStack_280,0x10);

      } while (lVar12 != 0);

      _objc_release(lVar4);

      if (lVar10 != 0) {

        _objc_retain(lVar10);

        lVar11 = lVar10;

LAB_0022f3bc:

        _objc_release(lVar6);

        goto LAB_0022f408;

      }

      if (lVar6 != 0) {

        _objc_retain(lVar6);

        lVar10 = 0;

        lVar11 = lVar6;

        goto LAB_0022f3bc;

      }

      lVar11 = 0;

    }

    _objc_release(lVar4);

    _objc_release(uVar3);

    if (lVar11 != 0) goto LAB_0022f424;

  }

  goto LAB_0022f634;

LAB_0022f140:

  uStack_318 = 0;

  local_320 = 0;

  uStack_308 = 0;

  uStack_310 = 0;

  lStack_338 = 0;

  local_340 = 0;

  uStack_328 = 0;

  local_330 = (long *)0x0;

  FUN_002a6560(lVar10);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar17._0_8_;

  lVar4 = FUN_00293880(uVar7,auVar17._8_8_,&local_340,auStack_200,0x10);

  if (lVar4 == 0) {

    _objc_release(uVar7);

    lVar4 = lVar10;

    goto LAB_0022f26c;

  }

  lVar12 = 0;

  lVar6 = 0;

  lVar11 = 0;

  lVar8 = *local_330;

  dVar16 = *(double *)PTR__UIWindowLevelNormal_003884d8;

  do {

    lVar14 = 0;

    do {

      if (*local_330 != lVar8) {

        _objc_enumerationMutation(uVar7);

      }

      lVar13 = *(long *)(lStack_338 + lVar14 * 8);

      auVar17 = FUN_002978a0(lVar13);

      uVar5 = auVar17._8_8_;

      if ((auVar17._0_8_ & 1) == 0) {

        if (lVar11 == 0) {

          _objc_retain(lVar13);

          lVar11 = lVar13;

        }

        dVar15 = (double)FUN_002a6540(lVar13);

        if (dVar15 == dVar16 && lVar6 == 0) {

          _objc_retain(lVar13);

          lVar6 = lVar13;

        }

        iVar2 = FUN_00297900(lVar13);

        uVar5 = extraout_x1_01;

        if (iVar2 != 0) {

          _objc_retain(lVar13);

          _objc_release(lVar12);

          uVar5 = extraout_x1_02;

          lVar12 = lVar13;

        }

      }

      lVar14 = lVar14 + 1;

    } while (lVar4 != lVar14);

    lVar4 = FUN_00293880(uVar7,uVar5,&local_340,auStack_200,0x10);

  } while (lVar4 != 0);

  _objc_release(uVar7);

  if (lVar12 == 0) {

    if (lVar6 != 0) {

      _objc_retain(lVar6);

      lVar4 = lVar11;

      lVar11 = lVar6;

      goto LAB_0022f3d8;

    }

    _objc_release(lVar10);

    if (lVar11 != 0) goto LAB_0022f3f4;

    goto LAB_0022f274;

  }

  _objc_retain(lVar12);

  _objc_release(lVar11);

  lVar4 = lVar6;

  lVar11 = lVar12;

LAB_0022f3d8:

  _objc_release(lVar4);

  _objc_release(lVar11);

  _objc_release(lVar10);

LAB_0022f3f4:

  _objc_release(uVar3);

LAB_0022f424:

  if (DAT_003eb0c8 != 0) {

    FUN_002a6520();

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == lVar11) {

      FUN_002925e0(lVar11);

      _objc_retain(lVar11);

      lVar4 = DAT_003eb0c0;

      DAT_003eb0c0 = lVar11;

      _objc_release(lVar4);

      FUN_00230a74();

      goto LAB_0022f634;

    }

    if (DAT_003eb0c8 != 0) {

      FUN_0029b340(DAT_003eb0c8);

    }

  }

  _objc_alloc(&objc::class_t::XZYHighRefreshFPSView);

  puVar1 = PTR__CGRectZero_00388bf0;

  lVar12 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(lVar12,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  FUN_00297e40(lVar12);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2860(0x40c3880000000000);

  _objc_release(uVar3);

  FUN_002a23c0(lVar12,extraout_x1_04,0);

  FUN_00291380(lVar11,extraout_x1_05,lVar12);

  FUN_002925e0(lVar11,extraout_x1_06,lVar12);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar17 = FUN_00296b80(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),

                         *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));

  uVar7 = auVar17._0_8_;

  FUN_002a1d60(uVar7,auVar17._8_8_,&cf___FPS);

  FUN_002a1d80(uVar7,extraout_x1_07,1);

  FUN_002a64a0(&_OBJC_CLASS___UIColor);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar7,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  FUN_00298ea0(0x4022000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

               &_OBJC_CLASS___UIFont);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar7,auVar17._8_8_,auVar17._0_8_);

  _objc_release(auVar17._0_8_);

  FUN_002a23c0(uVar7,extraout_x1_08,0);

  FUN_00291380(lVar12,extraout_x1_09,uVar7);

  _objc_retain(lVar12);

  lVar4 = DAT_003eb0c8;

  DAT_003eb0c8 = lVar12;

  _objc_release(lVar4);

  _objc_retain(uVar7);

  uVar3 = DAT_003eb0d0;

  DAT_003eb0d0 = uVar7;

  _objc_release(uVar3);

  _objc_retain(lVar11);

  lVar4 = DAT_003eb0c0;

  DAT_003eb0c0 = lVar11;

  _objc_release(lVar4);

  DAT_003e7248 = 0xffffffffffffffff;

  FUN_00230a74();

  _objc_release(uVar7);

  _objc_release(lVar12);

LAB_0022f634:

  _objc_release(lVar11);

LAB_0022f63c:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




