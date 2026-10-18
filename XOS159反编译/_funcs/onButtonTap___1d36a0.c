// onButtonTap: @0x1d36a0


/* Function Stack Size: 0x18 bytes */



void XZYCLGSideRailView::onButtonTap_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

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

  _objc_retain(param_3);

  FUN_00295de0(param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00297fa0();

  _objc_release(uVar1);

  if (lVar2 != 0) {

    FUN_002962e0(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    if (lVar2 != 0) {

      FUN_00295de0(param_3);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      FUN_001d393c(lVar2,uVar1);

      _objc_release(uVar1);

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

    auVar8 = _objc_retainAutoreleasedReturnValue();

    uVar1 = auVar8._0_8_;

    lVar3 = FUN_00293880(uVar1,auVar8._8_8_,&local_130,auStack_e8,0x10);

    if (lVar3 != 0) {

      lVar6 = *local_120;

      do {

        lVar7 = 0;

        do {

          if (*local_120 != lVar6) {

            _objc_enumerationMutation(uVar1);

          }

          uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);

          FUN_00295de0(uVar5);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          FUN_00295de0(param_3);

          auVar8 = _objc_retainAutoreleasedReturnValue();

          auVar9 = FUN_00297820(uVar4,auVar8._8_8_,auVar8._0_8_);

          FUN_002a1120(uVar5,auVar9._8_8_,auVar9._0_8_);

          _objc_release(auVar8._0_8_);

          _objc_release(uVar4);

          lVar7 = lVar7 + 1;

        } while (lVar3 != lVar7);

        lVar3 = FUN_00293880(uVar1,extraout_x1,&local_130,auStack_e8,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar1);

    FUN_00295de0(param_3);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    FUN_001d39c0(lVar2,uVar1);

    _objc_release(uVar1);

    _objc_release(lVar2);

  }

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




