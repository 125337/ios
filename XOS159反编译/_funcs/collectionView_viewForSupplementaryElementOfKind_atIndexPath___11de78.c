// collectionView:viewForSupplementaryElementOfKind:atIndexPath: @0x11de78


/* Function Stack Size: 0x28 bytes */



ID XZYHomeNPPickerVC::collectionView_viewForSupplementaryElementOfKind_atIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ID IVar10;

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

  undefined8 uVar11;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 in_x7;

  long lVar12;

  long lVar13;

  float fVar14;

  float fVar15;

  float fVar16;

  double in_d2;

  double dVar17;

  double dVar18;

  double dVar19;

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  double dVar25;

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

  _objc_retain(param_4);

  _objc_retain(param_5);

  auVar20 = FUN_00297820(param_4,extraout_x1,

                         *(undefined8 *)PTR__UICollectionElementKindSectionFooter_003883e8);

  if ((auVar20._0_8_ & 1) == 0) {

    uVar1 = 0;

    goto LAB_0011e560;

  }

  FUN_00294420(param_3,auVar20._8_8_,param_4,&cf_settingsFooter,param_5);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4840();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00293860();

  _objc_release(uVar2);

  if (lVar3 != 0) {

    uStack_138 = 0;

    local_140 = 0;

    uStack_128 = 0;

    uStack_130 = 0;

    lStack_158 = 0;

    local_160 = 0;

    uStack_148 = 0;

    local_150 = (long *)0x0;

    FUN_002a4840(uVar1);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar20._0_8_;

    lVar3 = FUN_00293880(uVar2,auVar20._8_8_,&local_160,auStack_120,0x10);

    if (lVar3 != 0) {

      lVar12 = *local_150;

      do {

        lVar13 = 0;

        do {

          if (*local_150 != lVar12) {

            _objc_enumerationMutation(uVar2);

          }

          FUN_0029b340(*(undefined8 *)(lStack_158 + lVar13 * 8));

          lVar13 = lVar13 + 1;

        } while (lVar3 != lVar13);

        lVar3 = FUN_00293880(uVar2,extraout_x1_00,&local_160,auStack_120,0x10);

      } while (lVar3 != 0);

    }

    _objc_release(uVar2);

  }

  FUN_002925a0(uVar1);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  in_d2 = in_d2 + -32.0;

  auVar20 = FUN_00296b80(0x4030000000000000,0x4020000000000000,in_d2,0x4038000000000000);

  uVar2 = auVar20._0_8_;

  FUN_002a1d60(uVar2,auVar20._8_8_,&cf_rz>f_yMOn_NdkT_N);

  FUN_002a4aa0(0x402a000000000000,&_OBJC_CLASS___UIFont);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar2,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar2,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_00291380(uVar1,extraout_x1_01,uVar2);

  _objc_alloc(&_OBJC_CLASS___UIView);

  uVar4 = FUN_00296b80(0x4030000000000000,0x4042000000000000,in_d2,0x4066000000000000);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar4,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_00297e40(uVar4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4024000000000000);

  _objc_release(uVar5);

  FUN_0029d4a0(uVar4,extraout_x1_02,1);

  FUN_00291380(uVar1,extraout_x1_03,uVar4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____Position);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____Height);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____OffsetX);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  dVar25 = auVar20._0_8_;

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____OffsetY);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_00299520(uVar5,extraout_x1_04,uVar6);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar3 == 0) {

    dVar19 = -1.0;

    fVar14 = -1.0;

    dVar18 = 0.0;

    auVar20._8_8_ = extraout_x1_05;

    auVar20._0_8_ = &cf_hQ__;

    dVar17 = 0.0;

  }

  else {

    auVar20 = FUN_00297480(uVar5,extraout_x1_05,uVar6);

    lVar12 = auVar20._0_8_;

    fVar14 = (float)FUN_00295460(uVar5,auVar20._8_8_,uVar7);

    fVar15 = (float)FUN_00295460(uVar5,extraout_x1_06,uVar8);

    fVar16 = (float)FUN_00295460(uVar5,extraout_x1_07,uVar9);

    dVar19 = (double)fVar14;

    dVar18 = (double)fVar15;

    dVar17 = (double)fVar16;

    uVar11 = extraout_x1_08;

    if (-1 < lVar12) {

      auVar20 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003be218);

      uVar11 = auVar20._8_8_;

      if (lVar12 < auVar20._0_8_) {

        FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be218,uVar11,lVar12);

        auVar20 = _objc_retainAutoreleasedReturnValue();

        goto LAB_0011e30c;

      }

    }

    auVar20._8_8_ = uVar11;

    auVar20._0_8_ = &cf_5fySO;

  }

LAB_0011e30c:

  FUN_002a66e0(in_d2,0x4046000000000000,param_1,auVar20._8_8_,uVar4,0,&cf_LrMOn_,auVar20._0_8_,100);

  if (lVar3 == 0) {

    auVar21._8_8_ = extraout_x1_09;

    auVar21._0_8_ = &cf_hQ__;

  }

  else if (fVar14 <= 0.0) {

    auVar21._8_8_ = extraout_x1_09;

    auVar21._0_8_ = &cf_R;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_09,&cf___0f);

    auVar21 = _objc_retainAutoreleasedReturnValue();

    dVar25 = dVar19;

  }

  FUN_002a66e0(in_d2,0x4046000000000000,param_1,auVar21._8_8_,uVar4,1,&cf_Lr_Y_,auVar21._0_8_,0x65,

               in_x7,dVar25);

  if (lVar3 == 0) {

    auVar22._8_8_ = extraout_x1_10;

    auVar22._0_8_ = &cf_hQ__;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_10,&cf___1f);

    auVar22 = _objc_retainAutoreleasedReturnValue();

    dVar25 = dVar18;

  }

  FUN_002a66e0(in_d2,0x4046000000000000,param_1,auVar22._8_8_,uVar4,2,&cf_X,auVar22._0_8_,0x66,in_x7

               ,dVar25);

  if (lVar3 == 0) {

    auVar23._8_8_ = extraout_x1_11;

    auVar23._0_8_ = &cf_hQ__;

  }

  else {

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_11,&cf___1f);

    auVar23 = _objc_retainAutoreleasedReturnValue();

    dVar25 = dVar17;

  }

  FUN_002a66e0(in_d2,0x4046000000000000,param_1,auVar23._8_8_,uVar4,3,&cf_Y,auVar23._0_8_,0x67,in_x7

               ,dVar25);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar24 = FUN_00296b80(0x4030000000000000,0x406b000000000000,in_d2,0x403e000000000000);

  uVar11 = auVar24._0_8_;

  FUN_002a1d60(uVar11,auVar24._8_8_,&cf__gn_ehQ___NuLrMOn_);

  FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar11,auVar24._8_8_,auVar24._0_8_);

  _objc_release(auVar24._0_8_);

  FUN_002a4fc0(&_OBJC_CLASS___UIColor);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar11,auVar24._8_8_,auVar24._0_8_);

  _objc_release(auVar24._0_8_);

  FUN_0029ffc0(uVar11,extraout_x1_12,0);

  FUN_00291380(uVar1,extraout_x1_13,uVar11);

  _objc_release(uVar11);

  _objc_release(auVar23._0_8_);

  _objc_release(auVar22._0_8_);

  _objc_release(auVar21._0_8_);

  _objc_release(auVar20._0_8_);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar2);

LAB_0011e560:

  _objc_release(param_5);

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_a0) {

    IVar10 = _objc_autoreleaseReturnValue(uVar1);

    return IVar10;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




