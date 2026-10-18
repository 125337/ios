// showColorSelectionAlertForType: @0xf69d8


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::showColorSelectionAlertForType_

               (ID param_1,SEL param_2,ID param_3)



{

  cfstringStruct *pcVar1;

  int iVar2;

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

  long lVar13;

  long lVar14;

  double in_d2;

  double in_d3;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  undefined *local_2e8;

  undefined8 local_2e0;

  code *local_2d8;

  undefined *puStack_2d0;

  ID local_2c8;

  ID IStack_2c0;

  undefined8 local_2b8;

  undefined8 local_2b0;

  long lStack_2a8;

  long *local_2a0;

  undefined8 uStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined1 auStack_268 [128];

  cfstringStruct *local_1e8;

  cfstringStruct *local_1e0;

  cfstringStruct *pcStack_1d8;

  undefined8 local_1d0;

  cfstringStruct *local_1c8;

  cfstringStruct *local_1c0;

  cfstringStruct *pcStack_1b8;

  undefined8 local_1b0;

  cfstringStruct *local_1a8;

  cfstringStruct *local_1a0;

  cfstringStruct *pcStack_198;

  undefined8 local_190;

  cfstringStruct *local_188;

  cfstringStruct *local_180;

  cfstringStruct *pcStack_178;

  undefined8 local_170;

  cfstringStruct *local_168;

  cfstringStruct *local_160;

  cfstringStruct *pcStack_158;

  undefined8 local_150;

  cfstringStruct *local_148;

  cfstringStruct *local_140;

  cfstringStruct *local_138;

  undefined8 local_130;

  cfstringStruct *local_128;

  cfstringStruct *local_120;

  cfstringStruct *local_118;

  undefined8 local_110;

  cfstringStruct *local_108;

  cfstringStruct *local_100;

  cfstringStruct *pcStack_f8;

  undefined8 local_f0;

  cfstringStruct *local_e8;

  cfstringStruct *local_e0;

  cfstringStruct *pcStack_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  iVar2 = FUN_00297820(param_3,extraout_x1,&cf_border);

  pcVar1 = &cf_bFhr;

  if (iVar2 == 0) {

    pcVar1 = &cf_bSIQr;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,pcVar1,&cf_b,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_e8 = &cf_name;

  local_e0 = &cf_color;

  pcStack_d8 = &cf___r;

  FUN_002a4a80(&_OBJC_CLASS___UIColor);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  local_d0 = auVar15._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar15._8_8_,&pcStack_d8,&local_e8,2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_100 = &cf_color;

  pcStack_f8 = &cf____r;

  local_108 = &cf_name;

  local_c8 = uVar4;

  FUN_002a4b80(&_OBJC_CLASS___UIColor);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  local_f0 = auVar16._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar16._8_8_,&pcStack_f8,&local_108,2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_118 = &cf____r;

  local_128 = &cf_name;

  local_120 = &cf_color;

  local_c0 = uVar5;

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  local_110 = auVar17._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar17._8_8_,&local_118,&local_128,2);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_138 = &cf___Yjr;

  local_148 = &cf_name;

  local_140 = &cf_color;

  local_b8 = uVar6;

  FUN_002a4c40(&_OBJC_CLASS___UIColor);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  local_130 = auVar18._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar18._8_8_,&local_138,&local_148,2);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_160 = &cf_color;

  pcStack_158 = &cf_____r;

  local_168 = &cf_name;

  local_b0 = uVar7;

  FUN_002a4ca0(&_OBJC_CLASS___UIColor);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  local_150 = auVar19._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar19._8_8_,&pcStack_158,&local_168,2);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_180 = &cf_color;

  pcStack_178 = &cf____r;

  local_188 = &cf_name;

  local_a8 = uVar8;

  FUN_002a4c60(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  local_170 = auVar20._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar20._8_8_,&pcStack_178,&local_188,2);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_1a0 = &cf_color;

  pcStack_198 = &cf___r;

  local_1a8 = &cf_name;

  local_a0 = uVar9;

  FUN_002a4d00(&_OBJC_CLASS___UIColor);

  auVar21 = _objc_retainAutoreleasedReturnValue();

  local_190 = auVar21._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar21._8_8_,&pcStack_198,&local_1a8,2);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_1c0 = &cf_color;

  pcStack_1b8 = &cf___Rr;

  local_1c8 = &cf_name;

  local_98 = uVar10;

  FUN_002a4ce0(&_OBJC_CLASS___UIColor);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  local_1b0 = auVar22._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar22._8_8_,&pcStack_1b8,&local_1c8,2);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_1e0 = &cf_color;

  pcStack_1d8 = &cf____r;

  local_1e8 = &cf_name;

  local_90 = uVar11;

  FUN_002a4c00(&_OBJC_CLASS___UIColor);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  local_1d0 = auVar23._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar23._8_8_,&pcStack_1d8,&local_1e8,2);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  local_88 = auVar24._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar24._8_8_,&local_c8,9);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar24._0_8_);

  _objc_release(auVar23._0_8_);

  _objc_release(uVar11);

  _objc_release(auVar22._0_8_);

  _objc_release(uVar10);

  _objc_release(auVar21._0_8_);

  _objc_release(uVar9);

  _objc_release(auVar20._0_8_);

  _objc_release(uVar8);

  _objc_release(auVar19._0_8_);

  _objc_release(uVar7);

  _objc_release(auVar18._0_8_);

  _objc_release(uVar6);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar5);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar4);

  _objc_release(auVar15._0_8_);

  uStack_288 = 0;

  local_290 = 0;

  uStack_278 = 0;

  uStack_280 = 0;

  lStack_2a8 = 0;

  local_2b0 = 0;

  uStack_298 = 0;

  local_2a0 = (long *)0x0;

  _objc_retain(uVar12);

  auVar15 = FUN_00293880(uVar12,extraout_x1_01,&local_2b0,auStack_268,0x10);

  if (auVar15._0_8_ != 0) {

    lVar13 = *local_2a0;

    do {

      uVar4 = auVar15._8_8_;

      lVar14 = 0;

      do {

        if (*local_2a0 != lVar13) {

          _objc_enumerationMutation(uVar12);

          uVar4 = extraout_x1_02;

        }

        uVar5 = *(undefined8 *)(lStack_2a8 + lVar14 * 8);

        FUN_00299540(uVar5,uVar4,&cf_name);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        local_2e8 = PTR___NSConcreteStackBlock_003886f0;

        local_2e0 = 0xc2000000;

        local_2d8 = FUN_000f70c4;

        puStack_2d0 = &DAT_0038c1e0;

        _objc_retain(param_3);

        local_2c8 = param_3;

        IStack_2c0 = param_1;

        local_2b8 = uVar5;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,uVar4,0,&local_2e8);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release(uVar4);

        FUN_00290fe0(uVar3,extraout_x1_04,uVar5);

        _objc_release(uVar5);

        _objc_release(local_2c8);

        lVar14 = lVar14 + 1;

        uVar4 = extraout_x1_05;

      } while (auVar15._0_8_ != lVar14);

      auVar15 = FUN_00293880(uVar12,extraout_x1_05,&local_2b0,auStack_268,0x10);

    } while (auVar15._0_8_ != 0);

  }

  _objc_release(uVar12);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_06,&cf_Sm,1,0);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar15._8_8_,auVar15._0_8_);

  FUN_00293c60(&_OBJC_CLASS___UIDevice);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar13 = FUN_002a5fa0();

  _objc_release(uVar4);

  uVar4 = extraout_x1_07;

  if (lVar13 == 1) {

    FUN_002a6220(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a0a0(uVar3);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar16._0_8_,auVar16._8_8_,uVar4);

    _objc_release(auVar16._0_8_);

    _objc_release(uVar4);

    FUN_002a6220(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_002a6220(param_1);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029a0a0(uVar3);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(in_d2 * 0.5,in_d3 * 0.5,0x3ff0000000000000,0x3ff0000000000000);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar4);

    uVar4 = extraout_x1_08;

  }

  FUN_0029a500(param_1,uVar4,uVar3,1,0);

  _objc_release(auVar15._0_8_);

  _objc_release(uVar12);

  _objc_release(uVar3);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




