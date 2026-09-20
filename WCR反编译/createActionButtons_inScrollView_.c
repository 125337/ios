// createActionButtons:inScrollView: @ 01d44b94

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotFrameEditorViewController::createActionButtons_inScrollView_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double in_d2;
  undefined8 uVar11;
  ID local_240;
  undefined *local_1a8;
  double local_1a0;
  undefined8 uStack_198;
  double local_190;
  undefined8 uStack_188;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined *local_158;
  double local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  double local_90;
  undefined8 local_80;
  undefined *local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_48;
  undefined8 local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  uVar2 = DAT_02323c68;
  local_40 = 0;
  uVar8 = DAT_02323c68;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar7 = in_d2 - 100.0;
  uVar10 = 0x4010000000000000;
  local_68 = param_3;
  local_60 = uVar8;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_70 = 20.0;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = dVar7 / 4.0;
  _objc_alloc();
  dVar7 = local_38;
  IVar3 = local_28;
  dVar9 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar8 = 0;
  uVar11 = 0x4046000000000000;
  local_b8 = dVar9;
  local_b0 = uVar10;
  FUN_01d42a30();
  local_98 = uVar8;
  local_90 = dVar7;
  local_80 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,dVar7,in_d2,uVar11,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_78 = puVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTag__026caa80,0x4a39);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_78);
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  uVar11 = 0x4046000000000000;
  uVar8 = 0x4034000000000000;
  dVar7 = local_48;
  local_c0 = puVar4;
  FUN_01d42a30();
  local_100 = uVar8;
  uStack_f8 = uVar10;
  local_f0 = dVar7;
  uStack_e8 = uVar11;
  local_e0 = uVar8;
  uStack_d8 = uVar10;
  local_d0 = dVar7;
  uStack_c8 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar10,dVar7,uVar11,local_c0,PTR_s_setFrame__026ca960)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setTag__026caa80,0x4e22);
  puVar4 = local_c0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isDoubleMode_026c4670);
  pcVar1 = &cf_SV_j_;
  if ((IVar3 & 1) == 0) {
    pcVar1 = &cf_USV_j_;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle_forState__026caab8,pcVar1);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02324020,DAT_02339db0,DAT_02323e70,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_c0;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_modeButtonTapped_026c4770);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_c0);
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar10 = 0x4046000000000000;
  dVar9 = local_48 + 20.0 + local_70;
  dVar7 = local_48;
  local_108 = puVar4;
  FUN_01d42a30();
  local_150 = dVar9;
  uStack_148 = uVar8;
  local_140 = dVar7;
  uStack_138 = uVar10;
  local_128 = dVar9;
  uStack_120 = uVar8;
  local_118 = dVar7;
  uStack_110 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(dVar9,uVar8,dVar7,uVar10,local_108,PTR_s_setFrame__026ca960)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTitle_forState__026caab8,&cf_n_pMO,0);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f88,DAT_02323d58,DAT_02323e08,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_108;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_resetButtonTapped_026c4778,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_108);
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar10 = 0x4046000000000000;
  dVar9 = (local_48 + local_70) * 2.0 + 20.0;
  dVar7 = local_48;
  local_158 = puVar4;
  FUN_01d42a30();
  local_1a0 = dVar9;
  uStack_198 = uVar8;
  local_190 = dVar7;
  uStack_188 = uVar10;
  local_178 = dVar9;
  uStack_170 = uVar8;
  local_168 = dVar7;
  uStack_160 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)(dVar9,uVar8,dVar7,uVar10,local_158,PTR_s_setFrame__026ca960)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setTitle_forState__026caab8,&cf_zf_hQ,0);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,DAT_02339ae8,DAT_02323f00,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_158;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_158,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_calibrateButtonTapped_026c4780,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_158);
  puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  uVar10 = 0x4046000000000000;
  dVar9 = (local_48 + local_70) * 3.0 + 20.0;
  dVar7 = local_48;
  local_1a8 = puVar4;
  FUN_01d42a30();
  (*(code *)PTR__objc_msgSend_02578628)(dVar9,uVar8,dVar7,uVar10,local_1a8,PTR_s_setFrame__026ca960)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTag__026caa80,0x4e23);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTitle_forState__026caab8,&cf_>f_yC,0);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  dVar7 = DAT_02339af0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d40,DAT_02323db8,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_1a8;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_boldSystemFontOfSize__0269cf28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_1a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1a8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
             PTR_s_showCFGButtonTapped_026c4788,0x40);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_1a8);
  dVar9 = local_38 + 60.0;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar9,local_28,PTR_s_createNameAndAuthorFields_inScro_026c4790,local_40);
  dVar9 = dVar9 + 90.0;
  puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
  _objc_alloc();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar10 = 0x4034000000000000;
  dVar7 = dVar7 - 40.0;
  uVar8 = 0x4071800000000000;
  FUN_01d42a30();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar10,dVar9,dVar7,uVar8,puVar4,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCfgTextView__026c4798);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_greenColor_026c47a8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_fontWithName_size__026a1cd0,
             &cf_Menlo);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgFilePath_026c4678);
  _objc_retainAutoreleasedReturnValue();
  if (IVar3 != 0) {
    local_240 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgFilePath_026c4678);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_240);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uVar2 = local_40;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cfgTextView_026c47a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_40,0);
  return;
}

