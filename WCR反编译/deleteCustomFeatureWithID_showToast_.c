// deleteCustomFeatureWithID:showToast: @ 01c92ef0

/* Function Stack Size: 0x1c bytes */

void WCRefinePluginFeatureManagementViewController::deleteCustomFeatureWithID_showToast_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_218;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d0;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_180;
  undefined *local_168;
  cfstringStruct *local_160;
  bool local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  bool local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  cfstringStruct *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  byte local_c1;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c1 = (byte)param_4;
  uVar2 = local_c0;
  FUN_01c9217c();
  if ((uVar2 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    local_d8 = puVar4;
    _memset(auStack_128,0,0x40);
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_pluginFeatureCustomEntries_026a8400);
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_180 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_198 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
              );
    if (local_198 != (undefined *)0x0) {
      lVar7 = *local_118;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,local_180);
          }
          pcVar8 = *(cfstringStruct **)(local_120 + (long)local_1a0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e8 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar8 & 1) != 0) {
            pcVar8 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_139 = false;
            bVar1 = ((ulong)pcVar5 & 1) == 0;
            if (bVar1) {
              local_1d0 = &::cf___;
            }
            else {
              local_1d0 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_138 = local_1d0;
            }
            local_139 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = local_1d0;
            if ((local_139 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_138);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar8 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_151 = false;
            bVar1 = ((ulong)pcVar5 & 1) == 0;
            if (bVar1) {
              local_1e8 = &::cf___;
            }
            else {
              local_1e8 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
              _objc_retainAutoreleasedReturnValue();
              local_150 = local_1e8;
            }
            local_151 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = local_1e8;
            if ((local_151 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_150);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            pcVar8 = local_130;
            FUN_01c8c5e8(local_130,local_148);
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
            if ((pcVar8 == (cfstringStruct *)0x0) ||
               (pcVar8 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_isEqualToString__0269ccc8,local_c0),
               ((ulong)pcVar8 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e8);
              local_c8 = 0;
            }
            else {
              local_d9 = 1;
              local_c8 = 3;
            }
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_148,0);
            _objc_storeStrong(&local_130,0);
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_180);
    if ((local_d9 & 1) == 0) {
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0RSRdvcNeQS);
      }
      local_c8 = 1;
    }
    else {
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPluginFeatureCustomEntries__026c2ba0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      puVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_pluginFeatureCustomTitles_026c2a68);
      _objc_retainAutoreleasedReturnValue();
      local_218 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_218 = *(undefined **)PTR____NSDictionary0___02578288;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_dictionaryWithDictionary__026aadf0,local_218);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_removeObjectForKey__0269d700,local_c0);
      puVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPluginFeatureCustomTitles__026c2b78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_orderedFeatureIDs_026c2b20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      IVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hiddenFeatureIDs_026c2b38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_persistFeatureConfigPostingNotif_026c2b40,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_reloadFeatureDataAfterRowActionW_026c2b48,1);
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rd_NUS_wceQS);
      }
      _objc_storeStrong(&local_168,0);
      local_c8 = 0;
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

