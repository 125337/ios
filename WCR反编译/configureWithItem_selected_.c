// configureWithItem:selected: @ 01ee44d0

/* Function Stack Size: 0x1c bytes */

void WCRefineToDoHTMLRepositoryCell::configureWithItem_selected_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ID IVar10;
  ID IVar11;
  cfstringStruct *local_2e0;
  undefined8 local_288;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_180;
  cfstringStruct *local_168;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  byte local_121;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  bool local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  bool local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = (cfstringStruct *)0x0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_a1 = (byte)param_4;
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_168 = &cf__g_TTNx;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_168;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_author)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_180 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_180 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_180;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_b9 = (byte)pcVar3;
  local_d1 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_1a0 = local_b0;
  }
  else {
    local_1a0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_1a0;
  }
  local_d1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1a0;
  if ((local_d1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  pcVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  local_e9 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1b0 = &::cf_space_s_;
  }
  else {
    local_1b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_1b0;
  }
  local_e9 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1b0;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc();
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByAppendingString__0269d398,local_e0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__NSForegroundColorAttributeName_02578070;
  local_48 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__NSFontAttributeName_02578068;
  local_40 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_38 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithString_attributes__026a02b0,pcVar2);
  local_f8 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = local_f8;
  local_68 = *(undefined8 *)puVar8;
  puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
  _objc_retainAutoreleasedReturnValue();
  local_60 = *(undefined8 *)puVar9;
  puVar9 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_58 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_50 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_68,2);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  pcVar3 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  local_108 = pcVar2;
  local_100 = pcVar3;
  local_88 = pcVar3;
  local_80 = pcVar2;
  local_78 = pcVar2;
  local_70 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_addAttributes_range__026c3bc0,puVar5,pcVar2,pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_nameLabel_026ad1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar10);
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_authorLabel_026c7e18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar10);
  if ((local_a1 & 1) == 0) {
    local_288 = 0x3ff8000000000000;
    if ((local_b9 & 1) == 0) {
      local_288 = 0;
    }
  }
  else {
    local_288 = 0x4000000000000000;
  }
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = IVar10;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_288);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(IVar10);
  local_111 = 0;
  local_121 = 0;
  if ((local_a1 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = puVar9;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
  }
  else {
    puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = puVar9;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
  }
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  IVar11 = IVar10;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(IVar10);
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar9);
  local_139 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_2e0 = &::cf___;
  }
  else {
    local_2e0 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_138 = local_2e0;
  }
  local_139 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_2e0;
  if ((local_139 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_a0;
  FUN_01ee51a0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_a0;
  local_148 = pcVar2;
  FUN_01ee55d4();
  _objc_retainAutoreleasedReturnValue();
  IVar10 = local_90;
  local_150 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_previewWebView_026c7e08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar10);
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_previewWebView_026c7e08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar10);
  IVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_previewWebView_026c7e08);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_148;
  FUN_01ee5898(local_148,local_150,local_130);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_130;
  FUN_01ee5d58();
  _objc_retainAutoreleasedReturnValue();
  IVar11 = IVar10;
  (*(code *)PTR__objc_msgSend_02578628)(IVar10,PTR_s_loadHTMLString_baseURL__026a1cf0,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setPendingPreviewNavigation__026c7e20);
  (*(code *)PTR__objc_release_02578630)(IVar11);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(IVar10);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

