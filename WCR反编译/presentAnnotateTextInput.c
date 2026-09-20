// presentAnnotateTextInput @ 016593a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::presentAnnotateTextInput(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uVar8;
  double in_d0;
  double dVar9;
  undefined8 in_d1;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double in_d2;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  cfstringStruct *local_518;
  double local_3b8;
  undefined *local_330;
  undefined4 local_328;
  undefined4 local_324;
  code *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  double local_300;
  undefined8 uStack_2f8;
  double local_2f0;
  undefined8 uStack_2e8;
  double local_2d8;
  undefined8 local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  undefined *local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  undefined8 uStack_258;
  undefined8 local_248;
  undefined8 local_240;
  double local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined *local_208;
  cfstringStruct *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  byte local_189;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  undefined *local_80;
  double local_78;
  undefined8 local_70;
  undefined *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textInputOverlay_026b1e18);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_dismissViewControllerAnimated_co_0269cf98,0,0);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_50 != (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSavedWindowLevelForTextInput_026b2210)
      ;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_windowLevel_026a0f70);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setSavedWindowLevelForTextInput__026b2250);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setHasSavedWindowLevelForTextInp_026b2220,1);
      }
      in_d1 = 0x4049000000000000;
      in_d0 = *(double *)PTR__UIWindowLevelNormal_02578238 + 50.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setWindowLevel__026caae8);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_makeKeyAndVisible_0269cd78);
    }
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = in_d0;
    local_70 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,puVar4,PTR_s_initWithFrame__026ca6e8);
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,0x12);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x3fd6666666666666;
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    local_a4 = 200;
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d2 = in_d2 - 40.0;
    local_d0 = uVar8;
    local_c8 = in_d1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_3b8 = in_d2;
    if (in_d2 <= (double)(long)local_a4) {
      local_3b8 = (double)(long)local_a4;
    }
    local_d8 = local_3b8;
    uVar8 = 0x4034000000000000;
    uVar10 = 0;
    dVar7 = 132.0;
    local_b0 = in_d2;
    FUN_0163f5dc();
    local_a0 = uVar8;
    local_98 = uVar10;
    local_90 = local_3b8;
    local_88 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithFrame__026ca6e8);
    pcVar2 = local_40;
    local_80 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar11 = 0x3fe0000000000000;
    dVar9 = local_3b8 * 0.5;
    pcVar3 = local_40;
    dVar14 = dVar9;
    local_108 = uVar8;
    local_100 = uVar10;
    local_f8 = local_3b8;
    local_f0 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar12 = dVar7 * DAT_02323e80;
    dVar15 = DAT_02323e80;
    local_128 = dVar14;
    local_120 = uVar11;
    local_118 = local_3b8;
    local_110 = dVar7;
    FUN_0164494c();
    local_140 = dVar9;
    dStack_138 = dVar12;
    local_e8 = dVar9;
    dStack_e0 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar12,local_80,PTR_s_setCenter__026ca8c0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAutoresizingMask__026ca878,0x2d);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,DAT_02324040,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar8 = DAT_02323c70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0x3ff0000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,0x74636172);
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
    dVar14 = dVar15 - 32.0;
    uVar11 = 0x4030000000000000;
    uVar13 = 0x4028000000000000;
    uVar16 = 0x4036000000000000;
    local_188 = uVar10;
    local_180 = uVar8;
    local_178 = dVar15;
    local_170 = dVar7;
    FUN_0163f5dc();
    local_168 = uVar11;
    local_160 = uVar13;
    local_158 = dVar14;
    local_150 = uVar16;
    (*(code *)PTR__objc_msgSend_02578628)(uVar11,uVar13,puVar4,PTR_s_initWithFrame__026ca6e8);
    pcVar3 = local_40;
    local_148 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_editingTextOverlay_026b2258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    pcVar2 = &cf__eW_hl;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = &cf_eW_hl;
    }
    local_189 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setText__026caa88,pcVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar8 = 0x4030000000000000;
    uVar11 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setAutoresizingMask__026ca878);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_148);
    puVar4 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
    uVar10 = 0x4030000000000000;
    dVar15 = dVar14 - 32.0;
    uVar13 = 0x4046000000000000;
    uVar17 = 0x4042000000000000;
    local_1d8 = uVar8;
    local_1d0 = uVar11;
    local_1c8 = dVar14;
    local_1c0 = uVar16;
    FUN_0163f5dc();
    local_1b8 = uVar10;
    local_1b0 = uVar13;
    local_1a8 = dVar15;
    local_1a0 = uVar17;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar10,uVar13,dVar15,uVar17,puVar4,PTR_s_initWithFrame__026ca6e8);
    local_198 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setAutoresizingMask__026ca878,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setPlaceholder__0269e9c8,&cf_eQhlveW_);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setTintColor__026caab0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar11 = 0x4042000000000000;
    uVar10 = 0;
    uVar8 = 0;
    dVar14 = 10.0;
    FUN_0163f5dc();
    local_1f8 = uVar8;
    local_1f0 = uVar10;
    local_1e8 = dVar14;
    local_1e0 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setLeftView__026b2260);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setLeftViewMode__026b2268,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setClearButtonMode__026a64e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setReturnKeyType__0269e9d0,9);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if ((local_189 & 1) != 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_editingTextOverlay_026b2258);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0164fd1c();
      _objc_retainAutoreleasedReturnValue();
      local_200 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_518 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_518 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setText__026caa88,local_518);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_200,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_198,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onAnnotateTextFieldReturn__026b2270,0x80000);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    local_38 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    uVar10 = 0x3ff0000000000000;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar8 = DAT_02323c78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithString_attributes__026a02b0,&cf_eQhlveW_);
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_setAttributedPlaceholder__026b2278);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_198);
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
    _objc_retainAutoreleasedReturnValue();
    local_208 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
    dVar7 = (dVar14 - 40.0) * 0.5;
    uVar13 = 0x4030000000000000;
    uVar16 = 0x4057000000000000;
    uVar17 = 0x403c000000000000;
    local_248 = uVar10;
    local_240 = uVar8;
    local_238 = dVar14;
    local_230 = uVar11;
    FUN_0163f5dc();
    local_270 = uVar13;
    uStack_268 = uVar16;
    local_260 = dVar7;
    uStack_258 = uVar17;
    local_228 = uVar13;
    uStack_220 = uVar16;
    local_218 = dVar7;
    uStack_210 = uVar17;
    (*(code *)PTR__objc_msgSend_02578628)(uVar13,uVar16,local_208,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setTitle_forState__026caab8,&cf_Sm);
    puVar4 = local_208;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3feb333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    dVar15 = 16.0;
    uVar8 = *(undefined8 *)PTR__UIFontWeightMedium_02578150;
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_208;
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_208,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onAnnotateTextCancel_026b2280);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_208);
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
    _objc_retainAutoreleasedReturnValue();
    local_278 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_frame_026ca640);
    local_2b8 = dVar15;
    local_2b0 = uVar8;
    local_2a8 = dVar7;
    local_2a0 = uVar17;
    _CGRectGetMaxX(dVar15,uVar8);
    uVar8 = 0x4020000000000000;
    dVar15 = dVar15 + 8.0;
    dVar14 = dVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
    uVar10 = 0x4057000000000000;
    uVar11 = 0x403c000000000000;
    dVar9 = (dVar7 - 40.0) * 0.5;
    local_2d8 = dVar14;
    local_2d0 = uVar8;
    local_2c8 = dVar7;
    local_2c0 = uVar17;
    FUN_0163f5dc();
    local_300 = dVar15;
    uStack_2f8 = uVar10;
    local_2f0 = dVar9;
    uStack_2e8 = uVar11;
    local_298 = dVar15;
    uStack_290 = uVar10;
    local_288 = dVar9;
    uStack_280 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar15,uVar10,dVar9,uVar11,local_278,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_setAutoresizingMask__026ca878,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_setTitle_forState__026caab8,&cf_nx_,0);
    puVar4 = local_278;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_278;
    (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_278,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_onAnnotateTextConfirm_026b2288,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addSubview__026ca4c0,local_278);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_80);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_308 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setCancelsTouchesInView__026ca8b8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addGestureRecognizer__026ca4a8,local_308);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextInputOverlay__026b2230,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextInputField__026b2238,local_198);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextInputAlert__026b2240,local_58);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_drawPan_026b1d38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_drawTap_026b1d50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_198;
    local_330 = PTR___NSConcreteStackBlock_02578660;
    local_328 = 0xc2000000;
    local_324 = 0;
    local_320 = FUN_0165acbc;
    local_318 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_310 = puVar5;
    _dispatch_async(puVar4,&local_330);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_310);
    _objc_storeStrong(&local_308,0);
    _objc_storeStrong(&local_278,0);
    _objc_storeStrong(&local_208,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textInputField_026b2228);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

