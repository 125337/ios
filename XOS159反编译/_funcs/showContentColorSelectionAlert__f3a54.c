// showContentColorSelectionAlert @0xf3a54


/* Function Stack Size: 0x10 bytes */



void BannerNotifyBeautifyViewController::showContentColorSelectionAlert(ID param_1,SEL param_2)



{

  undefined *puVar1;

  undefined8 uVar2;

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

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar14;

  long lVar15;

  double in_d2;

  double in_d3;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  undefined1 auVar20 [16];

  undefined1 auVar21 [16];

  undefined1 auVar22 [16];

  undefined1 auVar23 [16];

  undefined1 auVar24 [16];

  undefined1 auVar25 [16];

  undefined1 auVar26 [16];

  undefined1 auVar27 [16];

  undefined *local_330;

  undefined8 local_328;

  code *local_320;

  undefined *puStack_318;

  ID local_310;

  undefined8 uStack_308;

  undefined8 local_300;

  long lStack_2f8;

  long *local_2f0;

  undefined8 uStack_2e8;

  undefined8 local_2e0;

  undefined8 uStack_2d8;

  undefined8 uStack_2d0;

  undefined8 uStack_2c8;

  undefined1 auStack_2b8 [128];

  cfstringStruct *local_238;

  cfstringStruct *local_230;

  cfstringStruct *pcStack_228;

  undefined8 local_220;

  cfstringStruct *local_218;

  cfstringStruct *local_210;

  cfstringStruct *pcStack_208;

  undefined8 local_200;

  cfstringStruct *local_1f8;

  cfstringStruct *local_1f0;

  cfstringStruct *pcStack_1e8;

  undefined8 local_1e0;

  cfstringStruct *local_1d8;

  cfstringStruct *local_1d0;

  cfstringStruct *pcStack_1c8;

  undefined8 local_1c0;

  cfstringStruct *local_1b8;

  cfstringStruct *pcStack_1b0;

  cfstringStruct *local_1a8;

  undefined8 local_1a0;

  cfstringStruct *local_198;

  cfstringStruct *local_190;

  cfstringStruct *local_188;

  undefined8 local_180;

  cfstringStruct *local_178;

  cfstringStruct *local_170;

  cfstringStruct *local_168;

  undefined8 local_160;

  cfstringStruct *local_158;

  cfstringStruct *local_150;

  cfstringStruct *local_148;

  undefined8 local_140;

  cfstringStruct *local_138;

  cfstringStruct *local_130;

  cfstringStruct *local_128;

  undefined8 local_120;

  cfstringStruct *local_118;

  cfstringStruct *local_110;

  cfstringStruct *local_108;

  undefined8 local_100;

  cfstringStruct *local_f8;

  cfstringStruct *local_f0;

  cfstringStruct *pcStack_e8;

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

  undefined8 local_90;

  undefined8 local_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00291580(&_OBJC_CLASS___UIAlertController,param_2,&cf_bQ_r,&cf_b,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_f8 = &cf_name;

  local_f0 = &cf_color;

  pcStack_e8 = &cf___r;

  FUN_002a4a80(&_OBJC_CLASS___UIColor);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  local_e0 = auVar16._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar16._8_8_,&pcStack_e8,&local_f8,2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_108 = &cf____r;

  local_118 = &cf_name;

  local_110 = &cf_color;

  local_d8 = uVar3;

  FUN_002a4b80(&_OBJC_CLASS___UIColor);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  local_100 = auVar17._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar17._8_8_,&local_108,&local_118,2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_128 = &cf____r;

  local_138 = &cf_name;

  local_130 = &cf_color;

  local_d0 = uVar4;

  FUN_002a4cc0(&_OBJC_CLASS___UIColor);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  local_120 = auVar18._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar18._8_8_,&local_128,&local_138,2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_148 = &cf___Yjr;

  local_158 = &cf_name;

  local_150 = &cf_color;

  local_c8 = uVar5;

  FUN_002a4c40(&_OBJC_CLASS___UIColor);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  local_140 = auVar19._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar19._8_8_,&local_148,&local_158,2);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_168 = &cf_____r;

  local_178 = &cf_name;

  local_170 = &cf_color;

  local_c0 = uVar6;

  FUN_002a4ca0(&_OBJC_CLASS___UIColor);

  auVar20 = _objc_retainAutoreleasedReturnValue();

  local_160 = auVar20._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar20._8_8_,&local_168,&local_178,2);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_188 = &cf____r;

  local_198 = &cf_name;

  local_190 = &cf_color;

  local_b8 = uVar7;

  FUN_002a4c60(&_OBJC_CLASS___UIColor);

  auVar21 = _objc_retainAutoreleasedReturnValue();

  local_180 = auVar21._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar21._8_8_,&local_188,&local_198,2);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_1a8 = &cf___r;

  local_1b8 = &cf_name;

  pcStack_1b0 = &cf_color;

  local_b0 = uVar8;

  FUN_002a4d00(&_OBJC_CLASS___UIColor);

  auVar22 = _objc_retainAutoreleasedReturnValue();

  local_1a0 = auVar22._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar22._8_8_,&local_1a8,&local_1b8,2);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  local_1d0 = &cf_color;

  pcStack_1c8 = &cf___Rr;

  local_1d8 = &cf_name;

  local_a8 = uVar9;

  FUN_002a4ce0(&_OBJC_CLASS___UIColor);

  auVar23 = _objc_retainAutoreleasedReturnValue();

  local_1c0 = auVar23._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar23._8_8_,&pcStack_1c8,&local_1d8,2);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  local_1f0 = &cf_color;

  pcStack_1e8 = &cf____r;

  local_1f8 = &cf_name;

  local_a0 = uVar10;

  FUN_002a4c00(&_OBJC_CLASS___UIColor);

  auVar24 = _objc_retainAutoreleasedReturnValue();

  local_1e0 = auVar24._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar24._8_8_,&pcStack_1e8,&local_1f8,2);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_210 = &cf_color;

  pcStack_208 = &cf_r;

  local_218 = &cf_name;

  local_98 = uVar11;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar25 = _objc_retainAutoreleasedReturnValue();

  local_200 = auVar25._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar25._8_8_,&pcStack_208,&local_218,2);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  local_230 = &cf_color;

  pcStack_228 = &cf__vr;

  local_238 = &cf_name;

  local_90 = uVar12;

  FUN_002a64a0(&_OBJC_CLASS___UIColor);

  auVar26 = _objc_retainAutoreleasedReturnValue();

  local_220 = auVar26._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar26._8_8_,&pcStack_228,&local_238,2);

  auVar27 = _objc_retainAutoreleasedReturnValue();

  local_88 = auVar27._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar27._8_8_,&local_d8,0xb);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar27._0_8_);

  _objc_release(auVar26._0_8_);

  _objc_release(uVar12);

  _objc_release(auVar25._0_8_);

  _objc_release(uVar11);

  _objc_release(auVar24._0_8_);

  _objc_release(uVar10);

  _objc_release(auVar23._0_8_);

  _objc_release(uVar9);

  _objc_release(auVar22._0_8_);

  _objc_release(uVar8);

  _objc_release(auVar21._0_8_);

  _objc_release(uVar7);

  _objc_release(auVar20._0_8_);

  _objc_release(uVar6);

  _objc_release(auVar19._0_8_);

  _objc_release(uVar5);

  _objc_release(auVar18._0_8_);

  _objc_release(uVar4);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar3);

  _objc_release(auVar16._0_8_);

  uStack_2d8 = 0;

  local_2e0 = 0;

  uStack_2c8 = 0;

  uStack_2d0 = 0;

  lStack_2f8 = 0;

  local_300 = 0;

  uStack_2e8 = 0;

  local_2f0 = (long *)0x0;

  _objc_retain(uVar13);

  auVar16 = FUN_00293880(uVar13,extraout_x1,&local_300,auStack_2b8,0x10);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  if (auVar16._0_8_ != 0) {

    lVar15 = *local_2f0;

    do {

      uVar3 = auVar16._8_8_;

      lVar14 = 0;

      do {

        if (*local_2f0 != lVar15) {

          _objc_enumerationMutation(uVar13);

          uVar3 = extraout_x1_00;

        }

        uVar4 = *(undefined8 *)(lStack_2f8 + lVar14 * 8);

        FUN_00299540(uVar4,uVar3,&cf_name);

        auVar17 = _objc_retainAutoreleasedReturnValue();

        local_330 = puVar1;

        local_328 = 0xc2000000;

        local_320 = FUN_000f41b4;

        puStack_318 = &DAT_0038c1b0;

        local_310 = param_1;

        uStack_308 = uVar4;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar17._8_8_,auVar17._0_8_,0,&local_330);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_release(auVar17._0_8_);

        FUN_00290fe0(uVar2,extraout_x1_01,uVar3);

        _objc_release(uVar3);

        lVar14 = lVar14 + 1;

        uVar3 = extraout_x1_02;

      } while (auVar16._0_8_ != lVar14);

      auVar16 = FUN_00293880(uVar13,extraout_x1_02,&local_300,auStack_2b8,0x10);

    } while (auVar16._0_8_ != 0);

  }

  _objc_release(uVar13);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_03,&cf_Sm,1,0);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar16._8_8_,auVar16._0_8_);

  FUN_00293c60(&_OBJC_CLASS___UIDevice);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar15 = FUN_002a5fa0();

  _objc_release(uVar3);

  uVar3 = extraout_x1_04;

  if (lVar15 == 1) {

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a0a0(uVar2);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar17._0_8_,auVar17._8_8_,uVar3);

    _objc_release(auVar17._0_8_);

    _objc_release(uVar3);

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_002a6220(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029a0a0(uVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(in_d2 * 0.5,in_d3 * 0.5,0x3ff0000000000000,0x3ff0000000000000);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    uVar3 = extraout_x1_05;

  }

  FUN_0029a500(param_1,uVar3,uVar2,1,0);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar13);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




