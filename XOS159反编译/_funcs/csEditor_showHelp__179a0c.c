// csEditor_showHelp @0x179a0c


/* Function Stack Size: 0x10 bytes */



void CadisCustomStyleEditorViewController::csEditor_showHelp(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined1 auVar13 [16];

  undefined8 local_150;

  undefined8 local_148;

  undefined8 uStack_140;

  undefined8 local_138;

  undefined8 local_130;

  undefined8 local_128;

  long lStack_120;

  undefined8 local_118;

  undefined8 local_110;

  undefined8 local_108;

  undefined8 local_100;

  long local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 uStack_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  undefined8 uStack_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_00292ec0();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b860();

  _objc_release(uVar1);

  auVar13 = _objc_alloc_init(&_OBJC_CLASS___UIViewController);

  uVar1 = auVar13._0_8_;

  FUN_002a1f60(uVar1,auVar13._8_8_,&cf__IN7h___R);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a6220(uVar1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar13._0_8_,auVar13._8_8_,uVar2);

  _objc_release(auVar13._0_8_);

  _objc_release(uVar2);

  uVar2 = _objc_alloc(&_OBJC_CLASS___UITextView);

  FUN_002a6220(uVar1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002925a0();

  uVar2 = FUN_00296b80(uVar2);

  _objc_release(uVar3);

  FUN_0029ce00(uVar2,extraout_x1,0x12);

  FUN_0029dec0(uVar2,extraout_x1_00,0);

  FUN_002a4aa0(0x402c000000000000,&_OBJC_CLASS___UIFont);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar2,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar2,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_002a4a60(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar2,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_0029d680(0x4020000000000000,0x4020000000000000,0x4044000000000000,0x4020000000000000,uVar2);

  FUN_0029cbe0(uVar2,extraout_x1_01,1);

  uVar3 = _objc_alloc_init(&_OBJC_CLASS___NSMutableAttributedString);

  uVar11 = *(undefined8 *)PTR__NSFontAttributeName_00388358;

  uVar12 = *(undefined8 *)PTR__UIFontWeightBold_00388408;

  local_a0 = uVar11;

  FUN_002a4ac0(0x4036000000000000,uVar12,&_OBJC_CLASS___UIFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar10 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360;

  local_98 = uVar10;

  local_90 = uVar4;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_88 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&local_90,&local_a0,2);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar4);

  local_c0 = uVar11;

  FUN_002a4ac0(0x4031000000000000,uVar12,&_OBJC_CLASS___UIFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_b8 = uVar10;

  uStack_b0 = uVar4;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_a8 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&uStack_b0,&local_c0,2);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar4);

  local_e0 = uVar11;

  FUN_002a4aa0(0x402c000000000000,&_OBJC_CLASS___UIFont);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_d8 = uVar10;

  uStack_d0 = uVar4;

  FUN_00297c40(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_c8 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&uStack_d0,&local_e0,2);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar4);

  local_110 = uVar11;

  FUN_002955a0(0x4028000000000000,&_OBJC_CLASS___UIFont,extraout_x1_02,&cf_Menlo);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  lVar8 = lVar7;

  if (lVar7 == 0) {

    FUN_00298ec0(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  local_108 = uVar10;

  local_f8 = lVar8;

  FUN_002a4b80(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_100 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_00388350;

  local_f0 = uVar4;

  FUN_0029bfc0(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_e8 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&local_f8,&local_110,3);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar4);

  if (lVar7 == 0) {

    _objc_release(lVar8);

  }

  _objc_release(lVar7);

  local_130 = uVar11;

  FUN_002955a0(0x4028000000000000,&_OBJC_CLASS___UIFont,extraout_x1_03,&cf_Menlo);

  lVar7 = _objc_retainAutoreleasedReturnValue();

  lVar8 = lVar7;

  if (lVar7 == 0) {

    FUN_00298ec0(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    lVar8 = _objc_retainAutoreleasedReturnValue();

  }

  local_128 = uVar10;

  lStack_120 = lVar8;

  FUN_002a4c40(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_118 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&lStack_120,&local_130,2);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  if (lVar7 == 0) {

    _objc_release(lVar8);

  }

  _objc_release(lVar7);

  local_150 = uVar11;

  FUN_002a4aa0(0x402a000000000000,&_OBJC_CLASS___UIFont);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_148 = uVar10;

  uStack_140 = uVar11;

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  local_138 = auVar13._0_8_;

  FUN_00294560(&_OBJC_CLASS___NSDictionary,auVar13._8_8_,&uStack_140,&local_150,2);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_release(uVar11);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__INeS7h_cWS,uVar5);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__hV_ec_Ny_j_J,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_H,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_H,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_SQQ_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_RleQvpenc,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf_window_CadisDatayear_month_day_weekday_weekdayNamelunarMonth_lunarDay_yi_jiweekDates_weekLabels_todayIndexwidth_cardWidth_cardHeightyearProgress_monthProgress_dayOfYearmondayFirst_holidayEnabled_xiuBanEnabledcolors_accent_selected_selectedText_bg_label_secondaryLabel_tertiaryLabel_fill

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_C,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf___cadis_width__cadis_card_width__cadis_card_height__cadis_bg__cadis_accent__cadis_selected__cadis_selected_text__cadis_label__cadis_secondary_label__cadis_tertiary_label__cadis_fill

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cP___S,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_ec,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_____,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_pQNNR,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_J,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_v,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_penccENS,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_d>eO_m<,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_H,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf_audio_addEventListener__play__function___CadisHaptic_start______setInterval_function___if__audio_paused_CadisHaptic_pulse_0_55_0_75_0_35_0_18____220__audio_addEventListener__pause__function___CadisHaptic_stop______

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_LhbLk_nmzw,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf___,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_f,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__g0WTLkX_Pw,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__Ny_O_ue_,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_NxbeN1__u,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_ek,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_C,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__uR,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_A,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf_CadisAudio_availableCadisAudio_urlForId_id_CadisAudio_save_file_cb_CadisAudio_list__opts__cb_CadisAudio_getMetadata_id_cb_CadisAudio_remove_id_cb_CadisAudio_clear_cb_CadisAudio_saveLyric_id_text_cb_CadisAudio_getLyric_id_cb_CadisAudio_removeLyric_id_cb_

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_available,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_urlForId,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_save,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_list,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_getMetadata,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_remove,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_clear,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_saveLyric,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_getLyric,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_removeLyric,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_eNbla,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__te_yO_TRvcv,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cPW_x_g,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_<,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_laH,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_J,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_addRect_x_y_w_h_color_cornerRadius_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__6R,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_x_y,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_w_h,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_color,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cornerRadius,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &cf_addLabel_x_y_w_h_text_fontSize_fontWeight_color_align_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__6R,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_text,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_fontSize,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_fontWeight,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_color,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_align,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_addCircle_cx_cy_r_color_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__6R,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cx_cy,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_r,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_addLine_x1_y1_x2_y2_color_lineWidth_dash_,

                         uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__6R,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_lineWidth,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_dash,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &cf_addArc_cx_cy_r_startAngle_endAngle_color_lineWidth_progress_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__6R,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_startAngle,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_endAngle,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_lineWidth,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_progress,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_getXiuBan_year_month_day_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_gc_egvO_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__yO_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_g,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__NSvc_u,uVar10);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_N0r,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_rSpe_fW___2N_ecNN<P,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__Nrn__NvrMn_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__accent_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__selected_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__selectedText_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__bg_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf___INrRMmr_j_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__label_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__secondaryLabel_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__tertiaryLabel_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__systemBg_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__secondaryBg_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__fill_,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_V_r,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &cf__white__black__clear__red__blue__green__orange_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__INASmQ6Rr,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf___FF5733___3498DB___2ECC71_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_N0S_uS,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_______,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_width,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cardWidth,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_cardHeight,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_egOo_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_year,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_month,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_day,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_weekday,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_weekdayName,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_weekOfYear,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_dayOfYear,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_daysInMonth,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_firstWeekday,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_isLeapYear,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_QSOo_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_lunarMonth,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_lunarDay,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_yi,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_ji,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_yearProgress,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_monthProgress,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_n_y,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_mondayFirst,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_holidayEnabled,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_xiuBanEnabled,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_V0hTegpenc,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_weekDates,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__day,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__month,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__year,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__weekday,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__isToday,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__isWeekend,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__lunar,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__xiuBan,uVar4);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_todayIndex,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_weekLabels,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf_space_s_,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_N0n_rS,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_Nx_NSvc_O_uNNSTNfrW___2N,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &cf_accentColor__accent_selectedColor__selected_bgColor__bg_,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_mQ0W_x_yO,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__yO,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf_varcw_cardWidth_ch_cardHeight_addRect_16_0_cw_ch_bgColor_14__addLabel_28_20_cw_40_30_month_____day_28__bold___label___center___addLabel_28_55_cw_40_16_weekdayName____lunarDay_13__regular___secondaryLabel___center___

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__yO,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_v,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf__yO,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,

                         &

                         cf_addRect_16_0_cardWidth_cardHeight_bgColor_14__addArc_80_60_40_undefined_undefined__fill__6_1__addArc_80_60_40_undefined_undefined_accentColor_6_yearProgress__addLabel_55_50_50_18_Math_round_yearProgress_100______16__bold__accentColor__center___

                         ,uVar9);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&cf_N0_O_ub_,uVar12);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  auVar13 = _objc_alloc(&_OBJC_CLASS___NSAttributedString);

  auVar13 = FUN_00296e80(auVar13._0_8_,auVar13._8_8_,&::cf__,uVar6);

  FUN_00291940(uVar3,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_0029cd60(uVar2,extraout_x1_04,uVar3);

  FUN_002a6220(uVar1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar13._0_8_,auVar13._8_8_,uVar2);

  _objc_release(auVar13._0_8_);

  FUN_002990e0(param_1);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_0029aa80(auVar13._0_8_,auVar13._8_8_,uVar1,1);

  _objc_release(auVar13._0_8_);

  _objc_release(uVar10);

  _objc_release(uVar4);

  _objc_release(uVar9);

  _objc_release(uVar6);

  _objc_release(uVar12);

  _objc_release(uVar5);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




