// setupCardUI @ 0094a310

/* Function Stack Size: 0x10 bytes */

void WCRClipboardHistoryPanelController::setupCardUI(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined *local_c0;
  undefined *local_b8;
  byte local_ac [4];
  undefined *local_a8;
  undefined *local_a0;
  SEL local_98;
  ID local_90;
  undefined *local_88 [4];
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  uVar9 = DAT_023243c8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_98 = param_2;
  local_90 = param_1;
  _objc_alloc();
  puVar8 = PTR__CGRectZero_025782f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardToolbar__026aa8b0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_38 = &cf_aSGr_j_;
  local_30 = &cf_Rh_j_;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setViewModeSegment__026aa8c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isListMode_026aa8c8);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewModeSegment_026aa8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewModeSegment_026aa8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_viewModeSegment_026aa8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
  _objc_alloc();
  local_48 = &cf_ez_;
  local_40 = &cf_eP_;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithItems__0269e9d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setSortOrderSegment__026aa8e0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_sortOrderSegment_026aa8f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_sortOrderSegment_026aa8f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_sortOrderSegment_026aa8f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf__OZSO;
  FUN_0094bb44(&cf__OZSO,&DAT_00002263);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_e_g;
  FUN_0094bb44(&cf_e_g,&DAT_00002264);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_6e;
  FUN_0094bb44(&cf_6e,&DAT_00002262);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = &cf_vcS;
  FUN_0094bb44(&cf_vcS,&DAT_00002261);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardWeChatMediaSwitch__026aa900);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardTextOnlySwitch__026aa908);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardShowFavoritesSwitch__026aa910);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardDirectSendSwitch__026aa918);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardWeChatMediaSwitch_026aa920);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  local_68 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardTextOnlySwitch_026aa928);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_90;
  local_60 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardShowFavoritesSwitch_026aa930);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_90;
  local_58 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardDirectSendSwitch_026aa938);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = IVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar8;
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar8 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_clipboardHistoryWeChatMediaEnabl_026aa940);
  local_ac[0] = (byte)puVar8;
  puVar8 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_clipboardHistoryTextOnlyEnabled_026aa948);
  local_ac[1] = (byte)puVar8;
  puVar8 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_clipboardHistoryShowFavoritesEna_026aa950);
  local_ac[2] = (byte)puVar8;
  puVar8 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_clipboardHistoryDirectSendEnable_026aa958);
  local_ac[3] = (byte)puVar8;
  local_88[0] = PTR_s_toggleWeChatMedia__026aa960;
  local_88[1] = PTR_s_toggleTextOnly__026aa968;
  local_88[2] = PTR_s_toggleShowFavorites__026aa970;
  local_88[3] = PTR_s_toggleDirectSend__026aa978;
  for (local_b8 = (undefined *)0x0; puVar8 = local_b8, puVar1 = local_a0,
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0), puVar8 < puVar1;
      local_b8 = local_b8 + 1) {
    puVar8 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_objectAtIndexedSubscript__0269cc78,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar8;
    _CGAffineTransformMakeScale(uVar9);
    puVar8 = local_c0;
    _memcpy(auStack_120,auStack_f0,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_setTransform__026caad0,auStack_120);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setOn__0269dc80,local_ac[(long)local_b8] & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_90,
               local_88[(long)local_b8],0x1000);
    IVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardToolbar_026aa8b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_c0,0);
  }
  puVar8 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  _objc_alloc_init();
  local_128 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_setScrollDirection__026aa980);
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setMinimumLineSpacing__026aa988);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,local_128,PTR_s_setMinimumInteritemSpacing__026aa990);
  uVar11 = 0x4024000000000000;
  uVar9 = 0x4010000000000000;
  uVar12 = 0x402c000000000000;
  uVar10 = 0x402c000000000000;
  FUN_0094bd50();
  local_170 = uVar9;
  uStack_168 = uVar10;
  local_160 = uVar11;
  uStack_158 = uVar12;
  local_148 = uVar9;
  uStack_140 = uVar10;
  local_138 = uVar11;
  uStack_130 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar10,uVar11,uVar12,local_128,PTR_s_setSectionInset__026aa998);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
  _objc_alloc();
  puVar8 = PTR__CGRectZero_025782f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCollectionView__026aa9a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRClipboardHistoryCardCell_026ceab0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryCardCell_026ceab0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_registerClass_forCellWithReuseId_026aa9b0,puVar1,&cf_wcr_clip_card_cell);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18),PTR_WCRefineHelper_026ce000,
             PTR_s_pluginPageTableWithFrame_style__026aa9b8,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setListTableView__026aa9c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar12 = 0;
  uVar9 = 0;
  uVar10 = 0x4053000000000000;
  uVar11 = 0;
  FUN_0094bd50();
  IVar2 = local_90;
  local_190 = uVar9;
  uStack_188 = uVar10;
  local_180 = uVar11;
  uStack_178 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uStack_188;
  local_1b0 = local_190;
  uStack_198 = uStack_178;
  local_1a0 = local_180;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,uStack_188,local_180,uStack_178);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4052800000000000);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRClipboardHistoryListCell_026ceab8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryListCell_026ceab8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_registerClass_forCellReuseIdenti_026aa9d0,puVar1,&cf_wcr_clip_list_cell);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c78,puVar1,PTR_s_setMinimumPressDuration__026ca9c8)
  ;
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_listTableView_026aa9c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)puVar8,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10),
             *(undefined8 *)(puVar8 + 0x18));
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setCardEmptyLabel__026aa9e0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar8 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardEmptyLabel_026aa9e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

