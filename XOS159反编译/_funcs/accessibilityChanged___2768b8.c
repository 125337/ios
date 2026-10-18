// accessibilityChanged: @0x2768b8


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockLiquidContainer::accessibilityChanged_(ID param_1,SEL param_2,ID param_3)



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

  long lVar9;

  long lVar10;

  undefined1 auVar11 [16];

  undefined8 local_550;

  long lStack_548;

  long *local_540;

  undefined8 uStack_538;

  undefined8 local_530;

  undefined8 uStack_528;

  undefined8 uStack_520;

  undefined8 uStack_518;

  undefined8 local_510;

  long lStack_508;

  long *local_500;

  undefined8 uStack_4f8;

  undefined8 local_4f0;

  undefined8 uStack_4e8;

  undefined8 uStack_4e0;

  undefined8 uStack_4d8;

  undefined8 local_4d0;

  long lStack_4c8;

  long *local_4c0;

  undefined8 uStack_4b8;

  undefined8 local_4b0;

  undefined8 uStack_4a8;

  undefined8 uStack_4a0;

  undefined8 uStack_498;

  undefined8 local_490;

  long lStack_488;

  long *local_480;

  undefined8 uStack_478;

  undefined8 local_470;

  undefined8 uStack_468;

  undefined8 uStack_460;

  undefined8 uStack_458;

  undefined8 local_450;

  long lStack_448;

  long *local_440;

  undefined8 uStack_438;

  undefined8 local_430;

  undefined8 uStack_428;

  undefined8 uStack_420;

  undefined8 uStack_418;

  undefined8 local_410;

  long lStack_408;

  long *local_400;

  undefined8 uStack_3f8;

  undefined8 local_3f0;

  undefined8 uStack_3e8;

  undefined8 uStack_3e0;

  undefined8 uStack_3d8;

  undefined1 auStack_3c8 [128];

  undefined8 local_348;

  undefined8 local_340;

  undefined8 local_338;

  undefined8 local_330;

  undefined1 auStack_328 [128];

  undefined8 local_2a8;

  undefined8 local_2a0;

  undefined8 local_298;

  undefined8 local_290;

  undefined8 local_288;

  undefined8 local_280;

  undefined1 auStack_278 [128];

  undefined1 auStack_1f8 [128];

  undefined1 auStack_178 [128];

  undefined1 auStack_f8 [128];

  long local_78;

  

  local_78 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002928c0();

  FUN_00291ae0(param_1);

  iVar1 = _UIAccessibilityIsReduceMotionEnabled();

  if (iVar1 != 0) {

    FUN_002a5120(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c3c0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00292ae0();

    FUN_0029b800(uVar2);

    _objc_release(uVar3);

    _objc_release(uVar2);

    uStack_3e8 = 0;

    local_3f0 = 0;

    uStack_3d8 = 0;

    uStack_3e0 = 0;

    lStack_408 = 0;

    local_410 = 0;

    uStack_3f8 = 0;

    local_400 = (long *)0x0;

    FUN_002a4d60(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar11._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_410,auStack_f8,0x10);

    if (lVar4 != 0) {

      lVar9 = *local_400;

      do {

        lVar10 = 0;

        do {

          if (*local_400 != lVar9) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_0029b840(*(undefined8 *)(lStack_408 + lVar10 * 8));

          lVar10 = lVar10 + 1;

        } while (lVar4 != lVar10);

        lVar4 = FUN_00293880(uVar2,extraout_x1,&local_410,auStack_f8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    uStack_428 = 0;

    local_430 = 0;

    uStack_418 = 0;

    uStack_420 = 0;

    lStack_448 = 0;

    local_450 = 0;

    uStack_438 = 0;

    local_440 = (long *)0x0;

    FUN_00298b80(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar11._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_450,auStack_178,0x10);

    if (lVar4 != 0) {

      lVar9 = *local_440;

      do {

        lVar10 = 0;

        do {

          if (*local_440 != lVar9) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_0029b840(*(undefined8 *)(lStack_448 + lVar10 * 8));

          lVar10 = lVar10 + 1;

        } while (lVar4 != lVar10);

        lVar4 = FUN_00293880(uVar2,extraout_x1_00,&local_450,auStack_178,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    uStack_468 = 0;

    local_470 = 0;

    uStack_458 = 0;

    uStack_460 = 0;

    lStack_488 = 0;

    local_490 = 0;

    uStack_478 = 0;

    local_480 = (long *)0x0;

    FUN_00298c00(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a62e0();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar2);

    lVar4 = FUN_00293880(uVar3,extraout_x1_01,&local_490,auStack_1f8,0x10);

    if (lVar4 != 0) {

      lVar9 = *local_480;

      do {

        lVar10 = 0;

        do {

          if (*local_480 != lVar9) {

            _objc_enumerationMutation(uVar3);

          }

          FUN_0029bb00(*(undefined8 *)(lStack_488 + lVar10 * 8));

          uVar2 = _objc_retainAutoreleasedReturnValue();

          FUN_0029b840();

          _objc_release(uVar2);

          lVar10 = lVar10 + 1;

        } while (lVar4 != lVar10);

        lVar4 = FUN_00293880(uVar3,extraout_x1_02,&local_490,auStack_1f8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar3);

    uStack_4a8 = 0;

    local_4b0 = 0;

    uStack_498 = 0;

    uStack_4a0 = 0;

    lStack_4c8 = 0;

    local_4d0 = 0;

    uStack_4b8 = 0;

    local_4c0 = (long *)0x0;

    FUN_00299ee0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_2a8 = uVar2;

    FUN_0029a6c0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_2a0 = uVar3;

    FUN_00299ec0(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_298 = uVar5;

    FUN_00299200(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    local_290 = uVar6;

    FUN_0029a960(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    local_288 = uVar7;

    FUN_00290e40(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    local_280 = auVar11._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_2a8,6);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar11._0_8_);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar3);

    _objc_release(uVar2);

    lVar4 = FUN_00293880(uVar8,extraout_x1_03,&local_4d0,auStack_278,0x10);

    if (lVar4 != 0) {

      lVar9 = *local_4c0;

      do {

        lVar10 = 0;

        do {

          if (*local_4c0 != lVar9) {

            _objc_enumerationMutation(uVar8);

          }

          FUN_0029b840(*(undefined8 *)(lStack_4c8 + lVar10 * 8));

          lVar10 = lVar10 + 1;

        } while (lVar4 != lVar10);

        lVar4 = FUN_00293880(uVar8,extraout_x1_04,&local_4d0,auStack_278,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar8);

    uStack_4e8 = 0;

    local_4f0 = 0;

    uStack_4d8 = 0;

    uStack_4e0 = 0;

    lStack_508 = 0;

    local_510 = 0;

    uStack_4f8 = 0;

    local_500 = (long *)0x0;

    FUN_00299100(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_348 = uVar2;

    FUN_0029c3c0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_340 = uVar3;

    FUN_00299f00(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_338 = uVar5;

    FUN_0029a980(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    local_330 = auVar11._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar11._8_8_,&local_348,4);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar11._0_8_);

    _objc_release(uVar5);

    _objc_release(uVar3);

    _objc_release(uVar2);

    auVar11 = FUN_00293880(uVar6,extraout_x1_05,&local_510,auStack_328,0x10);

    if (auVar11._0_8_ != 0) {

      lVar4 = *local_500;

      uVar2 = *(undefined8 *)PTR__CGPointZero_00388b38;

      uVar3 = *(undefined8 *)(PTR__CGPointZero_00388b38 + 8);

      do {

        uVar5 = auVar11._8_8_;

        lVar9 = 0;

        do {

          if (*local_500 != lVar4) {

            _objc_enumerationMutation(uVar6);

            uVar5 = extraout_x1_06;

          }

          FUN_002a0960(uVar2,uVar3,*(undefined8 *)(lStack_508 + lVar9 * 8),uVar5,0,0);

          lVar9 = lVar9 + 1;

          uVar5 = extraout_x1_07;

        } while (auVar11._0_8_ != lVar9);

        auVar11 = FUN_00293880(uVar6,extraout_x1_07,&local_510,auStack_328,0x10);

      } while (auVar11._0_8_ != 0);

    }

    _objc_release(uVar6);

    FUN_00271c80(param_1);

    FUN_002999c0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00271c80();

    _objc_release(uVar2);

    FUN_002a5a80(param_1,extraout_x1_08,0);

    uStack_528 = 0;

    local_530 = 0;

    uStack_518 = 0;

    uStack_520 = 0;

    lStack_548 = 0;

    local_550 = 0;

    uStack_538 = 0;

    local_540 = (long *)0x0;

    FUN_00292e80(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar11._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_550,auStack_3c8,0x10);

    if (lVar4 != 0) {

      lVar9 = *local_540;

      do {

        lVar10 = 0;

        do {

          if (*local_540 != lVar9) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_0029b340(*(undefined8 *)(lStack_548 + lVar10 * 8));

          lVar10 = lVar10 + 1;

        } while (lVar4 != lVar10);

        lVar4 = FUN_00293880(uVar2,extraout_x1_09,&local_550,auStack_3c8,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    FUN_00292e80(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b240();

    _objc_release(uVar2);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_78) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




