// initWithFrame: @0x27220c


/* Function Stack Size: 0x30 bytes */



ID XZYHomeDockLiquidContainer::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined *puVar1;

  ID IVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

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

  undefined8 extraout_x1_41;

  undefined8 extraout_x1_42;

  undefined8 extraout_x1_43;

  undefined8 extraout_x1_44;

  undefined8 extraout_x1_45;

  undefined8 extraout_x1_46;

  undefined8 extraout_x1_47;

  undefined8 extraout_x1_48;

  undefined8 extraout_x1_49;

  undefined8 extraout_x1_50;

  undefined8 extraout_x1_51;

  undefined8 extraout_x1_52;

  undefined8 extraout_x1_53;

  undefined8 extraout_x1_54;

  undefined8 extraout_x1_55;

  undefined8 extraout_x1_56;

  undefined8 extraout_x1_57;

  undefined8 extraout_x1_58;

  undefined8 extraout_x1_59;

  undefined8 extraout_x1_60;

  undefined8 extraout_x1_61;

  undefined8 extraout_x1_62;

  undefined8 extraout_x1_63;

  undefined8 extraout_x1_64;

  undefined8 extraout_x1_65;

  undefined8 uVar8;

  long lVar9;

  long lVar10;

  long lVar11;

  long lVar12;

  long lVar13;

  long lVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined *local_310;

  undefined8 local_308;

  code *local_300;

  undefined *puStack_2f8;

  undefined1 auStack_2f0 [8];

  undefined *local_2e8;

  undefined8 local_2e0;

  code *local_2d8;

  undefined *puStack_2d0;

  undefined1 auStack_2c8 [8];

  undefined *local_2c0;

  undefined8 local_2b8;

  code *local_2b0;

  undefined *puStack_2a8;

  undefined1 auStack_2a0 [8];

  undefined1 auStack_298 [8];

  undefined8 local_290;

  long lStack_288;

  long *local_280;

  undefined8 uStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  undefined8 uStack_260;

  undefined8 uStack_258;

  undefined8 local_250;

  long lStack_248;

  long *local_240;

  undefined8 uStack_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 uStack_220;

  undefined8 uStack_218;

  ID local_210;

  class_t *pcStack_208;

  undefined8 local_200;

  undefined8 local_1f8;

  undefined1 auStack_1f0 [128];

  undefined8 local_170;

  undefined8 local_168;

  undefined8 local_160;

  undefined1 auStack_158 [128];

  cfstringStruct *local_d8;

  cfstringStruct *local_d0;

  cfstringStruct *local_c8;

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

  pcStack_208 = &objc::class_t::XZYHomeDockLiquidContainer;

  local_210 = param_1;

  IVar2 = _objc_msgSendSuper2(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,

                              param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,

                              &local_210,"initWithFrame:");

  if (IVar2 != 0) {

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(IVar2,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_0029d4a0(IVar2,extraout_x1,0);

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924c0(auVar15._0_8_,auVar15._8_8_,&cf_xzy_dock_player_expanded);

    *(ulong *)(IVar2 + (long)_presentation) = uVar3 & 0xffffffff;

    _objc_release(auVar15._0_8_);

    *(undefined8 *)(IVar2 + (long)_previewIndex) = 0xffffffffffffffff;

    *(undefined8 *)(IVar2 + (long)_highlightedRow) = 0xffffffffffffffff;

    *(undefined8 *)(IVar2 + (long)_nativeReselectionIndex) = 0x7fffffffffffffff;

    FUN_00291d20(&_OBJC_CLASS___NSMutableArray);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar8 = *(undefined8 *)(IVar2 + (long)_tabButtons);

    *(undefined8 *)(IVar2 + (long)_tabButtons) = uVar4;

    _objc_release(uVar8);

    FUN_0029c6e0(&_OBJC_CLASS___NSMutableSet);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar8 = *(undefined8 *)(IVar2 + (long)_closingOverlays);

    *(undefined8 *)(IVar2 + (long)_closingOverlays) = uVar4;

    _objc_release(uVar8);

    FUN_00298a00(IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar12 = (long)_navigationGlass;

    uVar8 = *(undefined8 *)(IVar2 + lVar12);

    *(undefined8 *)(IVar2 + lVar12) = uVar4;

    _objc_release(uVar8);

    FUN_00297e40(&_OBJC_CLASS___CAGradientLayer);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar14 = (long)_navigationTrackingHighlight;

    uVar8 = *(undefined8 *)(IVar2 + lVar14);

    *(undefined8 *)(IVar2 + lVar14) = uVar4;

    _objc_release(uVar8);

    FUN_002a2240(*(undefined8 *)(IVar2 + lVar14),extraout_x1_00,

                 *(undefined8 *)PTR__kCAGradientLayerRadial_00388618);

    FUN_002a1980(0x3fe0000000000000,0x3fe0000000000000,*(undefined8 *)(IVar2 + lVar14));

    FUN_0029e0e0(0x3ff0000000000000,0x3fe0000000000000,*(undefined8 *)(IVar2 + lVar14));

    FUN_0029f640(*(undefined8 *)(IVar2 + lVar14),extraout_x1_01,

                 &PTR__OBJC_CLASS___NSConstantArray_003bf190);

    FUN_00293060(0x3ff0000000000000,0x3faeb851eb851eb8,&_OBJC_CLASS___UIColor);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    local_a8 = FUN_00290a20(uVar4);

    FUN_00293060(0x3ff0000000000000,0x3fa70a3d70a3d70a,&_OBJC_CLASS___UIColor);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    local_a0 = FUN_00290a20(uVar8);

    FUN_00293060(0x3ff0000000000000,0x3f989374bc6a7efa,&_OBJC_CLASS___UIColor);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    local_98 = FUN_00290a20(uVar5);

    FUN_00293060(0x3ff0000000000000,0x3f80624dd2f1a9fc,&_OBJC_CLASS___UIColor);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    local_90 = FUN_00290a20(uVar6);

    FUN_00293060(0x3ff0000000000000,0,&_OBJC_CLASS___UIColor);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    auVar15 = FUN_00290a20(uVar7);

    local_88 = auVar15._0_8_;

    FUN_00291e00(&_OBJC_CLASS___NSArray,auVar15._8_8_,&local_a8,5);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d560(*(undefined8 *)(IVar2 + lVar14),auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar7);

    _objc_release(uVar6);

    _objc_release(uVar5);

    _objc_release(uVar8);

    _objc_release(uVar4);

    FUN_002a0400(0,*(undefined8 *)(IVar2 + lVar14));

    local_d8 = &cf_bounds;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    local_d0 = &cf_position;

    local_c0 = uVar4;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    local_c8 = &cf_opacity;

    local_b8 = uVar8;

    FUN_002992c0(&_OBJC_CLASS___NSNull);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    local_b0 = auVar15._0_8_;

    FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar15._8_8_,&local_c0,&local_d8,3);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_0029c880(*(undefined8 *)(IVar2 + lVar14),auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar8);

    _objc_release(uVar4);

    FUN_00293640(*(undefined8 *)(IVar2 + lVar12));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00291360(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)(IVar2 + lVar14));

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    FUN_00298a00(IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar10 = (long)_playerGlass;

    uVar8 = *(undefined8 *)(IVar2 + lVar10);

    *(undefined8 *)(IVar2 + lVar10) = uVar4;

    _objc_release(uVar8);

    FUN_00298a00(IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar14 = (long)_profileGlass;

    uVar8 = *(undefined8 *)(IVar2 + lVar14);

    *(undefined8 *)(IVar2 + lVar14) = uVar4;

    _objc_release(uVar8);

    uStack_228 = 0;

    local_230 = 0;

    uStack_218 = 0;

    uStack_220 = 0;

    lStack_248 = 0;

    local_250 = 0;

    uStack_238 = 0;

    local_240 = (long *)0x0;

    local_170 = *(undefined8 *)(IVar2 + lVar12);

    local_168 = *(undefined8 *)(IVar2 + lVar10);

    local_160 = *(undefined8 *)(IVar2 + lVar14);

    FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_02,&local_170,3);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar4 = auVar15._0_8_;

    auVar15 = FUN_00293880(uVar4,auVar15._8_8_,&local_250,auStack_158,0x10);

    if (auVar15._0_8_ != 0) {

      lVar12 = *local_240;

      do {

        uVar8 = auVar15._8_8_;

        lVar13 = 0;

        do {

          if (*local_240 != lVar12) {

            _objc_enumerationMutation(uVar4);

            uVar8 = extraout_x1_03;

          }

          uVar5 = *(undefined8 *)(lStack_248 + lVar13 * 8);

          FUN_0029cfa0(uVar5,uVar8,1);

          FUN_00291380(IVar2,extraout_x1_04,uVar5);

          lVar13 = lVar13 + 1;

          uVar8 = extraout_x1_05;

        } while (auVar15._0_8_ != lVar13);

        auVar15 = FUN_00293880(uVar4,extraout_x1_05,&local_250,auStack_158,0x10);

      } while (auVar15._0_8_ != 0);

    }

    _objc_release(uVar4);

    uVar4 = _objc_alloc_init(&objc::class_t::XZYDockLiquidMovingView);

    lVar12 = (long)_navigationGroup;

    uVar8 = *(undefined8 *)(IVar2 + lVar12);

    *(undefined8 *)(IVar2 + lVar12) = uVar4;

    _objc_release(uVar8);

    FUN_00291380(IVar2,extraout_x1_06,*(undefined8 *)(IVar2 + lVar12));

    uVar4 = _objc_alloc_init(&_OBJC_CLASS___UIView);

    lVar13 = (long)_selectionIdleView;

    uVar8 = *(undefined8 *)(IVar2 + lVar13);

    *(undefined8 *)(IVar2 + lVar13) = uVar4;

    _objc_release(uVar8);

    FUN_002a23c0(*(undefined8 *)(IVar2 + lVar13),extraout_x1_07,0);

    FUN_00297e40(*(undefined8 *)(IVar2 + lVar13));

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d800(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)PTR__kCACornerCurveCircular_003885d8);

    _objc_release(auVar15._0_8_);

    FUN_00291380(*(undefined8 *)(IVar2 + lVar12),extraout_x1_08,*(undefined8 *)(IVar2 + lVar13));

    FUN_002988e0(IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar13 = (long)_selectionGlass;

    uVar8 = *(undefined8 *)(IVar2 + lVar13);

    *(undefined8 *)(IVar2 + lVar13) = uVar4;

    _objc_release(uVar8);

    FUN_0029cf00(0,*(undefined8 *)(IVar2 + lVar13));

    FUN_0029ddc0(0,*(undefined8 *)(IVar2 + lVar13));

    FUN_00293060(0x3ff0000000000000,0,&_OBJC_CLASS___UIColor);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e6c0(*(undefined8 *)(IVar2 + lVar13),auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_00297e40(*(undefined8 *)(IVar2 + lVar13));

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a14a0(0);

    _objc_release(uVar4);

    FUN_00291380(*(undefined8 *)(IVar2 + lVar12),extraout_x1_09,*(undefined8 *)(IVar2 + lVar13));

    FUN_00298860(IVar2,extraout_x1_10,"togglePlayer",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar9 = (long)_playerButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar9);

    *(undefined8 *)(IVar2 + lVar9) = uVar4;

    _objc_release(uVar8);

    FUN_0029d360(*(undefined8 *)(IVar2 + lVar9),extraout_x1_11,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar9),extraout_x1_12,*(undefined8 *)(IVar2 + lVar10));

    FUN_0029eb40(0x4043333333333333,*(undefined8 *)(IVar2 + lVar9));

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar9),extraout_x1_13,&cf_xzy_liquid_player);

    FUN_00298860(IVar2,extraout_x1_14,"playEnginePrev",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar11 = (long)_prevButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar11);

    *(undefined8 *)(IVar2 + lVar11) = uVar4;

    _objc_release(uVar8);

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_15,&cf_backward_fill);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291e40(*(undefined8 *)(IVar2 + lVar11));

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(auVar15._0_8_,auVar15._8_8_,uVar4);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    FUN_0029eb40(0x403ccccccccccccc,*(undefined8 *)(IVar2 + lVar11));

    FUN_0029f200(*(undefined8 *)(IVar2 + lVar11),extraout_x1_16,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar11),extraout_x1_17,*(undefined8 *)(IVar2 + lVar10));

    FUN_0029c760(*(undefined8 *)(IVar2 + lVar11),extraout_x1_18,&cf_N);

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar11),extraout_x1_19,&cf_xzy_liquid_player_prev);

    FUN_00298860(IVar2,extraout_x1_20,"toggleEnginePlayPause",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar11 = (long)_playPauseButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar11);

    *(undefined8 *)(IVar2 + lVar11) = uVar4;

    _objc_release(uVar8);

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_21,&cf_play_fill);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291e40(*(undefined8 *)(IVar2 + lVar11));

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(auVar15._0_8_,auVar15._8_8_,uVar4);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    FUN_0029eb40(0x403ccccccccccccc,*(undefined8 *)(IVar2 + lVar11));

    FUN_0029f200(*(undefined8 *)(IVar2 + lVar11),extraout_x1_22,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar11),extraout_x1_23,*(undefined8 *)(IVar2 + lVar10));

    FUN_0029c760(*(undefined8 *)(IVar2 + lVar11),extraout_x1_24,&cf_d>e_);

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar11),extraout_x1_25,&cf_xzy_liquid_player_toggle);

    FUN_00298860(IVar2,extraout_x1_26,"playEngineNext",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar11 = (long)_nextButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar11);

    *(undefined8 *)(IVar2 + lVar11) = uVar4;

    _objc_release(uVar8);

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,extraout_x1_27,&cf_forward_fill);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291e40(*(undefined8 *)(IVar2 + lVar11));

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(auVar15._0_8_,auVar15._8_8_,uVar4);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    FUN_0029eb40(0x403ccccccccccccc,*(undefined8 *)(IVar2 + lVar11));

    FUN_0029f200(*(undefined8 *)(IVar2 + lVar11),extraout_x1_28,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar11),extraout_x1_29,*(undefined8 *)(IVar2 + lVar10));

    FUN_0029c760(*(undefined8 *)(IVar2 + lVar11),extraout_x1_30,&cf_N);

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar11),extraout_x1_31,&cf_xzy_liquid_player_next);

    FUN_00298860(IVar2,extraout_x1_32,"toggleProfile",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar10 = (long)_profileButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar10);

    *(undefined8 *)(IVar2 + lVar10) = uVar4;

    _objc_release(uVar8);

    FUN_0029d360(*(undefined8 *)(IVar2 + lVar10),extraout_x1_33,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar10),extraout_x1_34,*(undefined8 *)(IVar2 + lVar14));

    FUN_0029eb40(0x4043333333333333,*(undefined8 *)(IVar2 + lVar10));

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar10),extraout_x1_35,&cf_xzy_liquid_profile);

    FUN_00298860(IVar2,extraout_x1_36,"toggleProfileMenu",IVar2);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar11 = (long)_accessoryButton;

    uVar8 = *(undefined8 *)(IVar2 + lVar11);

    *(undefined8 *)(IVar2 + lVar11) = uVar4;

    _objc_release(uVar8);

    FUN_0023c784();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_00291e40(*(undefined8 *)(IVar2 + lVar11));

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(auVar15._0_8_,auVar15._8_8_,uVar4);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar4);

    FUN_0029eb40(0x403ccccccccccccc,*(undefined8 *)(IVar2 + lVar11));

    FUN_0029f200(*(undefined8 *)(IVar2 + lVar11),extraout_x1_37,1);

    FUN_0029e360(*(undefined8 *)(IVar2 + lVar11),extraout_x1_38,*(undefined8 *)(IVar2 + lVar14));

    FUN_0029c760(*(undefined8 *)(IVar2 + lVar11),extraout_x1_39,&cf__wcd_O);

    FUN_0029c740(*(undefined8 *)(IVar2 + lVar11),extraout_x1_40,&cf_xzy_liquid_profile_actions);

    auVar15 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);

    uVar4 = FUN_00296f20(auVar15._0_8_,auVar15._8_8_,IVar2,"handleSelectedTabTap:");

    lVar14 = (long)_selectionTapRecognizer;

    uVar8 = *(undefined8 *)(IVar2 + lVar14);

    *(undefined8 *)(IVar2 + lVar14) = uVar4;

    _objc_release(uVar8);

    FUN_0029ffe0(*(undefined8 *)(IVar2 + lVar14),extraout_x1_41,1);

    FUN_002a0000(*(undefined8 *)(IVar2 + lVar14),extraout_x1_42,1);

    FUN_0029dc60(*(undefined8 *)(IVar2 + lVar14),extraout_x1_43,0);

    FUN_0029dc80(*(undefined8 *)(IVar2 + lVar14),extraout_x1_44,0);

    FUN_0029d200(*(undefined8 *)(IVar2 + lVar14),extraout_x1_45,1);

    FUN_0029dca0(*(undefined8 *)(IVar2 + lVar14),extraout_x1_46,IVar2);

    auVar15 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

    auVar15 = FUN_00296f20(auVar15._0_8_,auVar15._8_8_,IVar2,"handlePan:");

    uVar4 = auVar15._0_8_;

    FUN_0029dca0(uVar4,auVar15._8_8_,IVar2);

    FUN_0029dc60(uVar4,extraout_x1_47,0);

    FUN_0029dc80(uVar4,extraout_x1_48,0);

    FUN_0029f9e0(uVar4,extraout_x1_49,1);

    FUN_00291140(IVar2,extraout_x1_50,uVar4);

    uStack_268 = 0;

    local_270 = 0;

    uStack_258 = 0;

    uStack_260 = 0;

    lStack_288 = 0;

    local_290 = 0;

    uStack_278 = 0;

    local_280 = (long *)0x0;

    local_200 = *(undefined8 *)(IVar2 + lVar9);

    local_1f8 = *(undefined8 *)(IVar2 + lVar10);

    FUN_00291e00(&_OBJC_CLASS___NSArray,extraout_x1_51,&local_200,2);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar15._0_8_;

    lVar14 = FUN_00293880(uVar8,auVar15._8_8_,&local_290,auStack_1f0,0x10);

    if (lVar14 != 0) {

      lVar10 = *local_280;

      do {

        lVar9 = 0;

        do {

          if (*local_280 != lVar10) {

            _objc_enumerationMutation(uVar8);

          }

          uVar6 = *(undefined8 *)(lStack_288 + lVar9 * 8);

          auVar15 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

          uVar5 = FUN_00296f20(auVar15._0_8_,auVar15._8_8_,IVar2,"handleMenuHold:");

          FUN_0029fce0(0x3fd0000000000000);

          FUN_0029dc60(uVar5,extraout_x1_52,0);

          FUN_0029dc80(uVar5,extraout_x1_53,0);

          FUN_0029dca0(uVar5,extraout_x1_54,IVar2);

          FUN_00291140(uVar6,extraout_x1_55,uVar5);

          FUN_0029b780(uVar4,extraout_x1_56,uVar5);

          _objc_release(uVar5);

          lVar9 = lVar9 + 1;

        } while (lVar14 != lVar9);

        lVar14 = FUN_00293880(uVar8,extraout_x1_57,&local_290,auStack_1f0,0x10);

      } while (lVar14 != 0);

    }

    _objc_release(uVar8);

    auVar15 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);

    uVar8 = FUN_00296f20(auVar15._0_8_,auVar15._8_8_,IVar2,"showStyles:");

    FUN_0029fce0(0x3fe4cccccccccccd);

    FUN_0029dc60(uVar8,extraout_x1_58,0);

    FUN_0029dc80(uVar8,extraout_x1_59,0);

    FUN_0029dca0(uVar8,extraout_x1_60,IVar2);

    FUN_0029b780(uVar4,extraout_x1_61,uVar8);

    FUN_00291140(*(undefined8 *)(IVar2 + lVar12),extraout_x1_62,uVar8);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00291280(auVar15._0_8_,auVar15._8_8_,IVar2,"applicationWillResignActive:",

                 *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_003883d8,0);

    _objc_release(auVar15._0_8_);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00291280(auVar15._0_8_,auVar15._8_8_,IVar2,"accessibilityChanged:",

                 *(undefined8 *)

                  PTR__UIAccessibilityReduceTransparencyStatusDidChangeNotification_00388398,0);

    _objc_release(auVar15._0_8_);

    FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00291280(auVar15._0_8_,auVar15._8_8_,IVar2,"accessibilityChanged:",

                 *(undefined8 *)PTR__UIAccessibilityReduceMotionStatusDidChangeNotification_00388390

                 ,0);

    _objc_release(auVar15._0_8_);

    _objc_initWeak(auStack_298,IVar2);

    puVar1 = PTR___NSConcreteStackBlock_003886f0;

    local_2c0 = PTR___NSConcreteStackBlock_003886f0;

    local_2b8 = 0xc2000000;

    local_2b0 = FUN_002731b0;

    puStack_2a8 = &DAT_0038ccc0;

    _objc_copyWeak(auStack_2a0,auStack_298);

    FUN_002a0280(*(undefined8 *)(IVar2 + lVar13),extraout_x1_63,&local_2c0);

    uVar5 = _objc_alloc_init(&objc::class_t::XZYDockLumiGlassThumb);

    lVar14 = (long)_thumbMotion;

    uVar6 = *(undefined8 *)(IVar2 + lVar14);

    *(undefined8 *)(IVar2 + lVar14) = uVar5;

    _objc_release(uVar6);

    local_2e8 = puVar1;

    local_2e0 = 0xc2000000;

    local_2d8 = FUN_00273278;

    puStack_2d0 = &DAT_00390668;

    _objc_copyWeak(auStack_2c8,auStack_298);

    FUN_002a03a0(*(undefined8 *)(IVar2 + lVar14),extraout_x1_64,&local_2e8);

    FUN_002a2e40(&objc::class_t::XZYDockPlayerEngine);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    local_310 = puVar1;

    local_308 = 0xc2000000;

    local_300 = FUN_00273594;

    puStack_2f8 = &DAT_0038e4a0;

    _objc_copyWeak(auStack_2f0,auStack_298);

    FUN_002a03a0(uVar5,extraout_x1_65,&local_310);

    FUN_002981c0(uVar5);

    _objc_destroyWeak(auStack_2f0);

    _objc_release(uVar5);

    _objc_destroyWeak(auStack_2c8);

    _objc_destroyWeak(auStack_2a0);

    _objc_destroyWeak(auStack_298);

    _objc_release(uVar8);

    _objc_release(uVar4);

  }

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return IVar2;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




