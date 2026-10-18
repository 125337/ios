// onCardTap: @0x1dd0ac


/* Function Stack Size: 0x18 bytes */



void XZYCLGHorizontalBarView::onCardTap_(ID param_1,SEL param_2,ID param_3)



{

  int iVar1;

  undefined8 uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined1 auStack_120 [128];

  long local_a0;

  

  local_a0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_00295de0(param_3);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00297fa0();

  _objc_release(uVar2);

  if (lVar3 != 0) {

    iVar1 = FUN_002a6380(param_3);

    FUN_002962e0(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 != 0) {

      FUN_00295de0(param_3);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      FUN_001d393c(lVar3,uVar2);

      _objc_release(uVar2);

    }

    uStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    uStack_130 = 0;

    lStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    local_150 = (long *)0x0;

    FUN_00299900(param_1);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar11._0_8_;

    lVar4 = FUN_00293880(uVar2,auVar11._8_8_,&local_160,auStack_120,0x10);

    if (lVar4 != 0) {

      lVar10 = *local_150;

      do {

        lVar8 = 0;

        do {

          if (*local_150 != lVar10) {

            _objc_enumerationMutation(uVar2);

          }

          uVar9 = *(undefined8 *)(lStack_158 + lVar8 * 8);

          FUN_00295de0(uVar9);

          uVar5 = _objc_retainAutoreleasedReturnValue();

          FUN_00295de0(param_3);

          auVar11 = _objc_retainAutoreleasedReturnValue();

          auVar12 = FUN_00297820(uVar5,auVar11._8_8_,auVar11._0_8_);

          FUN_002a25e0(uVar9,auVar12._8_8_,auVar12._0_8_);

          _objc_release(auVar11._0_8_);

          _objc_release(uVar5);

          lVar8 = lVar8 + 1;

        } while (lVar4 != lVar8);

        lVar4 = FUN_00293880(uVar2,extraout_x1,&local_160,auStack_120,0x10);

      } while (lVar4 != 0);

    }

    _objc_release(uVar2);

    FUN_002a6520(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 != 0) {

      uVar2 = FUN_0029c420(param_1,extraout_x1_00,param_3);

      uVar5 = _CGRectGetMidX();

      uVar2 = _CGRectGetMidY(uVar2,in_d1,in_d2,in_d3);

      if (iVar1 == 0) {

        FUN_00295de0(param_3);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f300(param_1,auVar11._8_8_,auVar11._0_8_);

        _objc_release(auVar11._0_8_);

        FUN_0029c3e0(param_1);

        uVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00297e40();

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_0029a540();

        lVar4 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 == 0) {

          FUN_0029c3e0(param_1);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          FUN_00297e40();

          lVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar7);

        }

        else {

          _objc_retain(lVar4);

          lVar10 = lVar4;

        }

        _objc_release(lVar4);

        _objc_release(uVar6);

        _objc_release(uVar9);

        uVar9 = FUN_0029a100(lVar10);

        FUN_00291760(uVar5,uVar2,uVar9,in_d1,param_1,extraout_x1_02,0);

        _objc_release(lVar10);

      }

      else {

        FUN_00291760(uVar5,uVar2,uVar5,uVar2,param_1,extraout_x1_01,1);

      }

    }

    FUN_00295de0(param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_001d39c0(lVar3,uVar2);

    _objc_release(uVar2);

    _objc_release(lVar3);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




