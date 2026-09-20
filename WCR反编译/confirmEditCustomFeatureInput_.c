// confirmEditCustomFeatureInput: @ 01c922a4

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginFeatureManagementViewController::confirmEditCustomFeatureInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined *local_2a8;
  cfstringStruct *local_260;
  cfstringStruct *local_248;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1f8;
  undefined *local_1a0;
  cfstringStruct *local_198;
  bool local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ID local_c8;
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
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pendingEditCustomFeatureID_026c2b98);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingEditCustomFeatureID__026c2b80,0);
  IVar2 = local_c8;
  FUN_01c9217c();
  if ((IVar2 & 1) == 0) {
    local_cc = 1;
  }
  else {
    uVar3 = local_c0;
    FUN_01c91898();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_s_rangeOfString_options__0269d118;
    local_d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_rangeOfString_options__0269d118,&::cf__,4);
    local_e8 = uVar3;
    local_e0 = puVar5;
    if (((uVar3 == 0x7fffffffffffffff) || (uVar3 == 0)) ||
       (uVar4 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
       uVar4 - 1 <= uVar3)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h_eQ);
      local_cc = 1;
    }
    else {
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_substringToIndex__0269d6c0,local_e8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_substringFromIndex__0269d120,local_e8 + 1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = uVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      if ((uVar3 == 0) ||
         (uVar3 = local_f8, (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0),
         uVar3 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Tybc6RhVN_Nzz);
        local_cc = 1;
      }
      else {
        uVar3 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
        if ((uVar3 & 1) == 0) {
          puVar5 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_100 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 0;
          local_108 = puVar6;
          _memset(auStack_158,0,0x40);
          puVar5 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_pluginFeatureCustomEntries_026a8400)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_1f8 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            local_1f8 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_210 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                     auStack_a8,0x10);
          if (local_210 != (undefined *)0x0) {
            lVar8 = *local_148;
            local_218 = (undefined *)0x0;
            do {
              do {
                if (*local_148 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_148 - lVar8,local_1f8);
                }
                pcVar9 = *(cfstringStruct **)(local_150 + (long)local_218 * 8);
                puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_118 = pcVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar5);
                if (((ulong)pcVar9 & 1) != 0) {
                  pcVar9 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
                  local_160 = pcVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  pcVar7 = pcVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar5)
                  ;
                  local_171 = false;
                  bVar1 = ((ulong)pcVar7 & 1) == 0;
                  if (bVar1) {
                    local_248 = &::cf___;
                  }
                  else {
                    local_248 = local_160;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                    _objc_retainAutoreleasedReturnValue();
                    local_170 = local_248;
                  }
                  local_171 = !bVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_168 = local_248;
                  if ((local_171 & 1U) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_170);
                  }
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                  pcVar9 = local_160;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  pcVar7 = pcVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_isKindOfClass__0269cd68,puVar5)
                  ;
                  local_189 = false;
                  bVar1 = ((ulong)pcVar7 & 1) == 0;
                  if (bVar1) {
                    local_260 = &::cf___;
                  }
                  else {
                    local_260 = local_160;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
                    _objc_retainAutoreleasedReturnValue();
                    local_188 = local_260;
                  }
                  local_189 = !bVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_180 = local_260;
                  if ((local_189 & 1U) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_188);
                  }
                  (*(code *)PTR__objc_release_02578630)(pcVar9);
                  pcVar9 = local_168;
                  FUN_01c8c5e8(local_168,local_180);
                  _objc_retainAutoreleasedReturnValue();
                  local_198 = pcVar9;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_length_0269cca0);
                  if (pcVar9 == (cfstringStruct *)0x0) {
                    local_cc = 3;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
                               &cf_id);
                    pcVar9 = local_198;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_198,PTR_s_isEqualToString__0269ccc8,local_c8);
                    if (((ulong)pcVar9 & 1) != 0) {
                      local_109 = 1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,
                                 &cf_title);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,
                                 &cf_controller);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,
                                 &cf_openCustomPluginFeature_,&cf_selector);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,
                                 &cf_source_plugin);
                    }
                    puVar5 = local_108;
                    pcVar9 = local_160;
                    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
                    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(pcVar9);
                    local_cc = 0;
                  }
                  _objc_storeStrong(&local_198);
                  _objc_storeStrong(&local_180,0);
                  _objc_storeStrong(&local_168,0);
                  _objc_storeStrong(&local_160,0);
                }
                local_218 = local_218 + 1;
              } while (local_218 < local_210);
              local_210 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                         auStack_a8,0x10);
              local_218 = (undefined *)0x0;
            } while (local_210 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(local_1f8);
          if ((local_109 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                       &cf__g_b0RS_vcNeQS);
            local_cc = 1;
          }
          else {
            puVar5 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setPluginFeatureCustomEntries__026c2ba0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
            puVar6 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_pluginFeatureCustomTitles_026c2a68);
            _objc_retainAutoreleasedReturnValue();
            local_2a8 = puVar6;
            if (puVar6 == (undefined *)0x0) {
              local_2a8 = *(undefined **)PTR____NSDictionary0___02578288;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_dictionaryWithDictionary__026aadf0,local_2a8);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_removeObjectForKey__0269d700,local_c8);
            puVar5 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_setPluginFeatureCustomTitles__026c2b78);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100,PTR_s_postGlobalSettingsChangedNotific_026a6558);
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadFeatureData_026c2ac8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__fe_INcN);
            _objc_storeStrong(&local_1a0,0);
            local_cc = 0;
          }
          _objc_storeStrong(&local_108);
          _objc_storeStrong(&local_100,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NSc_);
          local_cc = 1;
        }
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

