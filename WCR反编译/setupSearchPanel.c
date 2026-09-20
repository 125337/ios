// setupSearchPanel @ 0195f9b4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupSearchPanel(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  ID IVar14;
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
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *local_130;
  undefined *local_128;
  ID local_120;
  ID local_118;
  ID local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  SEL local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  ID local_a0;
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
  ID local_48;
  ID local_40;
  undefined *local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c8 = param_2;
  local_c0 = param_1;
  _objc_alloc_init();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3dcccccd);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar34 = 0;
  uVar35 = 0x4000000000000000;
  FUN_0195e30c();
  puVar1 = local_d0;
  local_e0 = uVar34;
  uStack_d8 = uVar35;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uStack_d8;
  local_f0 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,uStack_d8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setClipsToBounds__026ca8c8,0);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_d0,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHidden__026ca970,1);
  IVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSearchPanel__026b9e50,local_d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,local_c0,PTR_s_addFrostedBackgroundTo_cornerRad_026b9d78,local_d0);
  puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc_init();
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setPlaceholder__0269e9c8,&cf_d___);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setReturnKeyType__0269e9d0,6);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAutocorrectionType__026ac820);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAutocapitalizationType__026ac818);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setClearButtonMode__026a64e0,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setDelegate__026ca910,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_c0,
             PTR_s_searchFieldChanged_026b9e58,0x20000);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSearchField__026b9e60,local_f8);
  puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  _objc_alloc_init();
  local_100 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setPlaceholder__0269e9c8,&cf_fbc_N_);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setReturnKeyType__0269e9d0,9);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocorrectionType__026ac820,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setAutocapitalizationType__026ac818,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setDelegate__026ca910,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setReplaceField__026b9e68,local_100);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_108 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setTextColor__026caa98);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setText__026caa88,&cf_0_0);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSearchCountLabel__026b9e70,local_108);
  IVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_makeCompactSearchButton_action__026b9e80,&::cf__,
             PTR_s_jumpToPreviousSearchMatch_026b9e78);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_c0;
  local_110 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_makeCompactSearchButton_action__026b9e80,&::cf__,
             PTR_s_jumpToNextSearchMatch_026b9e88);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_c0;
  local_118 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_makeCompactSearchButton_action__026b9e80,&cf_hQfbc,
             PTR_s_replaceAllSearchMatches_026b9e90);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_120 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc();
  local_48 = local_110;
  local_40 = local_118;
  local_38 = local_108;
  local_30 = local_120;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithArrangedSubviews__0269cf70);
  local_128 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setAxis__0269cf78,0);
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000,local_128,PTR_s_setSpacing__0269cf80);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setAlignment__026ca858);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0)
  ;
  puVar1 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc();
  local_60 = local_f8;
  local_58 = local_100;
  local_50 = local_128;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithArrangedSubviews__0269cf70);
  local_130 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setAxis__0269cf78,1);
  (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000,local_130,PTR_s_setSpacing__0269cf80);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addSubview__026ca4c0,local_130);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setSearchPanelHeightConstraint__026b9e98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setEditorCardBottomConstraint__026b9ea0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4030000000000000,puVar2,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_d0;
  local_b8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc030000000000000,puVar6,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_d0;
  local_b0 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_actionBar_026b9dc0);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = IVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc020000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  IVar14 = local_c0;
  local_a8 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_searchPanelHeightConstraint_026b9df0);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = local_130;
  local_a0 = IVar14;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,puVar15,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = local_130;
  local_98 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc028000000000000,puVar18,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = local_130;
  local_90 = puVar20;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,puVar21,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = local_130;
  local_88 = puVar23;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar24;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc024000000000000,puVar24,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = local_f8;
  local_80 = puVar26;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar27;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = local_100;
  local_78 = puVar28;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar29;
  (*(code *)PTR__objc_msgSend_02578628)(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar31 = local_108;
  local_70 = puVar30;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_widthAnchor_0269ce40);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar31;
  (*(code *)PTR__objc_msgSend_02578628)(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_68 = puVar32;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,0xb
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
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
  (*(code *)PTR__objc_release_02578630)(IVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

