// presentThemeStockPluginStyleSheetWithTitle:displayName:linkedMsgRepoCode:codes: @ 0173f0a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

void ThemeBoxAirDropViewController::
     presentThemeStockPluginStyleSheetWithTitle_displayName_linkedMsgRepoCode_codes_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  undefined *puVar66;
  undefined *puVar67;
  undefined *puVar68;
  undefined *puVar69;
  undefined *puVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  double dVar75;
  cfstringStruct *local_410;
  cfstringStruct *local_368;
  cfstringStruct *local_2f0;
  undefined *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  code *local_288;
  undefined *local_280;
  ID local_278;
  char *local_270;
  undefined8 local_268;
  undefined8 local_260;
  double local_248;
  char *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  char *local_130;
  undefined4 local_124;
  char *local_120;
  char *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  SEL local_f0;
  ID local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_f8,param_3);
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_4);
  local_108 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_108,param_5);
  local_110 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_110,param_6);
  pcVar2 = "MMPageSheetConfig";
  _objc_getClass();
  pcVar3 = "MMPageSheetAdapter";
  local_118 = pcVar2;
  _objc_getClass();
  local_120 = pcVar3;
  if ((local_118 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yJSO__);
    local_124 = 1;
  }
  else {
    pcVar2 = local_118;
    _objc_alloc_init();
    local_130 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTitle__0269cef0,local_f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setNavLeftStyle__026aa730,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setEnableDragToClose__026aa740,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_preparePageSheetConfigForMultili_026b3f40,local_130
              );
    puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_138 = puVar4;
    _objc_alloc();
    puVar4 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_140 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar4,*(undefined8 *)(puVar4 + 8),*(undefined8 *)(puVar4 + 0x10),
               *(undefined8 *)(puVar4 + 0x18));
    local_148 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setPlaceholder__0269e9c8,&cf__NTy_N___TT);
    if (local_100 == (cfstringStruct *)0x0) {
      local_2f0 = &::cf___;
    }
    else {
      local_2f0 = local_100;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setText__026caa88,local_2f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setClearButtonMode__026a64e0,1);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setMinimumFontSize__026b3f78);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar73 = 0x4028000000000000;
    uVar74 = 0;
    uVar71 = 0;
    uVar72 = 0;
    FUN_017413d4();
    local_168 = uVar71;
    local_160 = uVar72;
    local_158 = uVar73;
    local_150 = uVar74;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar71,uVar72,uVar73,uVar74,puVar4,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setLeftView__026b2260);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setLeftViewMode__026b2268);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar74 = 0x4028000000000000;
    uVar73 = 0;
    uVar71 = uVar73;
    uVar72 = uVar73;
    FUN_017413d4();
    local_188 = uVar73;
    local_180 = uVar71;
    local_178 = uVar74;
    local_170 = uVar72;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar73,uVar71,uVar74,uVar72,puVar4,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setRightView__026a64d0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setRightViewMode__026a64d8,3);
    puVar4 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_190 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_setPlaceholder__0269e9c8,&cf_sQTRVYQ_mo_N_SNx);
    if (local_108 == (cfstringStruct *)0x0) {
      local_368 = &::cf___;
    }
    else {
      local_368 = local_108;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setText__026caa88,local_368);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setClearButtonMode__026a64e0);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setAutocapitalizationType__026ac818,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setAutocorrectionType__026ac820,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4026000000000000,local_190,PTR_s_setMinimumFontSize__026b3f78);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar74 = 0;
    uVar71 = 0;
    uVar72 = 0;
    uVar73 = 0x4028000000000000;
    FUN_017413d4();
    local_1b0 = uVar71;
    local_1a8 = uVar72;
    local_1a0 = uVar73;
    local_198 = uVar74;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar71,uVar72,uVar73,uVar74,puVar4,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setLeftView__026b2260);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setLeftViewMode__026b2268);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar74 = 0x4028000000000000;
    uVar73 = 0;
    uVar71 = uVar73;
    uVar72 = uVar73;
    FUN_017413d4();
    local_1d0 = uVar73;
    local_1c8 = uVar71;
    local_1c0 = uVar74;
    local_1b8 = uVar72;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar73,uVar71,uVar74,uVar72,puVar4,PTR_s_initWithFrame__026ca6e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setRightView__026a64d0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setRightViewMode__026a64d8,3);
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_1d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_separatorColor_026a20e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    _objc_alloc_init();
    local_1e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_110 == (cfstringStruct *)0x0) {
      local_410 = &::cf___;
    }
    else {
      local_410 = local_110;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setText__026caa88,local_410);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar73 = 0x402c000000000000;
    uVar71 = 0x402c000000000000;
    dVar75 = 16.0;
    uVar72 = 0x4030000000000000;
    FUN_01737f0c();
    local_220 = uVar71;
    uStack_218 = uVar72;
    local_200 = uVar71;
    uStack_1f8 = uVar72;
    local_1f0 = uVar73;
    dStack_1e8 = dVar75;
    (*(code *)PTR__objc_msgSend_02578628)(uVar71,local_1e0,PTR_s_setTextContainerInset__026a9fd8);
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_setDelegate__026ca910,local_e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_attachMultilineKeyboardAvoidance_026b3f48,local_1e0
              );
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_228 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setText__026caa88,&cf_QQbcx_X_);
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setNumberOfLines__026ca9d8);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_setTitle_forState__026caab8,&cf_Rddk_N,0);
    puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_230;
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_230,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_e8,
               PTR_s_onTapDeleteThemeInSheet_026b3f80,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_148);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_190);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_1d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_1e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_228);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addSubview__026ca4c0,local_230);
    _objc_setAssociatedObject(local_1e0,&DAT_028e3fa0,local_228,1);
    puVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_safeAreaLayoutGuide_0269cf90);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
    puVar6 = local_148;
    local_238 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4020000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_148;
    local_e0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar8,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = local_148;
    local_d8 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = local_148;
    local_d0 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = local_190;
    local_c8 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = local_190;
    local_c0 = puVar18;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar19,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = local_190;
    local_b8 = puVar21;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar22;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar22,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = local_190;
    local_b0 = puVar24;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    (*(code *)PTR__objc_msgSend_02578628)(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = local_1d8;
    local_a8 = puVar26;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar27;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4000000000000000,puVar27,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar30 = local_1d8;
    local_a0 = puVar29;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar30;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar30,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = local_1d8;
    local_98 = puVar32;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar33;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar33,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar36 = local_1d8;
    local_90 = puVar35;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar36;
    (*(code *)PTR__objc_msgSend_02578628)(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar38 = local_1e0;
    local_88 = puVar37;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar39 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar40 = puVar38;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,puVar38,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar41 = local_1e0;
    local_80 = puVar40;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar42 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar43 = puVar41;
    (*(code *)PTR__objc_msgSend_02578628)(puVar41,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar44 = local_1e0;
    local_78 = puVar43;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar45 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar46 = puVar44;
    (*(code *)PTR__objc_msgSend_02578628)(puVar44,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar47 = local_1e0;
    local_70 = puVar46;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar48 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar47;
    (*(code *)PTR__objc_msgSend_02578628)(puVar47,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar50 = local_228;
    local_68 = puVar49;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar51 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_topAnchor_0269ce30);
    _objc_retainAutoreleasedReturnValue();
    puVar52 = puVar50;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,puVar50,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar53 = local_228;
    local_60 = puVar52;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar54 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar55 = puVar53;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,puVar53,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar56 = local_228;
    local_58 = puVar55;
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar57 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar58 = puVar56;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc030000000000000,puVar56,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar59 = local_230;
    local_50 = puVar58;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar60 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar61 = puVar59;
    (*(code *)PTR__objc_msgSend_02578628)(puVar59,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar62 = local_230;
    local_48 = puVar61;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar63 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar64 = puVar62;
    (*(code *)PTR__objc_msgSend_02578628)(puVar62,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    puVar65 = local_230;
    local_40 = puVar64;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar66 = local_238;
    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_bottomAnchor_0269ce38);
    _objc_retainAutoreleasedReturnValue();
    puVar67 = puVar65;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc020000000000000,puVar65,PTR_s_constraintEqualToAnchor_constant_0269ce18);
    _objc_retainAutoreleasedReturnValue();
    puVar68 = local_230;
    local_38 = puVar67;
    (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_heightAnchor_0269ce50);
    _objc_retainAutoreleasedReturnValue();
    uVar71 = 0x4048000000000000;
    puVar69 = puVar68;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar70 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar69;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,
               0x17);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
    (*(code *)PTR__objc_release_02578630)(puVar70);
    (*(code *)PTR__objc_release_02578630)(puVar69);
    (*(code *)PTR__objc_release_02578630)(puVar68);
    (*(code *)PTR__objc_release_02578630)(puVar67);
    (*(code *)PTR__objc_release_02578630)(puVar66);
    (*(code *)PTR__objc_release_02578630)(puVar65);
    (*(code *)PTR__objc_release_02578630)(puVar64);
    (*(code *)PTR__objc_release_02578630)(puVar63);
    (*(code *)PTR__objc_release_02578630)(puVar62);
    (*(code *)PTR__objc_release_02578630)(puVar61);
    (*(code *)PTR__objc_release_02578630)(puVar60);
    (*(code *)PTR__objc_release_02578630)(puVar59);
    (*(code *)PTR__objc_release_02578630)(puVar58);
    (*(code *)PTR__objc_release_02578630)(puVar57);
    (*(code *)PTR__objc_release_02578630)(puVar56);
    (*(code *)PTR__objc_release_02578630)(puVar55);
    (*(code *)PTR__objc_release_02578630)(puVar54);
    (*(code *)PTR__objc_release_02578630)(puVar53);
    (*(code *)PTR__objc_release_02578630)(puVar52);
    (*(code *)PTR__objc_release_02578630)(puVar51);
    (*(code *)PTR__objc_release_02578630)(puVar50);
    (*(code *)PTR__objc_release_02578630)(puVar49);
    (*(code *)PTR__objc_release_02578630)(puVar48);
    (*(code *)PTR__objc_release_02578630)(puVar47);
    (*(code *)PTR__objc_release_02578630)(puVar46);
    (*(code *)PTR__objc_release_02578630)(puVar45);
    (*(code *)PTR__objc_release_02578630)(puVar44);
    (*(code *)PTR__objc_release_02578630)(puVar43);
    (*(code *)PTR__objc_release_02578630)(puVar42);
    (*(code *)PTR__objc_release_02578630)(puVar41);
    (*(code *)PTR__objc_release_02578630)(puVar40);
    (*(code *)PTR__objc_release_02578630)(puVar39);
    (*(code *)PTR__objc_release_02578630)(puVar38);
    (*(code *)PTR__objc_release_02578630)(puVar37);
    (*(code *)PTR__objc_release_02578630)(puVar36);
    (*(code *)PTR__objc_release_02578630)(puVar35);
    (*(code *)PTR__objc_release_02578630)(puVar34);
    (*(code *)PTR__objc_release_02578630)(puVar33);
    (*(code *)PTR__objc_release_02578630)(puVar32);
    (*(code *)PTR__objc_release_02578630)(puVar31);
    (*(code *)PTR__objc_release_02578630)(puVar30);
    (*(code *)PTR__objc_release_02578630)(puVar29);
    (*(code *)PTR__objc_release_02578630)(puVar28);
    (*(code *)PTR__objc_release_02578630)(puVar27);
    (*(code *)PTR__objc_release_02578630)(puVar26);
    (*(code *)PTR__objc_release_02578630)(puVar25);
    (*(code *)PTR__objc_release_02578630)(puVar24);
    (*(code *)PTR__objc_release_02578630)(puVar23);
    (*(code *)PTR__objc_release_02578630)(puVar22);
    (*(code *)PTR__objc_release_02578630)(puVar21);
    (*(code *)PTR__objc_release_02578630)(puVar20);
    (*(code *)PTR__objc_release_02578630)(puVar19);
    (*(code *)PTR__objc_release_02578630)(puVar18);
    (*(code *)PTR__objc_release_02578630)(puVar17);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar4 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_228,PTR_s_setHidden__026ca970,puVar5 != (undefined *)0x0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setView__026aa750,local_140);
    _objc_setAssociatedObject(local_e8,&DAT_028e3fa3,local_148,1);
    _objc_setAssociatedObject(local_e8,&DAT_028e3fa4,local_190,1);
    _objc_setAssociatedObject(local_e8,&DAT_028e3fa1,local_1e0,1);
    _objc_setAssociatedObject(local_e8,&DAT_028e3fa2,&cf_codes,3);
    pcVar2 = local_120;
    _objc_alloc_init();
    local_240 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setPageSheetConfig__026aa758,local_130);
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_setHostViewController__026a58c8,local_138)
    ;
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar75 = (dVar75 * 3.0) / 5.0;
    local_268 = uVar71;
    local_260 = uVar72;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_248 = dVar75;
    (*(code *)PTR__objc_msgSend_02578628)(dVar75,local_240,PTR_s_setContentHeight__026aa760);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAirDropSheet__026b3f50,local_240);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_WCRefineHelper_026ce000,PTR_s_attachKeyboardSyncToPageSheet_in_026b3f58
               ,local_240,local_148);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showPageSheet_animated_thenFocus_026b3f60,local_240
               ,1,local_148);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e8;
    local_298 = PTR___NSConcreteStackBlock_02578660;
    local_290 = 0xc2000000;
    local_28c = 0;
    local_288 = FUN_01741420;
    local_280 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_240;
    local_278 = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = pcVar2;
    _dispatch_async(puVar4,&local_298);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_270);
    _objc_storeStrong(&local_278,0);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_148,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    local_124 = 0;
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

