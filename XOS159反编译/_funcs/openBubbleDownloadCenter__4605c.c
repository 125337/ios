// openBubbleDownloadCenter @0x4605c


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::openBubbleDownloadCenter(ID param_1,SEL param_2)



{

  cfstringStruct *pcVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  undefined8 uVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 uVar18;

  undefined8 uVar19;

  undefined8 uVar20;

  undefined8 uVar21;

  undefined8 uVar22;

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

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  double dVar23;

  double in_d2;

  double dVar24;

  double in_d3;

  double dVar25;

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  undefined1 auVar28 [16];

  undefined1 auVar29 [16];

  undefined1 auVar30 [16];

  undefined1 auVar31 [16];

  long local_168;

  long local_130;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002990e0();

  local_130 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 != 0) {

    FUN_00299260();

    local_168 = _objc_retainAutoreleasedReturnValue();

    if (local_168 != 0) {

      _objc_retain(local_168);

      _objc_release(local_130);

      local_130 = local_168;

      goto LAB_00046100;

    }

  }

  local_168 = 0;

LAB_00046100:

  auVar26 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar3 = auVar26._0_8_;

  FUN_002a1f60(uVar3,auVar26._8_8_,&cf_N__N_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar26._0_8_,auVar26._8_8_,uVar4);

  _objc_release(auVar26._0_8_);

  _objc_release(uVar4);

  auVar26 = _objc_alloc(&_OBJC_CLASS___UISegmentedControl);

  auVar26 = FUN_00296cc0(auVar26._0_8_,auVar26._8_8_,&PTR__OBJC_CLASS___NSConstantArray_003bdb88);

  uVar4 = auVar26._0_8_;

  FUN_002a11c0(uVar4,auVar26._8_8_,0);

  FUN_002a21e0(uVar4,extraout_x1,0);

  FUN_002913c0(uVar4,extraout_x1_00,param_1,"downloadCenterSegmentChanged:",0x1000);

  FUN_002a6220(uVar3);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar4);

  _objc_release(auVar26._0_8_);

  FUN_002a6220(uVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029bb80();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  FUN_002a54e0(uVar4);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a54e0(uVar6);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4018000000000000,uVar5);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_b0 = uVar8;

  FUN_00297f40(uVar4);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40();

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4028000000000000,uVar9);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_a8 = uVar12;

  FUN_002a5660(uVar4);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660();

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc028000000000000,uVar13,auVar26._8_8_,auVar26._0_8_);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_a0 = uVar15;

  FUN_00296060(uVar4);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002934a0(0x4040000000000000);

  auVar27 = _objc_retainAutoreleasedReturnValue();

  local_98 = auVar27._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar27._8_8_,&local_b0,4);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar28._8_8_,auVar28._0_8_);

  _objc_release(auVar28._0_8_);

  _objc_release(auVar27._0_8_);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(auVar26._0_8_);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar5);

  _objc_setAssociatedObject(uVar3,"downloadCenterSegment",uVar4,1);

  _objc_setAssociatedObject

            (uVar3,"downloadCenterTab",&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

  auVar26 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);

  uVar5 = FUN_00296920(auVar26._0_8_,auVar26._8_8_,100);

  FUN_002a6220(uVar3);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  dVar23 = in_d2;

  FUN_002a6220(uVar3);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  in_d3 = in_d3 * 0.5;

  FUN_0029d320(in_d2 * 0.5,in_d3,uVar5);

  _objc_release(uVar8);

  _objc_release(uVar7);

  FUN_0029ce00(uVar5,extraout_x1_01,0x2d);

  FUN_002a6220(uVar3);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar5);

  _objc_release(auVar26._0_8_);

  FUN_002a4160(uVar5);

  auVar26 = _objc_alloc_init(&_OBJC_CLASS___UILabel);

  uVar7 = auVar26._0_8_;

  FUN_002a1d60(uVar7,auVar26._8_8_,&cf_ck_WScCgRh_);

  FUN_002a1d80(uVar7,extraout_x1_02,1);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar7,auVar26._8_8_,auVar26._0_8_);

  _objc_release(auVar26._0_8_);

  FUN_002a4aa0(0x4030000000000000,&_OBJC_CLASS___UIFont);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar7,auVar26._8_8_,auVar26._0_8_);

  _objc_release(auVar26._0_8_);

  FUN_002a3de0(uVar7);

  FUN_002a6220(uVar3);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  FUN_00292ae0(uVar5);

  FUN_0029d320(dVar23 * 0.5,in_d3 + 40.0,uVar7);

  _objc_release(uVar8);

  FUN_0029ce00(uVar7,extraout_x1_03,0x2d);

  FUN_002a6220(uVar3);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar7);

  _objc_release(auVar26._0_8_);

  _objc_alloc(&_OBJC_CLASS___UISearchBar);

  auVar26 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                         *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

  uVar8 = auVar26._0_8_;

  FUN_002a21e0(uVar8,auVar26._8_8_,0);

  FUN_002a06e0(uVar8,extraout_x1_04,&cf_d__ll);

  FUN_002a1c80(uVar8,extraout_x1_05,0xbba);

  FUN_0029dca0(uVar8,extraout_x1_06,param_1);

  FUN_002a0fe0(uVar8,extraout_x1_07,2);

  FUN_002a6220(uVar3);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar26._0_8_,auVar26._8_8_,uVar8);

  _objc_release(auVar26._0_8_);

  FUN_002a54e0(uVar8);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540(uVar4);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4010000000000000,uVar9);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_d0 = uVar11;

  FUN_00297f40(uVar8);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40();

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar12);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  local_c8 = uVar15;

  FUN_002a5660(uVar8);

  uVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660();

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar16,auVar26._8_8_,auVar26._0_8_);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  local_c0 = uVar18;

  FUN_00296060(uVar8);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_002934a0(0x4046000000000000);

  auVar27 = _objc_retainAutoreleasedReturnValue();

  local_b8 = auVar27._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar27._8_8_,&local_d0,4);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar28._8_8_,auVar28._0_8_);

  _objc_release(auVar28._0_8_);

  _objc_release(auVar27._0_8_);

  _objc_release(uVar19);

  _objc_release(uVar18);

  _objc_release(auVar26._0_8_);

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_setAssociatedObject(uVar3,"bubbleSearchBar",uVar8,1);

  _objc_setAssociatedObject(uVar3,"loadingView",uVar5,1);

  _objc_setAssociatedObject(uVar3,"statusLabel",uVar7,1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  FUN_00299520(auVar26._0_8_,auVar26._8_8_,&cf_xzyBubbleDownloadCenterDisplayMode);

  auVar27 = _objc_retainAutoreleasedReturnValue();

  if (auVar27._0_8_ == 0) {

    auVar28._8_8_ = 0;

    auVar28._0_8_ = auVar27._8_8_;

    auVar28 = auVar28 << 0x40;

  }

  else {

    auVar28 = FUN_002974a0();

  }

  FUN_00299400(&_OBJC_CLASS___NSNumber,auVar28._8_8_,auVar28._0_8_);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_setAssociatedObject(uVar3,"bubbleDisplayMode",uVar9,1);

  _objc_release(uVar9);

  pcVar1 = &cf_list_bullet;

  if (auVar28._0_8_ != 1) {

    pcVar1 = &cf_square_grid_2x2;

  }

  _objc_retain();

  auVar28 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar28._8_8_,pcVar1);

  auVar29 = _objc_retainAutoreleasedReturnValue();

  uVar9 = FUN_00296c60(auVar28._0_8_,auVar29._8_8_,auVar29._0_8_,0,param_1,

                       "toggleBubbleDisplayMode:");

  FUN_00299140(uVar3);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar28._0_8_,auVar28._8_8_,uVar9);

  _objc_release(auVar28._0_8_);

  _objc_release(uVar9);

  _objc_release(auVar29._0_8_);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(uVar3);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ba80();

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar28._0_8_,auVar28._8_8_,uVar9);

  _objc_release(auVar28._0_8_);

  _objc_release(uVar10);

  _objc_release(uVar9);

  auVar28 = _objc_alloc_init(&_OBJC_CLASS___UICollectionViewFlowLayout);

  uVar9 = auVar28._0_8_;

  FUN_002a0f40(uVar9,auVar28._8_8_,0);

  FUN_0029fca0(0,uVar9);

  FUN_0029fcc0(0x4028000000000000,uVar9);

  dVar23 = 12.0;

  dVar24 = 12.0;

  dVar25 = 12.0;

  FUN_002a10e0(0x4028000000000000,0x4028000000000000,0x4028000000000000,0x4028000000000000,uVar9);

  FUN_002a6220(uVar3);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  FUN_0029c040(uVar9);

  FUN_0029c040(uVar9);

  _objc_release(uVar10);

  FUN_0029f160((dVar24 - dVar23) - dVar25,0x4055000000000000,uVar9);

  auVar28 = _objc_alloc(&_OBJC_CLASS___UICollectionView);

  uVar10 = FUN_00296ba0(*(undefined8 *)PTR__CGRectZero_00388bf0,

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                        *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18),auVar28._0_8_,auVar28._8_8_

                        ,uVar9);

  FUN_002a6220(uVar3);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00292080();

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar10,auVar28._8_8_,auVar28._0_8_);

  _objc_release(auVar28._0_8_);

  _objc_release(uVar11);

  FUN_002a21e0(uVar10,extraout_x1_08,0);

  FUN_0029dca0(uVar10,extraout_x1_09,param_1);

  FUN_0029db40(uVar10,extraout_x1_10,param_1);

  FUN_002a1c80(uVar10,extraout_x1_11,0x7d1);

  auVar28 = _objc_opt_class(&_OBJC_CLASS___UICollectionViewCell);

  FUN_0029b040(uVar10,auVar28._8_8_,auVar28._0_8_,&cf_BubbleCell);

  FUN_002a6220(uVar3);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar28._0_8_,auVar28._8_8_,uVar10);

  _objc_release(auVar28._0_8_);

  FUN_002a54e0(uVar10);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540(uVar8);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar11);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  local_f0 = uVar13;

  FUN_00297f40(uVar10);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40();

  uVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar14);

  uVar17 = _objc_retainAutoreleasedReturnValue();

  local_e8 = uVar17;

  FUN_002a5660(uVar10);

  uVar18 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660();

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar18,auVar28._8_8_,auVar28._0_8_);

  uVar20 = _objc_retainAutoreleasedReturnValue();

  local_e0 = uVar20;

  FUN_00292540(uVar10);

  uVar21 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar3);

  uVar22 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540();

  auVar29 = _objc_retainAutoreleasedReturnValue();

  FUN_00293460(uVar21,auVar29._8_8_,auVar29._0_8_);

  auVar30 = _objc_retainAutoreleasedReturnValue();

  local_d8 = auVar30._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar30._8_8_,&local_f0,4);

  auVar31 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar31._8_8_,auVar31._0_8_);

  _objc_release(auVar31._0_8_);

  _objc_release(auVar30._0_8_);

  _objc_release(auVar29._0_8_);

  _objc_release(uVar22);

  _objc_release(uVar21);

  _objc_release(uVar20);

  _objc_release(auVar28._0_8_);

  _objc_release(uVar19);

  _objc_release(uVar18);

  _objc_release(uVar17);

  _objc_release(uVar16);

  _objc_release(uVar15);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_setAssociatedObject(uVar3,"bubbleCollectionView",uVar10,1);

  _objc_setAssociatedObject(uVar3,"bubbleList",PTR____NSArray0__struct_00388308,1);

  FUN_002a6220(uVar3);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_002925e0(auVar28._0_8_,auVar28._8_8_,uVar5);

  _objc_release(auVar28._0_8_);

  FUN_002a6220(uVar3);

  auVar28 = _objc_retainAutoreleasedReturnValue();

  FUN_002925e0(auVar28._0_8_,auVar28._8_8_,uVar7);

  _objc_release(auVar28._0_8_);

  FUN_0029aa80(local_130,extraout_x1_12,uVar3,1);

  FUN_00295140(param_1,extraout_x1_13,uVar3);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(pcVar1);

  _objc_release(auVar27._0_8_);

  _objc_release(auVar26._0_8_);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar5);

  _objc_release(uVar6);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(local_168);

  _objc_release(lVar2);

  _objc_release(local_130);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




