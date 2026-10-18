// cancelSelectionTap @0x274c18


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::cancelSelectionTap(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar11;

  long lVar12;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

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

  iVar1 = FUN_0029c480();

  if (iVar1 != 0) {

    auVar13 = FUN_0029c4c0(param_1);

    FUN_002a1320(param_1,auVar13._8_8_,auVar13._0_8_ + 1);

    FUN_002a12e0(param_1,extraout_x1,0);

    uStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    uStack_130 = 0;

    lStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    local_150 = (long *)0x0;

    FUN_0029c3c0(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_118 = uVar3;

    FUN_0029c3e0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_110 = uVar5;

    FUN_0029c3c0(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_00298aa0();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    local_108 = uVar7;

    FUN_00299100(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar9 = _objc_retainAutoreleasedReturnValue();

    local_100 = uVar9;

    FUN_00299180(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    local_f8 = auVar13._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar13._8_8_,&local_118,5);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar13._0_8_);

    _objc_release(uVar9);

    _objc_release(uVar8);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    _objc_release(uVar2);

    auVar13 = FUN_00293880(uVar10,extraout_x1_00,&local_160,auStack_f0,0x10);

    if (auVar13._0_8_ != 0) {

      lVar11 = *local_150;

      do {

        uVar2 = auVar13._8_8_;

        lVar12 = 0;

        do {

          if (*local_150 != lVar11) {

            _objc_enumerationMutation(uVar10);

            uVar2 = extraout_x1_01;

          }

          FUN_0029b260(*(undefined8 *)(lStack_158 + lVar12 * 8),uVar2,&cf_xzy_liquid_selectionTap);

          lVar12 = lVar12 + 1;

          uVar2 = extraout_x1_02;

        } while (auVar13._0_8_ != lVar12);

        auVar13 = FUN_00293880(uVar10,extraout_x1_02,&local_160,auStack_f0,0x10);

      } while (auVar13._0_8_ != 0);

    }

    _objc_release(uVar10);

    FUN_002a5120(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_00290f60();

    FUN_00299100(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar13._0_8_,auVar13._8_8_,uVar3);

    FUN_0029c3c0(param_1);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1e00(auVar14._0_8_,auVar14._8_8_,uVar3);

    _objc_release(auVar14._0_8_);

    _objc_release(auVar13._0_8_);

    _objc_release(uVar2);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




