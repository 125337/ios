// collectionView:cellForItemAtIndexPath: @0x11caec


/* Function Stack Size: 0x20 bytes */



ID XZYHomeNPPickerVC::collectionView_cellForItemAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  uint uVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  cfstringStruct *pcVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  ID IVar17;

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

  long lVar18;

  long lVar19;

  double in_d2;

  undefined1 auVar20 [16];

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_4);

  FUN_00294400(param_3,extraout_x1,&cf_np,param_4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  FUN_00293640();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4840();

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar6);

  lVar8 = FUN_00293880(uVar7,extraout_x1_00,&local_140,auStack_100,0x10);

  if (lVar8 != 0) {

    lVar18 = *local_130;

    do {

      lVar19 = 0;

      do {

        if (*local_130 != lVar18) {

          _objc_enumerationMutation(uVar7);

        }

        FUN_0029b340(*(undefined8 *)(lStack_138 + lVar19 * 8));

        lVar19 = lVar19 + 1;

      } while (lVar8 != lVar19);

      lVar8 = FUN_00293880(uVar7,extraout_x1_01,&local_140,auStack_100,0x10);

    } while (lVar8 != 0);

  }

  _objc_release(uVar7);

  FUN_002964e0(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  auVar20 = FUN_00297ba0(param_4);

  FUN_00299500(uVar6,auVar20._8_8_,auVar20._0_8_);

  pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  _objc_release(uVar6);

  _NSHomeDirectory();

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar20._0_8_,auVar20._8_8_,&cf_Documents_CoverRes_nameplate);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a4460(uVar6,extraout_x1_02,pcVar9);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002965c0(&_OBJC_CLASS___UIImage,auVar20._8_8_,auVar20._0_8_);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_00293640(uVar5);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  _objc_release(uVar10);

  _objc_alloc(&_OBJC_CLASS___UIImageView);

  auVar20 = FUN_00296b80(0,0,in_d2,in_d2);

  uVar10 = auVar20._0_8_;

  FUN_0029ec00(uVar10,auVar20._8_8_,uVar7);

  FUN_0029d6c0(uVar10,extraout_x1_03,1);

  FUN_0029d4a0(uVar10,extraout_x1_04,1);

  FUN_00297e40(uVar10);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_0029d820(0x4020000000000000);

  _objc_release(uVar11);

  FUN_0029c000(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar10,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_00293640(uVar5);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar20._0_8_,auVar20._8_8_,uVar10);

  _objc_release(auVar20._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____Light);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a4f80(param_1);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar20._8_8_,&cf_xzyHomeNP____Dark);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar20._0_8_);

  FUN_002a45e0(uVar11,extraout_x1_05,uVar12);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar3 = FUN_00297820(pcVar9,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_002a45e0(uVar11,extraout_x1_06,uVar13);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00297820(pcVar9,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  pcVar1 = &::cf___;

  if ((uVar3 & uVar4) == 0) {

    pcVar1 = &::cf___;

  }

  pcVar2 = &cf_<;

  if (uVar4 == 0) {

    pcVar2 = &::cf___;

  }

  if (uVar3 == 0) {

    pcVar1 = pcVar2;

  }

  _objc_alloc(&_OBJC_CLASS___UILabel);

  uVar14 = FUN_00296b80(0,in_d2 + 2.0,in_d2,0x4034000000000000);

  auVar20 = FUN_00297fa0(pcVar1);

  pcVar2 = pcVar9;

  if (auVar20._0_8_ != 0) {

    pcVar2 = pcVar1;

  }

  FUN_002a1d60(uVar14,auVar20._8_8_,pcVar2);

  FUN_002a4aa0(0x4024000000000000,&_OBJC_CLASS___UIFont);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar14,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_002a1d80(uVar14,extraout_x1_07,1);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar14,auVar20._8_8_,auVar20._0_8_);

  _objc_release(auVar20._0_8_);

  FUN_0029f460(uVar14,extraout_x1_08,5);

  FUN_00293640(uVar5);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar20._0_8_,auVar20._8_8_,uVar14);

  _objc_release(auVar20._0_8_);

  if (((uVar3 | uVar4) & 1) == 0) {

    FUN_00297e40(uVar10);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0);

  }

  else {

    FUN_002a4a80(&_OBJC_CLASS___UIColor);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar16 = FUN_00290a20(uVar15);

    FUN_00297e40(uVar10);

    auVar20 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar20._0_8_,auVar20._8_8_,uVar16);

    _objc_release(auVar20._0_8_);

    _objc_release(uVar15);

    FUN_00297e40(uVar10);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x4000000000000000);

  }

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(pcVar9);

  _objc_release(param_4);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    IVar17 = _objc_autoreleaseReturnValue(uVar5);

    return IVar17;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




