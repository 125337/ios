// showSubPackagesForBubble: @0x425e4


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::showSubPackagesForBubble_(ID param_1,SEL param_2,ID param_3)



{

  byte bVar1;

  int iVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

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

  ulong uVar23;

  undefined8 uVar24;

  undefined8 uVar25;

  undefined8 uVar26;

  undefined8 uVar27;

  long lVar28;

  undefined8 uVar29;

  undefined8 uVar30;

  undefined8 uVar31;

  undefined8 uVar32;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar33;

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

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  undefined8 extraout_x1_22;

  undefined8 extraout_x1_23;

  undefined8 extraout_x1_24;

  undefined8 extraout_x1_25;

  undefined8 extraout_x1_26;

  undefined8 extraout_x1_27;

  undefined8 extraout_x1_28;

  undefined8 extraout_x1_29;

  undefined8 extraout_x1_30;

  undefined8 extraout_x1_31;

  undefined8 extraout_x1_32;

  undefined8 extraout_x1_33;

  undefined8 extraout_x1_34;

  undefined8 extraout_x1_35;

  undefined8 extraout_x1_36;

  undefined8 extraout_x1_37;

  undefined8 extraout_x1_38;

  undefined8 extraout_x1_39;

  undefined8 extraout_x1_40;

  ulong uVar34;

  undefined8 uVar35;

  long lVar36;

  long lVar37;

  double in_d2;

  undefined8 in_d3;

  double dVar38;

  double dVar39;

  double dVar40;

  undefined8 uVar41;

  undefined1 auVar42 [16];

  undefined1 auVar43 [16];

  undefined1 auVar44 [16];

  long local_2d0;

  undefined8 local_2b8;

  long local_278;

  int local_224;

  ID local_208;

  ulong local_1e0;

  undefined *local_1c0;

  undefined8 local_1b8;

  code *local_1b0;

  undefined *puStack_1a8;

  undefined8 local_1a0;

  undefined8 local_198;

  double dStack_188;

  byte local_171;

  undefined8 local_170;

  long lStack_168;

  long *local_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  undefined1 auStack_130 [128];

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_getAssociatedObject(param_3,"bubbleName");

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) goto LAB_00043ac0;

  _NSSearchPathForDirectoriesInDomains(9,1,1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_00295440();

  auVar42 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar42._8_8_,&cf_CoverRes_Bubbles___);

  auVar43 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4460(auVar42._0_8_,auVar43._8_8_,auVar43._0_8_);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar43._0_8_);

  FUN_002a4460(uVar5,extraout_x1,&cf_sub);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_00294240(&_OBJC_CLASS___NSFileManager);

  auVar43 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar43._0_8_;

  FUN_00293660(uVar7,auVar43._8_8_,uVar6,0);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  uStack_148 = 0;

  local_150 = 0;

  uStack_138 = 0;

  uStack_140 = 0;

  lStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  local_160 = (long *)0x0;

  _objc_retain(uVar8);

  auVar43 = FUN_00293880(uVar8,extraout_x1_00,&local_170,auStack_130,0x10);

  if (auVar43._0_8_ != 0) {

    lVar36 = *local_160;

    do {

      uVar33 = auVar43._8_8_;

      lVar37 = 0;

      do {

        if (*local_160 != lVar36) {

          _objc_enumerationMutation(uVar8);

          uVar33 = extraout_x1_01;

        }

        uVar35 = *(undefined8 *)(lStack_168 + lVar37 * 8);

        FUN_002a4460(uVar6,uVar33,uVar35);

        auVar44 = _objc_retainAutoreleasedReturnValue();

        uVar33 = auVar44._0_8_;

        local_171 = 0;

        bVar1 = FUN_00295180(uVar7,auVar44._8_8_,uVar33,&local_171);

        if ((bVar1 & local_171) == 1) {

          FUN_002a4460(uVar33,extraout_x1_02,&cf_theme_xos);

          auVar44 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_00295160(uVar7,auVar44._8_8_,auVar44._0_8_);

          if (iVar2 != 0) {

            FUN_00291240(uVar9,extraout_x1_03,uVar35);

          }

          _objc_release(auVar44._0_8_);

        }

        _objc_release(uVar33);

        lVar37 = lVar37 + 1;

        uVar33 = extraout_x1_04;

      } while (auVar43._0_8_ != lVar37);

      auVar43 = FUN_00293880(uVar8,extraout_x1_04,&local_170,auStack_130,0x10);

    } while (auVar43._0_8_ != 0);

  }

  _objc_release(uVar8);

  _objc_retain(param_1);

  FUN_002990e0(param_1);

  lVar36 = _objc_retainAutoreleasedReturnValue();

  _objc_getAssociatedObject(param_1,"bubbleNavController");

  lVar37 = _objc_retainAutoreleasedReturnValue();

  local_208 = param_1;

  if (lVar37 == 0) {

LAB_000428bc:

    local_2d0 = 0;

    local_278 = 0;

    if (lVar36 != 0) goto LAB_000428d0;

  }

  else {

    FUN_00299260(lVar37);

    local_2d0 = _objc_retainAutoreleasedReturnValue();

    if (local_2d0 == 0) goto LAB_000428bc;

    _objc_retain();

    _objc_release(lVar36);

    lVar36 = local_2d0;

LAB_000428d0:

    FUN_002a5520(lVar36);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    local_278 = lVar36;

    if (lVar10 != 0) {

      FUN_002a5520(lVar36);

      local_208 = _objc_retainAutoreleasedReturnValue();

      _objc_release(param_1);

    }

  }

  auVar43 = FUN_00293860(uVar9);

  if (auVar43._0_8_ == 0) {

    FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar43._8_8_,&cf_c_y,&cf_lg_b0RP_S,1);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    local_2b8 = auVar43._0_8_;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar43._8_8_,&cf_nx_,0,0);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(local_2b8,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_0029a500(local_208,extraout_x1_05,local_2b8,1,0);

  }

  else {

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    local_2b8 = auVar43._0_8_;

    FUN_002a45e0(local_2b8,auVar43._8_8_,&cf_mesMsgMergeSelectedBubble);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    lVar36 = auVar43._0_8_;

    FUN_002a45e0(local_2b8,auVar43._8_8_,&cf_mesMsgMergeSelectedSubPackage);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    uVar33 = auVar43._0_8_;

    if (lVar36 == 0) {

      local_224 = 0;

    }

    else {

      local_224 = FUN_00297820(lVar36,auVar43._8_8_,lVar3);

    }

    uVar35 = _objc_alloc(&_OBJC_CLASS___UIView);

    FUN_002a6220(local_208);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    uVar35 = FUN_00296b80(uVar35);

    _objc_release(uVar11);

    FUN_00292400(&_OBJC_CLASS___UIColor);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_00292fc0(0);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar35,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    _objc_release(uVar11);

    FUN_002a1c80(uVar35,extraout_x1_06,&DAT_0000270f);

    lVar10 = FUN_00293860(uVar9);

    uVar34 = lVar10 * 0x46 + 0xbe;

    if (399 < uVar34) {

      uVar34 = 400;

    }

    FUN_002a6220(local_208);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar11);

    FUN_002a6220(local_208);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    _objc_release(uVar11);

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar11 = FUN_00296b80(0,in_d3,in_d2,(double)(uVar34 + 0x22));

    FUN_002a4a60(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar11,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00297e40(uVar11);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4034000000000000);

    _objc_release(uVar12);

    FUN_00297e40(uVar11);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029f940(auVar43._0_8_,auVar43._8_8_,3);

    _objc_release(auVar43._0_8_);

    FUN_002a1c80(uVar11,extraout_x1_07,&DAT_0000270e);

    _objc_alloc(&_OBJC_CLASS___UIView);

    dVar38 = in_d2 + -40.0;

    uVar12 = FUN_00296b80(dVar38 * 0.5,0x4020000000000000,0x4044000000000000,0x4014000000000000);

    FUN_002a4fc0(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar12,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00297e40(uVar12);

    uVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4004000000000000);

    _objc_release(uVar13);

    FUN_00291380(uVar11,extraout_x1_08,uVar12);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    auVar43 = FUN_00296b80(0x4034000000000000,0x4039000000000000,dVar38,0x4038000000000000);

    uVar13 = auVar43._0_8_;

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar43._8_8_,&cf_bll7h_);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1d60(uVar13,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_002a4ac0(0x4032000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_00388430,

                 &_OBJC_CLASS___UIFont);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar13,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00297c40(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar13,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00291380(uVar11,extraout_x1_09,uVar13);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    auVar43 = FUN_00296b80(0x4034000000000000,0x404a000000000000,dVar38,0x4032000000000000);

    uVar14 = auVar43._0_8_;

    FUN_002a1d60(uVar14,auVar43._8_8_,lVar3);

    FUN_002a4aa0(0x402c000000000000,&_OBJC_CLASS___UIFont);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar14,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar14,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00291380(uVar11,extraout_x1_10,uVar14);

    _objc_alloc(&_OBJC_CLASS___UIScrollView);

    auVar43 = FUN_00296b80(0,0x4054000000000000,in_d2,(double)(long)(uVar34 - 0x50));

    uVar15 = auVar43._0_8_;

    FUN_002a15c0(uVar15,auVar43._8_8_,1);

    FUN_00291380(uVar11,extraout_x1_11,uVar15);

    _objc_alloc(&_OBJC_CLASS___UIView);

    dVar38 = in_d2 + -32.0;

    uVar16 = FUN_00296b80(0x4030000000000000,0,dVar38,0x404e000000000000);

    FUN_0029c000(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar16,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00297e40(uVar16);

    uVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4028000000000000);

    _objc_release(uVar17);

    _objc_alloc(&_OBJC_CLASS___UIImageView);

    auVar43 = FUN_00296b80(0x402c000000000000,0x4024000000000000,0x4044000000000000,

                           0x4044000000000000);

    uVar17 = auVar43._0_8_;

    FUN_002a4460(uVar5,auVar43._8_8_,&cf_icon_png);

    uVar18 = _objc_retainAutoreleasedReturnValue();

    FUN_002965c0(&_OBJC_CLASS___UIImage);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    lVar10 = auVar43._0_8_;

    if (lVar10 == 0) {

      FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar43._8_8_,&cf_bubble_left_fill);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_0029ec00(uVar17,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_002a4a80(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1f40(uVar17,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      uVar19 = extraout_x1_13;

    }

    else {

      FUN_0029ec00(uVar17,auVar43._8_8_,lVar10);

      uVar19 = extraout_x1_12;

    }

    FUN_0029d6c0(uVar17,uVar19,1);

    FUN_00297e40(uVar17);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4020000000000000);

    _objc_release(uVar19);

    FUN_0029d4a0(uVar17,extraout_x1_14,1);

    FUN_00291380(uVar16,extraout_x1_15,uVar17);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    dVar39 = dVar38 + -140.0;

    auVar43 = FUN_00296b80(0x404b000000000000,0x4024000000000000,dVar39,0x4034000000000000);

    uVar20 = auVar43._0_8_;

    FUN_002a1d60(uVar20,auVar43._8_8_,&cf__NS);

    uVar41 = *(undefined8 *)PTR__UIFontWeightMedium_00388420;

    FUN_002a4ac0(0x4030000000000000,uVar41,&_OBJC_CLASS___UIFont);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar20,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00297c40(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar20,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00291380(uVar16,extraout_x1_16,uVar20);

    _objc_alloc(&_OBJC_CLASS___UILabel);

    auVar43 = FUN_00296b80(0x404b000000000000,0x4040000000000000,dVar39,0x4030000000000000);

    uVar21 = auVar43._0_8_;

    FUN_002a1d60(uVar21,auVar43._8_8_,&cf__O_uSYll7h_);

    FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar21,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar21,auVar43._8_8_,auVar43._0_8_);

    _objc_release(auVar43._0_8_);

    FUN_00291380(uVar16,extraout_x1_17,uVar21);

    FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1_18,1);

    uVar22 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e5e0(dVar38 + -76.0,0x402e000000000000,0x404e000000000000,0x403e000000000000);

    uVar19 = extraout_x1_19;

    if (local_224 == 0) {

LAB_00043190:

      FUN_002a1f80(uVar22,uVar19,&cf_b,0);

      FUN_002a4a80(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      uVar19 = auVar43._0_8_;

      FUN_0029cf60(uVar22,auVar43._8_8_,uVar19);

    }

    else {

      auVar43 = FUN_00297fa0(uVar33);

      uVar19 = auVar43._8_8_;

      if (auVar43._0_8_ != 0) goto LAB_00043190;

      FUN_002a1f80(uVar22,uVar19,&cf__O_u_N,0);

      FUN_002a4b80(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      uVar19 = auVar43._0_8_;

      FUN_0029cf60(uVar22,auVar43._8_8_,uVar19);

    }

    _objc_release(uVar19);

    FUN_002a64a0(&_OBJC_CLASS___UIColor);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1fc0(uVar22,auVar43._8_8_,auVar43._0_8_,0);

    _objc_release(auVar43._0_8_);

    FUN_00297e40(uVar22);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x4018000000000000);

    _objc_release(uVar19);

    FUN_002a4ac0(0x402a000000000000,uVar41,&_OBJC_CLASS___UIFont);

    uVar19 = _objc_retainAutoreleasedReturnValue();

    FUN_002a53a0(uVar22);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(auVar43._0_8_,auVar43._8_8_,uVar19);

    _objc_release(auVar43._0_8_);

    _objc_release(uVar19);

    FUN_002a1c80(uVar22,extraout_x1_20,0);

    _objc_setAssociatedObject(uVar22,"bubbleName",lVar3,1);

    _objc_setAssociatedObject(uVar22,"subPackageName",&::cf___,1);

    _objc_setAssociatedObject(uVar22,"presenterVC",local_208,1);

    FUN_002913c0(uVar22,extraout_x1_21,param_1,"selectSubPackage:",0x40);

    FUN_00291380(uVar16,extraout_x1_22,uVar22);

    FUN_00291380(uVar15,extraout_x1_23,uVar16);

    dVar40 = 70.0;

    for (local_1e0 = 0; uVar23 = FUN_00293860(uVar9), local_1e0 < uVar23; local_1e0 = local_1e0 + 1)

    {

      FUN_00299500(uVar9);

      uVar19 = _objc_retainAutoreleasedReturnValue();

      FUN_00295260(param_1);

      uVar24 = _objc_retainAutoreleasedReturnValue();

      _objc_alloc(&_OBJC_CLASS___UIView);

      uVar25 = FUN_00296b80(0x4030000000000000,dVar40,dVar38,0x404e000000000000);

      FUN_0029c000(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_0029cf60(uVar25,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_00297e40(uVar25);

      uVar26 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4028000000000000);

      _objc_release(uVar26);

      _objc_alloc(&_OBJC_CLASS___UIImageView);

      auVar43 = FUN_00296b80(0x402c000000000000,0x4024000000000000,0x4044000000000000,

                             0x4044000000000000);

      uVar26 = auVar43._0_8_;

      FUN_002a4460(uVar6,auVar43._8_8_,uVar19);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a4460(auVar43._0_8_,auVar43._8_8_,&cf_icon_png);

      uVar27 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar43._0_8_);

      FUN_002965c0(&_OBJC_CLASS___UIImage,extraout_x1_24,uVar27);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      lVar28 = auVar43._0_8_;

      if (lVar28 == 0) {

        FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar43._8_8_,&cf_bubble_left_and_bubble_right_fill);

        auVar43 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec00(uVar26,auVar43._8_8_,auVar43._0_8_);

        _objc_release(auVar43._0_8_);

        FUN_002a4c40(&_OBJC_CLASS___UIColor);

        auVar43 = _objc_retainAutoreleasedReturnValue();

        FUN_002a1f40(uVar26,auVar43._8_8_,auVar43._0_8_);

        _objc_release(auVar43._0_8_);

        uVar29 = extraout_x1_26;

      }

      else {

        FUN_0029ec00(uVar26,auVar43._8_8_,lVar28);

        uVar29 = extraout_x1_25;

      }

      FUN_0029d6c0(uVar26,uVar29,1);

      FUN_00297e40(uVar26);

      uVar29 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4020000000000000);

      _objc_release(uVar29);

      FUN_0029d4a0(uVar26,extraout_x1_27,1);

      FUN_00291380(uVar25,extraout_x1_28,uVar26);

      _objc_alloc(&_OBJC_CLASS___UILabel);

      auVar43 = FUN_00296b80(0x404b000000000000,0x4024000000000000,dVar39,0x4034000000000000);

      uVar30 = auVar43._0_8_;

      FUN_002a1d60(uVar30,auVar43._8_8_,uVar24);

      FUN_002a4ac0(0x4030000000000000,uVar41,&_OBJC_CLASS___UIFont);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(uVar30,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_00297c40(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(uVar30,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_00291380(uVar25,extraout_x1_29,uVar30);

      _objc_alloc(&_OBJC_CLASS___UILabel);

      auVar43 = FUN_00296b80(0x404b000000000000,0x4040000000000000,dVar39,0x4030000000000000);

      uVar31 = auVar43._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar43._8_8_,&cf_P_S7h_);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(uVar31,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(uVar31,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_0029bfa0(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(uVar31,auVar43._8_8_,auVar43._0_8_);

      _objc_release(auVar43._0_8_);

      FUN_00291380(uVar25,extraout_x1_30,uVar31);

      FUN_00292660(&_OBJC_CLASS___UIButton,extraout_x1_31,1);

      uVar32 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e5e0(dVar38 + -76.0,0x402e000000000000,0x404e000000000000,0x403e000000000000);

      uVar29 = extraout_x1_32;

      if ((local_224 == 0) ||

         (iVar2 = FUN_00297820(uVar19,extraout_x1_32,uVar33), uVar29 = extraout_x1_33, iVar2 == 0))

      {

        FUN_002a1f80(uVar32,uVar29,&cf_b,0);

        FUN_002a4a80(&_OBJC_CLASS___UIColor);

        auVar43 = _objc_retainAutoreleasedReturnValue();

        uVar29 = auVar43._0_8_;

        FUN_0029cf60(uVar32,auVar43._8_8_,uVar29);

      }

      else {

        FUN_002a1f80(uVar32,extraout_x1_33,&cf__O_u_N,0);

        FUN_002a4b80(&_OBJC_CLASS___UIColor);

        auVar43 = _objc_retainAutoreleasedReturnValue();

        uVar29 = auVar43._0_8_;

        FUN_0029cf60(uVar32,auVar43._8_8_,uVar29);

      }

      _objc_release(uVar29);

      FUN_002a64a0(&_OBJC_CLASS___UIColor);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1fc0(uVar32,auVar43._8_8_,auVar43._0_8_,0);

      _objc_release(auVar43._0_8_);

      FUN_00297e40(uVar32);

      uVar29 = _objc_retainAutoreleasedReturnValue();

      FUN_0029d820(0x4018000000000000);

      _objc_release(uVar29);

      FUN_002a4ac0(0x402a000000000000,uVar41,&_OBJC_CLASS___UIFont);

      uVar29 = _objc_retainAutoreleasedReturnValue();

      FUN_002a53a0(uVar32);

      auVar43 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(auVar43._0_8_,auVar43._8_8_,uVar29);

      _objc_release(auVar43._0_8_);

      _objc_release(uVar29);

      FUN_002a1c80(uVar32,extraout_x1_34,local_1e0 + 1);

      _objc_setAssociatedObject(uVar32,"bubbleName",lVar3,1);

      _objc_setAssociatedObject(uVar32,"subPackageName",uVar19,1);

      _objc_setAssociatedObject(uVar32,"presenterVC",local_208,1);

      FUN_002913c0(uVar32,extraout_x1_35,param_1,"selectSubPackage:",0x40);

      FUN_00291380(uVar25,extraout_x1_36,uVar32);

      FUN_00291380(uVar15,extraout_x1_37,uVar25);

      _objc_release(uVar32);

      _objc_release(uVar31);

      _objc_release(uVar30);

      _objc_release(lVar28);

      _objc_release(uVar27);

      _objc_release(uVar26);

      _objc_release(uVar25);

      _objc_release(uVar24);

      _objc_release(uVar19);

      dVar40 = dVar40 + 70.0;

    }

    FUN_0029d720(in_d2,dVar40 + 20.0,uVar15);

    FUN_00291380(uVar35,extraout_x1_38,uVar11);

    FUN_002a6220(local_208);

    auVar43 = _objc_retainAutoreleasedReturnValue();

    FUN_00291380(auVar43._0_8_,auVar43._8_8_,uVar35);

    _objc_release(auVar43._0_8_);

    auVar43 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    auVar43 = FUN_00296f20(auVar43._0_8_,auVar43._8_8_,param_1,"dismissSubPackageSheet:");

    uVar19 = auVar43._0_8_;

    FUN_0029dca0(uVar19,auVar43._8_8_,param_1);

    FUN_00291140(uVar35,extraout_x1_39,uVar19);

    _objc_setAssociatedObject(uVar19,"cardView",uVar11,1);

    local_1c0 = PTR___NSConcreteStackBlock_003886f0;

    local_1b8 = 0xc2000000;

    local_1b0 = FUN_000441a8;

    puStack_1a8 = &DAT_003897d0;

    _objc_retain(uVar35);

    local_1a0 = uVar35;

    _objc_retain(uVar11);

    local_198 = uVar11;

    dStack_188 = (double)uVar34;

    FUN_00291800(0x3fd3333333333333,0,0x3feccccccccccccd,0x3fe0000000000000,&_OBJC_CLASS___UIView,

                 extraout_x1_40,0x20000,&local_1c0,0);

    _objc_release(local_198);

    _objc_release(local_1a0);

    _objc_release(uVar19);

    _objc_release(uVar22);

    _objc_release(uVar21);

    _objc_release(uVar20);

    _objc_release(lVar10);

    _objc_release(uVar18);

    _objc_release(uVar17);

    _objc_release(uVar16);

    _objc_release(uVar15);

    _objc_release(uVar14);

    _objc_release(uVar13);

    _objc_release(uVar12);

    _objc_release(uVar11);

    _objc_release(uVar35);

    _objc_release(uVar33);

    _objc_release(lVar36);

  }

  _objc_release(local_2b8);

  _objc_release(local_2d0);

  _objc_release(lVar37);

  _objc_release(local_278);

  _objc_release(local_208);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(auVar42._0_8_);

  _objc_release(uVar4);

LAB_00043ac0:

  _objc_release(lVar3);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_b0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




