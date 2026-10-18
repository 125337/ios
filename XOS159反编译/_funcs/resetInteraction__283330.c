// resetInteraction @0x283330


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::resetInteraction(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

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

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

  undefined8 local_3d0;

  long lStack_3c8;

  long *local_3c0;

  undefined8 uStack_3b8;

  undefined8 local_3b0;

  undefined8 uStack_3a8;

  undefined8 uStack_3a0;

  undefined8 uStack_398;

  undefined8 local_390;

  long lStack_388;

  long *local_380;

  undefined8 uStack_378;

  undefined8 local_370;

  undefined8 uStack_368;

  undefined8 uStack_360;

  undefined8 uStack_358;

  undefined8 local_350;

  long lStack_348;

  long *local_340;

  undefined8 uStack_338;

  undefined8 local_330;

  undefined8 uStack_328;

  undefined8 uStack_320;

  undefined8 uStack_318;

  undefined8 local_310;

  long lStack_308;

  long *local_300;

  undefined8 uStack_2f8;

  undefined8 local_2f0;

  undefined8 uStack_2e8;

  undefined8 uStack_2e0;

  undefined8 uStack_2d8;

  undefined8 local_2c8;

  undefined8 local_2c0;

  undefined8 local_2b8;

  undefined8 local_2b0;

  undefined1 auStack_2a8 [128];

  undefined8 local_228;

  undefined8 local_220;

  undefined8 local_218;

  undefined8 local_210;

  undefined8 local_208;

  undefined8 local_200;

  undefined1 auStack_1f8 [128];

  undefined1 auStack_178 [128];

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  iVar1 = FUN_002a5580();

  if (iVar1 != 0) {

    auVar11 = FUN_002a5620(param_1);

    FUN_002a0840(param_1,auVar11._8_8_,auVar11._0_8_);

  }

  FUN_002928c0(param_1);

  FUN_002a5120(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029c3c0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00292ae0();

  FUN_0029b800(uVar2);

  _objc_release(uVar3);

  _objc_release(uVar2);

  auVar11 = FUN_00290ec0(param_1);

  FUN_0029c860(param_1,auVar11._8_8_,auVar11._0_8_ + 1);

  FUN_002a12a0(param_1,extraout_x1,0);

  FUN_0029ff00(param_1,extraout_x1_00,0);

  FUN_002a1300(param_1,extraout_x1_01,0);

  FUN_002a1380(param_1,extraout_x1_02,0);

  FUN_0029c520(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e0c0(auVar11._0_8_,auVar11._8_8_,0);

  _objc_release(auVar11._0_8_);

  FUN_0029c520(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e0c0(auVar11._0_8_,auVar11._8_8_,1);

  _objc_release(auVar11._0_8_);

  FUN_002a2100(param_1,extraout_x1_03,0);

  FUN_002a2140(param_1,extraout_x1_04,0);

  FUN_002a0a40(param_1,extraout_x1_05,0xffffffffffffffff);

  FUN_002a0c80(0,param_1);

  FUN_002946e0(param_1,extraout_x1_06,0);

  uStack_2e8 = 0;

  local_2f0 = 0;

  uStack_2d8 = 0;

  uStack_2e0 = 0;

  lStack_308 = 0;

  local_310 = 0;

  uStack_2f8 = 0;

  local_300 = (long *)0x0;

  FUN_00292e80(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar11._0_8_;

  lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_310,auStack_f8,0x10);

  if (lVar4 != 0) {

    lVar9 = *local_300;

    do {

      lVar10 = 0;

      do {

        if (*local_300 != lVar9) {

          _objc_enumerationMutation(uVar2);

        }

        FUN_0029b340(*(undefined8 *)(lStack_308 + lVar10 * 8));

        lVar10 = lVar10 + 1;

      } while (lVar4 != lVar10);

      lVar4 = FUN_00293880(uVar2,extraout_x1_07,&local_310,auStack_f8,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar2);

  FUN_00292e80(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b240();

  _objc_release(uVar2);

  uStack_328 = 0;

  local_330 = 0;

  uStack_318 = 0;

  uStack_320 = 0;

  lStack_348 = 0;

  local_350 = 0;

  uStack_338 = 0;

  local_340 = (long *)0x0;

  FUN_002a4d60(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar11._0_8_;

  lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_350,auStack_178,0x10);

  if (lVar4 != 0) {

    lVar9 = *local_340;

    do {

      lVar10 = 0;

      do {

        if (*local_340 != lVar9) {

          _objc_enumerationMutation(uVar2);

        }

        FUN_0029b840(*(undefined8 *)(lStack_348 + lVar10 * 8));

        lVar10 = lVar10 + 1;

      } while (lVar4 != lVar10);

      lVar4 = FUN_00293880(uVar2,extraout_x1_08,&local_350,auStack_178,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar2);

  uStack_368 = 0;

  local_370 = 0;

  uStack_358 = 0;

  uStack_360 = 0;

  lStack_388 = 0;

  local_390 = 0;

  uStack_378 = 0;

  local_380 = (long *)0x0;

  FUN_00299ee0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_228 = uVar2;

  FUN_0029a6c0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_220 = uVar3;

  FUN_00299ec0(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_218 = uVar5;

  FUN_00299200(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_210 = uVar6;

  FUN_0029a960(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_208 = uVar7;

  FUN_00290e40(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  local_200 = auVar11._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_228,6);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  lVar4 = FUN_00293880(uVar8,extraout_x1_09,&local_390,auStack_1f8,0x10);

  if (lVar4 != 0) {

    lVar9 = *local_380;

    do {

      lVar10 = 0;

      do {

        if (*local_380 != lVar9) {

          _objc_enumerationMutation(uVar8);

        }

        FUN_0029b840(*(undefined8 *)(lStack_388 + lVar10 * 8));

        lVar10 = lVar10 + 1;

      } while (lVar4 != lVar10);

      lVar4 = FUN_00293880(uVar8,extraout_x1_10,&local_390,auStack_1f8,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar8);

  uStack_3a8 = 0;

  local_3b0 = 0;

  uStack_398 = 0;

  uStack_3a0 = 0;

  lStack_3c8 = 0;

  local_3d0 = 0;

  uStack_3b8 = 0;

  local_3c0 = (long *)0x0;

  FUN_00299100(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_2c8 = uVar2;

  FUN_0029c3c0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_2c0 = uVar3;

  FUN_00299f00(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_2b8 = uVar5;

  FUN_0029a980(param_1);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  local_2b0 = auVar11._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_2c8,4);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar11._0_8_);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  auVar11 = FUN_00293880(uVar6,extraout_x1_11,&local_3d0,auStack_2a8,0x10);

  if (auVar11._0_8_ != 0) {

    lVar4 = *local_3c0;

    uVar2 = *(undefined8 *)PTR__CGPointZero_00388b38;

    uVar3 = *(undefined8 *)(PTR__CGPointZero_00388b38 + 8);

    do {

      uVar5 = auVar11._8_8_;

      lVar9 = 0;

      do {

        if (*local_3c0 != lVar4) {

          _objc_enumerationMutation(uVar6);

          uVar5 = extraout_x1_12;

        }

        FUN_002a0960(uVar2,uVar3,*(undefined8 *)(lStack_3c8 + lVar9 * 8),uVar5,0,0);

        lVar9 = lVar9 + 1;

        uVar5 = extraout_x1_13;

      } while (auVar11._0_8_ != lVar9);

      auVar11 = FUN_00293880(uVar6,extraout_x1_13,&local_3d0,auStack_2a8,0x10);

    } while (auVar11._0_8_ != 0);

  }

  _objc_release(uVar6);

  FUN_00271c80(param_1);

  FUN_00297ea0(param_1,extraout_x1_14,0);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




