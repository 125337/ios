// finishThumbDrag: @0x1df4c0


/* Function Stack Size: 0x14 bytes */



void XZYCLGHorizontalBarView::finishThumbDrag_(ID param_1,SEL param_2,bool param_3)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar6;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_e8 [128];

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  iVar1 = FUN_002a5140();

  if (iVar1 == 0) goto LAB_001df6e8;

  FUN_002a1e00(param_1,extraout_x1,0);

  FUN_002a4340(param_1);

  FUN_0029bee0(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0f80(auVar10._0_8_,auVar10._8_8_,1);

  _objc_release(auVar10._0_8_);

  FUN_0029d2a0(param_1,extraout_x1_00,1);

  FUN_0029c260(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  lVar2 = auVar10._0_8_;

  if ((param_3 & 1) == 0) {

    FUN_00296300(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    lVar7 = auVar11._0_8_;

    if ((lVar7 == 0) || (lVar7 == lVar2)) goto LAB_001df560;

    FUN_002962e0(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      FUN_00295de0(lVar7);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_001d393c(lVar3,uVar4);

      _objc_release(uVar4);

    }

    uStack_108 = 0;

    local_110 = 0;

    uStack_f8 = 0;

    uStack_100 = 0;

    lStack_128 = 0;

    local_130 = 0;

    uStack_118 = 0;

    local_120 = (long *)0x0;

    FUN_00299900(param_1);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar10._0_8_;

    auVar10 = FUN_00293880(uVar4,auVar10._8_8_,&local_130,auStack_e8,0x10);

    if (auVar10._0_8_ != 0) {

      lVar8 = *local_120;

      do {

        uVar6 = auVar10._8_8_;

        lVar9 = 0;

        do {

          if (*local_120 != lVar8) {

            _objc_enumerationMutation(uVar4);

            uVar6 = extraout_x1_01;

          }

          lVar5 = *(long *)(lStack_128 + lVar9 * 8);

          FUN_002a25e0(lVar5,uVar6,lVar5 == lVar7);

          lVar9 = lVar9 + 1;

          uVar6 = extraout_x1_02;

        } while (auVar10._0_8_ != lVar9);

        auVar10 = FUN_00293880(uVar4,extraout_x1_02,&local_130,auStack_e8,0x10);

      } while (auVar10._0_8_ != 0);

    }

    _objc_release(uVar4);

    FUN_00295de0(lVar7);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f300(param_1,auVar10._8_8_,auVar10._0_8_);

    _objc_release(auVar10._0_8_);

    FUN_0029b620(param_1,extraout_x1_03,lVar7);

    FUN_00295de0(lVar7);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_001d39c0(lVar3,uVar4);

    _objc_release(uVar4);

    _objc_release(lVar3);

  }

  else {

    auVar11._8_8_ = 0;

    auVar11._0_8_ = auVar10._8_8_;

    auVar11 = auVar11 << 0x40;

LAB_001df560:

    lVar7 = auVar11._0_8_;

    lVar3 = lVar7;

    if (lVar2 != 0) {

      lVar3 = lVar2;

    }

    FUN_0029b620(param_1,auVar11._8_8_,lVar3);

  }

  _objc_release(lVar7);

  _objc_release(lVar2);

LAB_001df6e8:

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




