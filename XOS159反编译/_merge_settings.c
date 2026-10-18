// XOS 1.5.9 message-merge targeted extraction: settings ui (23 functions)

// ==== xzy_buildHomeBottomBarSettingsPageWithStandaloneHost: @0x30a90 ====  [src: FUN_.c]


/* Function Stack Size: 0x14 bytes */



ID _0x2f19de29::xzy_buildHomeBottomBarSettingsPageWithStandaloneHost_

             (ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined1 auVar5 [16];

  

  if ((param_3 & 1) == 0) {

    _objc_retain();

  }

  else {

    param_1 = _objc_alloc_init(&objc::class_t::_0x2f19de29);

  }

  auVar5 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar5._0_8_;

  FUN_002a1f60(uVar1,auVar5._8_8_,&cf__Nu_h7h_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,0x3f5);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_0029dee0(uVar2,extraout_x1_04,1);

  FUN_0029cb40(uVar2,extraout_x1_05,1);

  FUN_002a6220(uVar1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  if (param_3 != 0) {

    FUN_002910c0(uVar1,extraout_x1_06,param_1);

    FUN_002945e0(param_1,extraout_x1_07,uVar1);

  }

  _objc_release(uVar2);

  _objc_release(param_1);

  IVar4 = _objc_autoreleaseReturnValue(uVar1);

  return IVar4;

}






// ==== showMsgMergeSettings @0x3c36c ====  [src: FUN_.c]


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::showMsgMergeSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar4 [16];

  

  auVar4 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar4._0_8_;

  FUN_002a1f60(uVar1,auVar4._8_8_,&cf_mo_Tv_);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar4._0_8_,auVar4._8_8_,uVar2);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296be0(uVar2,extraout_x1,2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1_00,0x12);

  FUN_002a1c80(uVar2,extraout_x1_01,0x3ea);

  FUN_0029dca0(uVar2,extraout_x1_02,param_1);

  FUN_0029db40(uVar2,extraout_x1_03,param_1);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_002a6220(uVar1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar4._0_8_,auVar4._8_8_,uVar2);

  _objc_release(auVar4._0_8_);

  FUN_002990e0(param_1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar4._0_8_,auVar4._8_8_,uVar1,1);

  _objc_release(auVar4._0_8_);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}






// ==== xzyDesiredFrame @0x1079a4 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



CGRect XZYPinnedTimeLabel::xzyDesiredFrame(ID param_1,SEL param_2)



{

  return *(CGRect *)(param_1 + (long)_xzyDesiredFrame);

}






// ==== setXzyDesiredFrame: @0x1079bc ====  [src: FUN__part3.c]


/* Function Stack Size: 0x30 bytes */



void XZYPinnedTimeLabel::setXzyDesiredFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  double *pdVar1;

  

  pdVar1 = (double *)(param_1 + (long)_xzyDesiredFrame);

  *pdVar1 = param_3.field0_0x0.field0_0x0;

  pdVar1[1] = param_3.field0_0x0.field1_0x8;

  pdVar1[2] = param_3.field1_0x10.field0_0x0;

  pdVar1[3] = param_3.field1_0x10.field1_0x8;

  return;

}






