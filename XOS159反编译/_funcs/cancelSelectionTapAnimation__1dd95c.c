// cancelSelectionTapAnimation @0x1dd95c


/* Function Stack Size: 0x10 bytes */



void XZYCLGHorizontalBarView::cancelSelectionTapAnimation(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar10;

  long lVar11;

  undefined1 auVar12 [16];

  undefined8 local_160;

  long lStack_158;

  long *local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 uStack_130;

  undefined8 uStack_128;

  undefined8 local_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined8 local_100;

  undefined8 local_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  local_150 = (long *)0x0;

  uStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  uStack_130 = 0;

  FUN_0029c400();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_118 = uVar2;

  FUN_0029c3e0(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_110 = uVar4;

  FUN_0029c400(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00298aa0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_108 = uVar6;

  FUN_00292480(param_1);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_100 = uVar8;

  FUN_002a55a0(param_1);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  local_f8 = auVar12._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar12._8_8_,&local_118,5);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar12._0_8_);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  auVar12 = FUN_00293880(uVar9,extraout_x1,&local_160,auStack_f0,0x10);

  if (auVar12._0_8_ != 0) {

    lVar10 = *local_150;

    do {

      uVar1 = auVar12._8_8_;

      lVar11 = 0;

      do {

        if (*local_150 != lVar10) {

          _objc_enumerationMutation(uVar9);

          uVar1 = extraout_x1_00;

        }

        FUN_0029b260(*(undefined8 *)(lStack_158 + lVar11 * 8),uVar1,

                     &cf_xzy_clg_horizontalSelectionTap);

        lVar11 = lVar11 + 1;

        uVar1 = extraout_x1_01;

      } while (auVar12._0_8_ != lVar11);

      auVar12 = FUN_00293880(uVar9,extraout_x1_01,&local_160,auStack_f0,0x10);

    } while (auVar12._0_8_ != 0);

  }

  _objc_release(uVar9);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




