// rebuildPresetButtons @0x12affc


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::rebuildPresetButtons(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

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

  ulong uVar6;

  long lVar7;

  long lVar8;

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lVar9 = (long)_presetContainer;

  FUN_002a4840(*(undefined8 *)(param_1 + lVar9));

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = FUN_002937a0();

  _objc_release(uVar1);

  lVar3 = FUN_00293880(uVar2,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar3 != 0) {

    lVar7 = *local_120;

    do {

      lVar8 = 0;

      do {

        if (*local_120 != lVar7) {

          _objc_enumerationMutation(uVar2);

        }

        FUN_0029b340(*(undefined8 *)(lStack_128 + lVar8 * 8));

        lVar8 = lVar8 + 1;

      } while (lVar3 != lVar8);

      lVar3 = FUN_00293880(uVar2,extraout_x1_00,&local_130,auStack_f0,0x10);

    } while (lVar3 != 0);

  }

  _objc_release(uVar2);

  lVar3 = (long)_favoriteColors;

  auVar10 = FUN_00293860(*(undefined8 *)(param_1 + lVar3));

  uVar1 = auVar10._8_8_;

  if (auVar10._0_8_ != 0) {

    uVar6 = 0;

    do {

      FUN_00299500(*(undefined8 *)(param_1 + lVar3),uVar1,uVar6);

      uVar1 = _objc_retainAutoreleasedReturnValue();

      uVar2 = _objc_alloc_init(&_OBJC_CLASS___UIButton);

      FUN_00297e40();

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4032000000000000);

      _objc_release(uVar4);

      FUN_00292f40(param_1,extraout_x1_01,uVar1);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(uVar2,auVar10._8_8_,auVar10._0_8_);

      _objc_release(auVar10._0_8_);

      FUN_00297e40(uVar2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0e0(0x4000000000000000);

      _objc_release(uVar4);

      FUN_002a4b00(&_OBJC_CLASS___UIColor);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_retainAutorelease();

      uVar5 = FUN_00290a20();

      FUN_00297e40(uVar2);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d0a0(auVar10._0_8_,auVar10._8_8_,uVar5);

      _objc_release(auVar10._0_8_);

      _objc_release(uVar4);

      FUN_002a1c80(uVar2,extraout_x1_02,uVar6 + 500);

      FUN_0029c760(uVar2,extraout_x1_03,uVar1);

      FUN_002913c0(uVar2,extraout_x1_04,param_1,"presetTapped:",0x40);

      auVar10 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

      uVar4 = FUN_00296f20(auVar10._0_8_,auVar10._8_8_,param_1,"presetLongPressed:");

      FUN_0029fce0(0x3fe0000000000000);

      FUN_00291140(uVar2,extraout_x1_05,uVar4);

      FUN_00291380(*(undefined8 *)(param_1 + lVar9),extraout_x1_06,uVar2);

      _objc_release(uVar4);

      _objc_release(uVar2);

      _objc_release(uVar1);

      auVar10 = FUN_00293860(*(undefined8 *)(param_1 + lVar3));

      uVar1 = auVar10._8_8_;

      uVar6 = uVar6 + 1;

    } while (uVar6 < auVar10._0_8_);

  }

  uVar1 = _objc_alloc_init(&_OBJC_CLASS___UIButton);

  FUN_00297e40();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4032000000000000);

  _objc_release(uVar2);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar1,auVar10._8_8_,auVar10._0_8_);

  _objc_release(auVar10._0_8_);

  FUN_00297e40(uVar1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0e0(0x4000000000000000);

  _objc_release(uVar2);

  FUN_002a4b00(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_retainAutorelease();

  uVar4 = FUN_00290a20();

  FUN_00297e40(uVar1);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d0a0(auVar10._0_8_,auVar10._8_8_,uVar4);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar2);

  FUN_002a1c80(uVar1,extraout_x1_07,599);

  FUN_00293320(0x4030000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,extraout_x1_08,5);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4be0(&_OBJC_CLASS___UIImage,auVar10._8_8_,&cf_plus,auVar10._0_8_);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec20(uVar1,auVar11._8_8_,auVar11._0_8_,0);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(uVar1,auVar12._8_8_,auVar12._0_8_);

  _objc_release(auVar12._0_8_);

  FUN_002913c0(uVar1,extraout_x1_09,param_1,"addFavoriteColorTapped",0x40);

  FUN_00291380(*(undefined8 *)(param_1 + lVar9),extraout_x1_10,uVar1);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ff40();

  _objc_release(uVar2);

  _objc_release(auVar11._0_8_);

  _objc_release(auVar10._0_8_);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