// ==== xzy_loadImages @0x11c7a8 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_loadImages(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  long lVar6;

  undefined8 uVar7;

  long lVar8;

  undefined1 auVar9 [16];

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

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec60(param_1,auVar9._8_8_,auVar9._0_8_);

  _objc_release(auVar9._0_8_);

  _NSHomeDirectory();

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar9._0_8_,auVar9._8_8_,&cf_Documents_CoverRes_nameplate);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00293660(auVar9._0_8_,auVar9._8_8_,uVar2,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar9._0_8_);

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  _objc_retain(uVar3);

  lVar4 = FUN_00293880(uVar3,extraout_x1,&local_130,auStack_f0,0x10);

  if (lVar4 != 0) {

    lVar8 = *local_120;

    do {

      lVar6 = 0;

      do {

        if (*local_120 != lVar8) {

          _objc_enumerationMutation(uVar3);

        }

        uVar7 = *(undefined8 *)(lStack_128 + lVar6 * 8);

        FUN_00299b20(uVar7);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        FUN_002984e0();

        auVar9 = _objc_retainAutoreleasedReturnValue();

        iVar1 = FUN_00293560(&PTR__OBJC_CLASS___NSConstantArray_003be200,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        _objc_release(uVar5);

        uVar5 = extraout_x1_00;

        if (iVar1 != 0) {

          FUN_002964e0(param_1);

          auVar9 = _objc_retainAutoreleasedReturnValue();

          FUN_00291240(auVar9._0_8_,auVar9._8_8_,uVar7);

          _objc_release(auVar9._0_8_);

          uVar5 = extraout_x1_01;

        }

        lVar6 = lVar6 + 1;

      } while (lVar4 != lVar6);

      lVar4 = FUN_00293880(uVar3,uVar5,&local_130,auStack_f0,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar3);

  FUN_002964e0(param_1);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a3f00(auVar9._0_8_,auVar9._8_8_,"localizedCaseInsensitiveCompare:");

  _objc_release(auVar9._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}






// ==== xzy_addSettingRow:atIndex:title:detail:width:height:tag: @0x11e7c4 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x48 bytes */



void XZYHomeNPPickerVC::xzy_addSettingRow_atIndex_title_detail_width_height_tag_

               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,

               double param_7,double param_8,long_long param_9)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar6 [16];

  undefined1 auVar7 [16];

  

  _objc_retain(param_3);

  _objc_retain(param_5);

  _objc_retain(param_6);

  _objc_alloc(&_OBJC_CLASS___UIView);

  auVar6 = FUN_00296b80(0,param_8 * (double)(long)param_4,param_7,param_8);

  uVar1 = auVar6._0_8_;

  FUN_002a1c80(uVar1,auVar6._8_8_,param_9);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar6 = FUN_00296b80(0x4030000000000000,0,param_7 * 0.4,param_8);

  uVar2 = auVar6._0_8_;

  FUN_002a1d60(uVar2,auVar6._8_8_,param_5);

  FUN_002a4aa0(0x4030000000000000,&_OBJC_CLASS___UIFont);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar2,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_00291380(uVar1,extraout_x1,uVar2);

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar6 = FUN_00296b80(param_7 * 0.4,0,param_7 * 0.5 + -16.0,param_8);

  uVar3 = auVar6._0_8_;

  FUN_002a1d60(uVar3,auVar6._8_8_,param_6);

  FUN_002a4aa0(0x402e000000000000,&_OBJC_CLASS___UIFont);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar3,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_002a1d80(uVar3,extraout_x1_00,2);

  FUN_00291380(uVar1,extraout_x1_01,uVar3);

  auVar6 = _objc_alloc(&_OBJC_CLASS___UIImageView);

  FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar6._8_8_,&cf_chevron_right);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_00296c40(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);

  _objc_release(auVar7._0_8_);

  FUN_002a4fc0(&_OBJC_CLASS___UIColor);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(uVar4,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  FUN_002a3de0(uVar4);

  FUN_0029d320(param_7 + -16.0,param_8 * 0.5,uVar4);

  FUN_00291380(uVar1,extraout_x1_02,uVar4);

  if ((long)param_4 < 3) {

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar5 = FUN_00296b80(0x4030000000000000,param_8 + -0.5,param_7 + -16.0,0x3fe0000000000000);

    FUN_0029c620(&_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar5,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    FUN_00291380(uVar1,extraout_x1_03,uVar5);

    _objc_release(uVar5);

  }

  auVar6 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

  auVar6 = FUN_00296f20(auVar6._0_8_,auVar6._8_8_,param_1,"xzy_settingRowTapped:");

  FUN_00291140(uVar1,auVar6._8_8_,auVar6._0_8_);

  FUN_00291380(param_3,extraout_x1_04,uVar1);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_6);

  _objc_release(param_5);

  _objc_release(param_3);

  return;

}






// ==== xzy_settingRowTapped: @0x11ebd4 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x18 bytes */



void XZYHomeNPPickerVC::xzy_settingRowTapped_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  _objc_retain(param_3);

  FUN_002a6220(param_3);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_002a4e60();

  _objc_release(uVar1);

  if (lVar2 < 0x66) {

    if (lVar2 == 100) {

      FUN_002a6820(param_1);

    }

    else if (lVar2 == 0x65) {

      FUN_002a67e0(param_1);

    }

  }

  else {

    if (lVar2 == 0x66) {

      FUN_002a4f80(param_1);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar4._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_xzyHomeNP____OffsetX);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar4._0_8_;

      FUN_002a6800(param_1,auVar4._8_8_,&cf_X,uVar3);

    }

    else {

      if (lVar2 != 0x67) goto LAB_0011ed10;

      FUN_002a4f80(param_1);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar1 = auVar4._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar4._8_8_,&cf_xzyHomeNP____OffsetY);

      auVar4 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar4._0_8_;

      FUN_002a6800(param_1,auVar4._8_8_,&cf_Y,uVar3);

    }

    _objc_release(uVar3);

    _objc_release(uVar1);

  }

