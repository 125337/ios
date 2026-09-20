// updateTableHeaderView @ 01ce9714

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardFunctionPageViewController::updateTableHeaderView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  double dVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_410;
  undefined *local_320;
  undefined *local_290;
  undefined8 local_288;
  undefined8 local_280;
  double local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  undefined8 local_258;
  double local_250;
  undefined8 local_248;
  undefined *local_240;
  bool local_231;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined *local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_60;
  SEL local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar8 = DAT_02323e70;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar5 = DAT_02323e70;
  local_58 = param_2;
  local_50 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_80 = dVar5;
  _CGRectGetWidth(dVar5,in_d1,in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_60 = dVar5;
  if (0.0 < dVar5) {
    local_88 = 0x4032000000000000;
    local_90 = dVar5 - 36.0;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar7 = 0;
    uVar6 = 0;
    uVar9 = 0x4066000000000000;
    dVar5 = local_60;
    FUN_01cea980();
    local_b8 = uVar6;
    local_b0 = uVar7;
    local_a8 = dVar5;
    local_a0 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,dVar5,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = 0x4028000000000000;
    uVar7 = 0x4062800000000000;
    uVar6 = local_88;
    dVar5 = local_90;
    FUN_01cea980();
    local_e0 = uVar6;
    local_d8 = uVar9;
    local_d0 = dVar5;
    local_c8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x403a000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addSubview__026ca4c0,local_c0);
    puVar1 = PTR__OBJC_CLASS___CAGradientLayer_026ce928;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAGradientLayer_026ce928,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_bounds_026ca548);
    local_130 = uVar6;
    uStack_128 = uVar9;
    local_120 = dVar5;
    uStack_118 = uVar7;
    local_108 = uVar6;
    uStack_100 = uVar9;
    local_f8 = dVar5;
    uStack_f0 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar9,dVar5,uVar7,local_e8,PTR_s_setFrame__026ca960)
    ;
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isGroupContact_026c3a30);
    local_139 = 0;
    local_149 = 0;
    local_159 = 0;
    local_169 = 0;
    local_179 = 0;
    local_189 = 0;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fee666666666666,dVar8,DAT_02339790,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = puVar1;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,DAT_02323ee8,DAT_02339b00,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_179 = 1;
      local_178 = puVar2;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      local_320 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_189 = 1;
      local_188 = local_320;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02339dd0,0x3fee666666666666,DAT_02323ec0,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = puVar1;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02339848,dVar8,DAT_02324040,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = puVar2;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      local_320 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_158 = local_320;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setColors__026ca8d0,local_320);
    if ((local_189 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    if ((local_179 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_178);
    }
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    uVar7 = 0;
    uVar6 = 0;
    FUN_01cea9cc();
    local_1b0 = uVar6;
    uStack_1a8 = uVar7;
    local_1a0 = uVar6;
    uStack_198 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,local_e8,PTR_s_setStartPoint__026caa70);
    uVar7 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    FUN_01cea9cc();
    local_1d0 = uVar6;
    uStack_1c8 = uVar7;
    local_1c0 = uVar6;
    uStack_1b8 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,local_e8,PTR_s_setEndPoint__026ca940);
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar6 = 0x4036000000000000;
    uVar7 = 0x4039000000000000;
    uVar10 = 0x404d000000000000;
    uVar9 = 0x404d000000000000;
    FUN_01cea980();
    local_1f8 = uVar6;
    local_1f0 = uVar7;
    local_1e8 = uVar9;
    local_1e0 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar6 = DAT_02323d70;
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4032000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_1d8);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_bounds_026ca548);
    local_220 = uVar7;
    local_218 = uVar6;
    local_210 = uVar9;
    local_208 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar6,uVar9,uVar10,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_200 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTextAlignment__026caa90,1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4038000000000000,*(undefined8 *)PTR__UIFontWeightBold_02578140,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,DAT_02323e00,DAT_02323e88,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_01cea9f8();
    _objc_retainAutoreleasedReturnValue();
    local_228 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_228;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_length_0269cca0);
    local_231 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_410 = &cf__;
    }
    else {
      local_410 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_substringToIndex__0269d6c0,1);
      _objc_retainAutoreleasedReturnValue();
      local_230 = local_410;
    }
    local_231 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setText__026caa88,local_410);
    if ((local_231 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_230);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addSubview__026ca4c0,local_200);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    dVar8 = local_90 - 118.0;
    uVar6 = 0x4058000000000000;
    uVar7 = 0x403c000000000000;
    uVar9 = 0x403e000000000000;
    FUN_01cea980();
    local_260 = uVar6;
    local_258 = uVar7;
    local_250 = dVar8;
    local_248 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,dVar8,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_240 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c68,DAT_02323f10,DAT_02323df8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4037000000000000,*(undefined8 *)PTR__UIFontWeightBold_02578140,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setText__026caa88,local_228);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_240);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar6 = 0x4058000000000000;
    dVar8 = local_90 - 118.0;
    uVar7 = 0x404e000000000000;
    uVar9 = 0x4036000000000000;
    FUN_01cea980();
    local_288 = uVar6;
    local_280 = uVar7;
    local_278 = dVar8;
    local_270 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,dVar8,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_268 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd3333333333333,DAT_02332e48,DAT_02323f38,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isGroupContact_026c3a30);
    pcVar3 = &cf__JDeaSRu;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar3 = &cf__YSDeaSRu;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_setText__026caa88,pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_268);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar7 = 0x4036000000000000;
    dVar8 = local_90 - 44.0;
    uVar6 = 0x4058800000000000;
    uVar9 = 0x4042000000000000;
    FUN_01cea980();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar6,dVar8,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_290 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNumberOfLines__026ca9d8,2);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324028,DAT_023243c0,DAT_02339b08,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_290,PTR_s_setText__026caa88,&cf_Oc_OvMn_U__y_wcR0r_WROvc>f_y);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSubview__026ca4c0,local_290);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_storeStrong(&local_290);
    _objc_storeStrong(&local_268,0);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_98,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

