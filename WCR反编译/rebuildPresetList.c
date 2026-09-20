// rebuildPresetList @ 01bfa120

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsTailPickerViewController::rebuildPresetList(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  cfstringStruct *local_320;
  byte local_2f4;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2d8;
  uint local_298;
  uint local_294;
  undefined *local_268;
  cfstringStruct *local_158;
  uint local_13c;
  undefined *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  uint local_7c;
  undefined *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  SEL local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_postSessionMode_026c0b80);
  local_51 = 0;
  local_13c = 0;
  if ((param_1 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_13c = (uint)puVar2 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_13c & 1) != 0) goto LAB_01bfb504;
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_queryText_026c0bd0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_69 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_158 = &::cf___;
  }
  else {
    local_158 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_queryText_026c0bd0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_158;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_158;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_entriesMatchingQuery__026c0bd8,local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setEntries__026a2ba8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_postSessionMode_026c0b80);
  if (((ulong)pcVar3 & 1) == 0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf___);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setFooterTitle__0269e3c8,&::cf___);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    puVar9 = local_78;
    puVar7 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_onToggleEnabled__026c0bb0;
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,pcVar3,&cf_gSW_>__,
               puVar6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = ((ulong)puVar7 & 1) == 0;
    if (bVar1) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setListBuilt__026c0b90,0);
    }
    local_7c = (uint)bVar1;
    _objc_storeStrong(&local_78,0);
    if (local_7c == 0) goto LAB_01bfa708;
  }
  else {
LAB_01bfa708:
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_40;
    local_88 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_postSessionMode_026c0b80);
    pcVar3 = &cf__gaggSW;
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar3 = &cf_>__;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHeaderTitle__0269e3c0,pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displaySelectedTitle_026c0bb8);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0x10 < pcVar3) {
      pcVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_substringToIndex__0269d6c0,0x10);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_90;
      local_90 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    puVar2 = local_88;
    puVar7 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,0,
               local_40,&cf_S_MRb,local_90,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar2 = local_88;
    puVar7 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_onCustomInput_026c0bc0,local_40,&cf__INeQ,&::cf___,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_60;
    puVar7 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    pcVar3 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    local_268 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_a9 = 0;
    local_b9 = 0;
    local_c9 = 0;
    local_d9 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_stringWithFormat__0269cca8,&cf_Rh);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = local_268;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_stringWithFormat__0269cca8,&cf_d___g);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_268;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHeaderTitle__0269e3c0,local_268);
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFooterTitle__0269e3c8,&cf_psS_u__);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displaySelectedAppID_026c0ba8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_40;
    local_e8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_postSessionMode_026c0b80);
    local_f9 = 0;
    if ((((ulong)pcVar4 & 1) == 0) || ((DAT_028e4618 & 1) == 0)) {
LAB_01bfad78:
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_postSessionMode_026c0b80);
      local_298 = 0;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        local_298 = 0;
        if (pcVar3 == (cfstringStruct *)0x0) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          local_f8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_298 = (uint)puVar2;
        }
      }
      local_294 = local_298;
    }
    else {
      pcVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_294 = 1;
      if (pcVar3 != (cfstringStruct *)0x0) goto LAB_01bfad78;
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    local_e9 = (byte)local_294 & 1;
    pcVar3 = &::cf__;
    if ((local_294 & 1) == 0) {
      pcVar3 = &::cf___;
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_onPickNone_026c0be0,local_40,&cf_e_>__,pcVar3,0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,puVar2);
    _objc_storeStrong(&local_108,0);
    local_110 = (cfstringStruct *)0x0;
    while( true ) {
      pcVar3 = local_110;
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (pcVar8 <= pcVar3) break;
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_entries_026a25d0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      local_2d8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_2d8 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = local_2d8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_2f0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_2f0 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = local_2f0;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_2f4 = 0;
      if (pcVar3 != (cfstringStruct *)0x0) {
        pcVar3 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isEqualToString__0269ccc8,local_e8);
        local_2f4 = (byte)pcVar3;
      }
      pcVar3 = local_40;
      puVar7 = PTR_WCRefineHelper_026ce000;
      puVar2 = PTR_s_onPickPreset__026c0be8;
      local_129 = local_2f4 & 1;
      pcVar4 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_320 = local_120;
      }
      else {
        local_320 = local_128;
      }
      pcVar4 = &::cf__;
      if ((local_129 & 1) == 0) {
        pcVar4 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar2,pcVar3,local_320,
                 pcVar4,0);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
      puVar5 = local_138;
      puVar9 = PTR_s_onPickPreset__026c0be8;
      puVar2 = PTR_s_setUserInfo__026a17c8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_110);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar5,puVar9,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        local_38 = &cf_idx;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_110);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addCell__0269e3f8,local_138);
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      local_110 = (cfstringStruct *)((long)&local_110->field0_0x0 + 1);
    }
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setListBuilt__026c0b90,1);
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_60,0);
LAB_01bfb504:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