LAB_0011ed10:

  _objc_release(param_3);

  return;

}






// ==== xzy_ensurePerUserSettingsExist @0x11ed70 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_ensurePerUserSettingsExist(ID param_1,SEL param_2)



{

  double dVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Position);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_00299520(uVar2,extraout_x1,uVar3);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar4 == 0) {

    FUN_0011efd4();

    FUN_0029efa0(uVar2,extraout_x1_00,DAT_003e8358,uVar3);

    dVar1 = DAT_003e8360;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    dVar1 = DAT_003e8368;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetX);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    dVar1 = DAT_003e8370;

    FUN_002a4f80(param_1);

    auVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetY);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e500((float)dVar1,uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    _objc_release(auVar5._0_8_);

    FUN_002a4a40(uVar2);

  }

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}






// ==== xzy_showPositionPicker @0x11f1cc ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_showPositionPicker(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  long lVar3;

  undefined1 auVar4 [16];

  undefined *local_d0;

  undefined8 local_c8;

  code *local_c0;

  undefined *puStack_b8;

  undefined1 auStack_b0 [8];

  undefined *local_a8;

  undefined8 local_a0;

  code *local_98;

  undefined *puStack_90;

  undefined1 auStack_88 [8];

  long local_80;

  undefined1 auStack_78 [8];

  

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_LrMOn_,0,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_78,param_1);

  local_d0 = PTR___NSConcreteStackBlock_003886f0;

  lVar3 = 0;

  while( true ) {

    auVar4 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003be230);

    if (auVar4._0_8_ <= lVar3) break;

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003be230,auVar4._8_8_,lVar3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_a8 = local_d0;

    local_a0 = 0xc2000000;

    local_98 = FUN_0011f44c;

    puStack_90 = &DAT_0038cb28;

    _objc_copyWeak(auStack_88,auStack_78);

    local_80 = lVar3;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar2,0,&local_a8);

    auVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

    _objc_release(auVar4._0_8_);

    _objc_release(uVar2);

    _objc_destroyWeak(auStack_88);

    lVar3 = lVar3 + 1;

  }

  local_c8 = 0xc2000000;

  local_c0 = FUN_0011f5cc;

  puStack_b8 = &DAT_00389250;

  _objc_copyWeak(auStack_b0,auStack_78);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_n__NhQ__,2,&local_d0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar1,1,0);

  _objc_destroyWeak(auStack_b0);

  _objc_destroyWeak(auStack_78);

  _objc_release(uVar1);

  return;

}






