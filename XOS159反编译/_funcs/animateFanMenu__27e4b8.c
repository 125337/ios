// animateFanMenu @0x27e4b8


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::animateFanMenu(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar10 [16];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined1 auStack_118 [128];

  long local_98;

  

  local_98 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00290e40();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4880();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00290e40(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar9 = FUN_0027e700();

  FUN_00298b40(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar9 = FUN_00293720(uVar9,in_d1,in_d2,in_d3,uVar2,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  uVar3 = _CGRectGetMidX(uVar9,in_d1,in_d2,in_d3);

  uVar9 = _CGRectGetMidY(uVar9,in_d1,in_d2,in_d3);

  uVar1 = _UIAccessibilityIsReduceMotionEnabled();

  FUN_00292180(&_OBJC_CLASS___CATransaction);

  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1,1);

  uStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  uStack_130 = 0;

  lStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  local_150 = (long *)0x0;

  FUN_00298b80(param_1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar2 = auVar10._0_8_;

  lVar4 = FUN_00293880(uVar2,auVar10._8_8_,&local_160,auStack_118,0x10);

  if (lVar4 != 0) {

    lVar7 = *local_150;

    do {

      lVar8 = 0;

      do {

        if (*local_150 != lVar7) {

          _objc_enumerationMutation(uVar2);

        }

        uVar6 = *(undefined8 *)(lStack_158 + lVar8 * 8);

        auVar10 = FUN_002978a0(uVar6);

        uVar5 = auVar10._8_8_;

        if ((auVar10._0_8_ & 1) == 0) {

          FUN_0027e7d4(uVar3,uVar9,uVar6,1,uVar1);

          uVar5 = extraout_x1_00;

        }

        lVar8 = lVar8 + 1;

      } while (lVar4 != lVar8);

      lVar4 = FUN_00293880(uVar2,uVar5,&local_160,auStack_118,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar2);

  FUN_002930a0(&_OBJC_CLASS___CATransaction);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_98) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




