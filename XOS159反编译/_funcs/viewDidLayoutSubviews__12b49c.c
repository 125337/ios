// viewDidLayoutSubviews @0x12b49c


/* Function Stack Size: 0x10 bytes */



void XZYColorPickerViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  ulong uVar8;

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

  long lVar9;

  ulong uVar10;

  long lVar11;

  ulong uVar12;

  double in_d2;

  double dVar13;

  double dVar14;

  undefined8 uVar15;

  double dVar16;

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  ID local_120;

  class_t *pcStack_118;

  undefined8 local_110 [4];

  undefined8 local_f0;

  undefined8 uStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  undefined8 local_d0;

  undefined8 uStack_c8;

  undefined8 local_c0;

  undefined8 uStack_b8;

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  pcStack_118 = &objc::class_t::XZYColorPickerViewController;

  local_120 = param_1;

  _objc_msgSendSuper2(&local_120,"viewDidLayoutSubviews");

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar2);

  FUN_002a6220(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  lVar9 = (long)_scrollView;

  FUN_0029e5e0(*(undefined8 *)(param_1 + lVar9));

  _objc_release(uVar2);

  dVar13 = in_d2 + -40.0;

  FUN_0029e5e0(0x4034000000000000,0x4030000000000000,dVar13,0x4042000000000000,

               *(undefined8 *)(param_1 + (long)_modeSegment));

  FUN_002a62a0(*(undefined8 *)(param_1 + lVar9),extraout_x1,100);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4034000000000000,0x4051000000000000,dVar13,0x4048000000000000,uVar2);

  FUN_002a62a0(uVar2,extraout_x1_00,0x65);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e5e0(0x4030000000000000,0,0x4044000000000000,0x4048000000000000,uVar3);

  FUN_0029e5e0(0x4050000000000000,0,dVar13 + -64.0 + -52.0,0x4048000000000000,

               *(undefined8 *)(param_1 + (long)_hexField));

  FUN_0029e5e0(dVar13 + -46.0,0x4018000000000000,0x4042000000000000,0x4042000000000000,

               *(undefined8 *)(param_1 + (long)_hexPreview));

  dVar16 = dVar13 + -40.0 + -12.0;

  dVar14 = dVar16 * 0.7;

  FUN_0029e5e0(0x4034000000000000,0x4060800000000000,dVar16,dVar14,

               *(undefined8 *)(param_1 + (long)_hsbView));

  FUN_0029e5e0(dVar16 + 20.0 + 12.0,0x4060800000000000,0x403c000000000000,dVar14,

               *(undefined8 *)(param_1 + (long)_hueStrip));

  local_d0 = *(undefined8 *)(param_1 + (long)_rSlider);

  uStack_c8 = *(undefined8 *)(param_1 + (long)_gSlider);

  local_c0 = *(undefined8 *)(param_1 + (long)_bSlider);

  uStack_b8 = *(undefined8 *)(param_1 + (long)_aSlider);

  FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_01,&local_d0,4);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  local_f0 = *(undefined8 *)(param_1 + (long)_rValueLabel);

  uStack_e8 = *(undefined8 *)(param_1 + (long)_gValueLabel);

  local_e0 = *(undefined8 *)(param_1 + (long)_bValueLabel);

  uStack_d8 = *(undefined8 *)(param_1 + (long)_aValueLabel);

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar17._8_8_,&local_f0,4);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ae20(&_OBJC_CLASS___UIColor);

  local_110[0] = _objc_retainAutoreleasedReturnValue();

  FUN_00293040(0,0x3fe6666666666666,0,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

  local_110[1] = _objc_retainAutoreleasedReturnValue();

  FUN_00292440(&_OBJC_CLASS___UIColor);

  local_110[2] = _objc_retainAutoreleasedReturnValue();

  FUN_00295d00(local_110,&_OBJC_CLASS___UIColor);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  lVar11 = 0;

  dVar14 = dVar14 + 20.0 + 132.0;

  uVar15 = *(undefined8 *)PTR__UIFontWeightBold_00388408;

  do {

    local_110[3] = auVar18._0_8_;

    FUN_002a62a0(*(undefined8 *)(param_1 + lVar9),auVar18._8_8_,lVar11 + 300);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 == 0) {

      auVar18 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

      lVar5 = auVar18._0_8_;

      FUN_002a1c80(lVar5,auVar18._8_8_,lVar11 + 300);

      FUN_002a4ac0(0x4030000000000000,uVar15,&_OBJC_CLASS___UIFont);

      auVar18 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(lVar5,auVar18._8_8_,auVar18._0_8_);

      _objc_release(auVar18._0_8_);

      FUN_002a1d80(lVar5,extraout_x1_02,1);

      FUN_002a1da0(lVar5,extraout_x1_03,local_110[lVar11]);

      FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be290,extraout_x1_04,lVar11);

      auVar18 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(lVar5,auVar18._8_8_,auVar18._0_8_);

      _objc_release(auVar18._0_8_);

      FUN_00291380(*(undefined8 *)(param_1 + lVar9),extraout_x1_05,lVar5);

    }

    FUN_0029e5e0(0x4034000000000000,dVar14 + 8.0,0x4034000000000000,0x4034000000000000,lVar5);

    FUN_00299500(auVar17._0_8_,extraout_x1_06,lVar11);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(0x404a000000000000,dVar14,dVar13 + -20.0 + -12.0 + -50.0 + -12.0,0x4042000000000000

                );

    FUN_00299500(uVar4,extraout_x1_07,lVar11);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(dVar13 + 20.0 + -50.0,dVar14 + 4.0,0x4049000000000000,0x403c000000000000);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(lVar5);

    auVar18._8_8_ = extraout_x1_08;

    auVar18._0_8_ = local_110[3];

    dVar14 = dVar14 + 44.0;

    lVar11 = lVar11 + 1;

  } while (lVar11 != 4);

  lVar11 = (long)_presetContainer;

  FUN_002a4840(*(undefined8 *)(param_1 + lVar11));

  uVar15 = _objc_retainAutoreleasedReturnValue();

  uVar8 = FUN_00293860();

  _objc_release(uVar15);

  uVar10 = (ulong)((dVar13 + 10.0) / 46.0);

  if ((long)uVar10 < 2) {

    uVar10 = 1;

  }

  lVar5 = 0;

  if (uVar10 != 0) {

    lVar5 = (long)(uVar10 + uVar8 + -1) / (long)uVar10;

  }

  FUN_0029e5e0(0x4034000000000000,dVar14 + 8.0,dVar13,(double)lVar5 * 46.0,

               *(undefined8 *)(param_1 + lVar11));

  if (0 < (long)uVar8) {

    uVar12 = 0;

    do {

      FUN_002a4840(*(undefined8 *)(param_1 + lVar11));

      auVar18 = _objc_retainAutoreleasedReturnValue();

      FUN_00299500(auVar18._0_8_,auVar18._8_8_,uVar12);

      uVar15 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar18._0_8_);

      uVar1 = 0;

      if (uVar10 != 0) {

        uVar1 = uVar12 / uVar10;

      }

      FUN_0029e5e0((double)(uVar12 - uVar1 * uVar10) * 46.0,(double)uVar1 * 46.0,0x4042000000000000,

                   0x4042000000000000,uVar15);

      _objc_release(uVar15);

      uVar12 = uVar12 + 1;

    } while (uVar8 != uVar12);

  }

  FUN_0029d720(in_d2,dVar14 + 8.0 + (double)lVar5 * 46.0 + 20.0 + 40.0,

               *(undefined8 *)(param_1 + lVar9));

  lVar11 = 0x18;

  do {

    _objc_release(*(undefined8 *)((long)local_110 + lVar11));

    lVar11 = lVar11 + -8;

  } while (lVar11 != -8);

  _objc_release(uVar4);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