// ==== xzy_showHeightInput @0x11f60c ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_showHeightInput(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar4;

  undefined1 auVar5 [16];

  undefined *local_b8;

  undefined8 local_b0;

  code *local_a8;

  undefined *puStack_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined1 auStack_88 [8];

  undefined1 auStack_80 [8];

  undefined *local_78;

  undefined8 local_70;

  code *local_68;

  undefined *puStack_60;

  double local_58;

  

  FUN_002a6760();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  fVar4 = (float)FUN_00295460(auVar5._0_8_,auVar5._8_8_,uVar2);

  _objc_release(auVar5._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_Lr_Y_,&cf_eQ_0,1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar3 = auVar5._0_8_;

  local_58 = (double)fVar4;

  local_78 = PTR___NSConcreteStackBlock_003886f0;

  local_70 = 0xc0000000;

  local_68 = FUN_0011f8c0;

  puStack_60 = &DAT_00389000;

  FUN_00291400(uVar3,auVar5._8_8_,&local_78);

  _objc_initWeak(auStack_80,param_1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  local_b8 = puVar1;

  local_b0 = 0xc2000000;

  local_a8 = FUN_0011f968;

  puStack_a0 = &DAT_0038ca98;

  _objc_retain(uVar3);

  local_98 = uVar3;

  _objc_retain(uVar2);

  local_90 = uVar2;

  _objc_copyWeak(auStack_88,auStack_80);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_b8);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar5._8_8_,auVar5._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar3,1,0);

  _objc_destroyWeak(auStack_88);

  _objc_release(local_90);

  _objc_release(local_98);

  _objc_destroyWeak(auStack_80);

  _objc_release(uVar3);

  _objc_release(uVar2);

  return;

}






// ==== xzy_showOffsetInput:key: @0x11fac8 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x20 bytes */



void XZYHomeNPPickerVC::xzy_showOffsetInput_key_(ID param_1,SEL param_2,ID param_3,ID param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  float fVar3;

  undefined1 auVar4 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  ID local_a0;

  undefined1 auStack_98 [8];

  undefined1 auStack_90 [8];

  undefined *local_88;

  undefined8 local_80;

  code *local_78;

  undefined *puStack_70;

  double local_68;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  FUN_002a6760(param_1);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  fVar3 = (float)FUN_00295460(auVar4._0_8_,auVar4._8_8_,param_4);

  _objc_release(auVar4._0_8_);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,param_3,&cf_eQOPy<P_ecpe,1);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  uVar2 = auVar4._0_8_;

  local_68 = (double)fVar3;

  local_88 = PTR___NSConcreteStackBlock_003886f0;

  local_80 = 0xc0000000;

  local_78 = FUN_0011fd60;

  puStack_70 = &DAT_00389000;

  FUN_00291400(uVar2,auVar4._8_8_,&local_88);

  _objc_initWeak(auStack_90,param_1);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_00,&cf_Sm,1,0);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  local_c8 = puVar1;

  local_c0 = 0xc2000000;

  local_b8 = FUN_0011fe08;

  puStack_b0 = &DAT_0038ca98;

  _objc_retain(uVar2);

  local_a8 = uVar2;

  _objc_retain(param_4);

  local_a0 = param_4;

  _objc_copyWeak(auStack_98,auStack_90);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,&cf_nx_,0,&local_c8);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  FUN_0029a500(param_1,extraout_x1_02,uVar2,1,0);

  _objc_destroyWeak(auStack_98);

  _objc_release(local_a0);

  _objc_release(local_a8);

  _objc_destroyWeak(auStack_90);

  _objc_release(uVar2);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}






// ==== xzy_removePerUserSettings @0x11ff6c ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_removePerUserSettings(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  undefined1 auVar4 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____Position);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____Height);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____OffsetX);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4f80(param_1);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar3._8_8_,&cf_xzyHomeNP____OffsetY);

  auVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar4._8_8_,auVar4._0_8_);

  _objc_release(auVar4._0_8_);

  _objc_release(auVar3._0_8_);

  FUN_002a4a40(uVar1);

  FUN_0029b240(DAT_003e8348);

  FUN_00292f00(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}






// ==== xzy_updateClearButton @0x120194 ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_updateClearButton(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Light);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002a4f80(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_xzyHomeNP____Dark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002a45e0(uVar1,extraout_x1,uVar2);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  if (auVar7._0_8_ == 0) {

    FUN_002a45e0(uVar1,auVar7._8_8_,uVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) {

      FUN_00299140(param_1);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar7._0_8_;

      FUN_002a0dc0(uVar5,auVar7._8_8_,0);

      goto LAB_00120338;

    }

  }

  else {

    _objc_release();

  }

  auVar7 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);

  uVar5 = FUN_00296f40(auVar7._0_8_,auVar7._8_8_,&cf_nd,0,param_1,"xzy_clear");

  FUN_00299140(param_1);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar7._0_8_,auVar7._8_8_,uVar5);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar5);

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299140(param_1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ba80();

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar7._0_8_,auVar7._8_8_,uVar5);

  _objc_release(auVar7._0_8_);

  _objc_release(uVar6);

LAB_00120338:

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}






// ==== xzy_dismiss @0x12041c ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_dismiss(ID param_1,SEL param_2)



{

  long lVar1;

  undefined8 uVar2;

  

  FUN_00294700(param_1,param_2,1,0);

  FUN_00298820(param_1);

  lVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (lVar1 != 0) {

    FUN_00298820(param_1);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_0029b140();

    _objc_release(uVar2);

    return;

  }

  return;

}






// ==== xzy_clear @0x12049c ====  [src: FUN__part3.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeNPPickerVC::xzy_clear(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  undefined1 auVar6 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Light);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Dark);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar5._0_8_);

  FUN_0029b4a0(uVar1,extraout_x1,uVar2);

  FUN_0029b4a0(uVar1,extraout_x1_00,uVar3);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Position);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____Height);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetX);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4f80(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar5._8_8_,&cf_xzyHomeNP____OffsetY);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b4a0(uVar1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(auVar5._0_8_);

  FUN_002a4a40(uVar1);

  FUN_0029b240(DAT_003e8340);

  FUN_0029b240(DAT_003e8348);

  FUN_00292f00(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar4);

  FUN_00299140(param_1);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a0dc0(auVar5._0_8_,auVar5._8_8_,0);

  _objc_release(auVar5._0_8_);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}






// ==== xzy_handleTap @0x2340e4 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockButton::xzy_handleTap(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined *local_48;

  undefined8 local_40;

  code *local_38;

  undefined *puStack_30;

  long local_28;

  

  FUN_002a6840();

  lVar1 = _objc_retainAutoreleasedReturnValue();

  if (lVar1 != 0) {

    lVar2 = FUN_002a6860(param_1);

    if (lVar2 == -2) {

      FUN_00234210(lVar1);

    }

    else {

      lVar2 = FUN_002a6860(param_1);

      if (lVar2 < 0) {

        uVar3 = FUN_002a6860(param_1);

        FUN_002359e4(lVar1,uVar3);

      }

      else {

        if ((99 < DAT_003e7298) || (DAT_003e7298 == 3)) {

          FUN_00233ea8(param_1);

        }

        uVar3 = FUN_002a6860(param_1);

        FUN_00233b10(lVar1,uVar3);

        FUN_00235cf4(lVar1);

        FUN_0029ff40(lVar1);

        local_48 = PTR___NSConcreteStackBlock_003886f0;

        local_40 = 0xc2000000;

        local_38 = FUN_0023618c;

        puStack_30 = &DAT_00388e60;

        _objc_retain(lVar1);

        local_28 = lVar1;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_48);

        _objc_release(local_28);

      }

    }

  }

  _objc_release(lVar1);

  return;

}






// ==== xzy_handleLongPress: @0x2361b4 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockButton::xzy_handleLongPress_(ID param_1,SEL param_2,ID param_3)



{

  ulong uVar1;

  uint uVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined1 auVar7 [16];

  undefined *local_58;

  undefined8 local_50;

  code *local_48;

  undefined *puStack_40;

  long local_38;

  

  _objc_retain(param_3);

  lVar3 = FUN_002a4240(param_3);

  if ((lVar3 != 1) || (lVar3 = FUN_002a6860(param_1), lVar3 != -2)) goto LAB_00236398;

  FUN_002a6840(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  if (lVar3 != 0) {

    if ((long)DAT_003e7298 < 100) {

      if (DAT_003e7298 == 3) goto LAB_0023624c;

    }

    else {

      FUN_0023d02c(lVar3);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 != 0) {

LAB_0023624c:

        FUN_00235cf4(lVar3);

        uVar1 = DAT_003e7298;

        if (2 < DAT_003e7298 - 2 && (long)DAT_003e7298 < 100) {

          uVar1 = 1;

        }

        FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        uVar5 = auVar7._0_8_;

        if (uVar1 < 100) {

          DAT_003eb268 = (DAT_003eb268 ^ 0xff) & 1;

          FUN_0029d080(uVar5,auVar7._8_8_,DAT_003eb268,&cf_xzyHomeBottomBarFloatingMenuSpread);

        }

        else {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar7._8_8_,&cf_____ld);

          auVar7 = _objc_retainAutoreleasedReturnValue();

          uVar6 = auVar7._0_8_;

          uVar2 = FUN_002924c0(uVar5,auVar7._8_8_,uVar6);

          FUN_0029d080(uVar5,extraout_x1,uVar2 ^ 1,uVar6);

          _objc_release(uVar6);

        }

        FUN_0029ff40(lVar3);

        local_58 = PTR___NSConcreteStackBlock_003886f0;

        local_50 = 0xc2000000;

        local_48 = FUN_002427e0;

        puStack_40 = &DAT_00388e60;

        _objc_retain(lVar3);

        local_38 = lVar3;

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_58);

        auVar7 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);

        uVar6 = FUN_00296ea0(auVar7._0_8_,auVar7._8_8_,0);

        FUN_00296680();

        _objc_release(uVar6);

        _objc_release(local_38);

        _objc_release(uVar5);

      }

    }

  }

  _objc_release(lVar3);

  _objc_release(lVar3);

LAB_00236398:

  _objc_release(param_3);

  return;

}






// ==== xzy_tabBar @0x23642c ====  [src: FUN__part5.c]


/* Function Stack Size: 0x10 bytes */



ID XZYHomeDockButton::xzy_tabBar(ID param_1,SEL param_2)



{

  ID IVar1;

  

  _objc_loadWeakRetained(param_1 + (long)_xzy_tabBar);

  IVar1 = _objc_autoreleaseReturnValue();

  return IVar1;

}






// ==== setXzy_tabBar: @0x23644c ====  [src: FUN__part5.c]


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockButton::setXzy_tabBar_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_xzy_tabBar,param_3);

  return;

}






// ==== xzy_tabIndex @0x236460 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x10 bytes */



long_long XZYHomeDockButton::xzy_tabIndex(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + (long)_xzy_tabIndex);

}






// ==== setXzy_tabIndex: @0x236470 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockButton::setXzy_tabIndex_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_xzy_tabIndex) = param_3;

  return;

}






// ==== xzy_actionId @0x236480 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x10 bytes */



ID XZYHomeDockButton::xzy_actionId(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_xzy_actionId);

}






// ==== setXzy_actionId: @0x236490 ====  [src: FUN__part5.c]


/* Function Stack Size: 0x18 bytes */



void XZYHomeDockButton::setXzy_actionId_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy();

  return;

}





