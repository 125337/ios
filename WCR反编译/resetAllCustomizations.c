// resetAllCustomizations @ 01776f58

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::resetAllCustomizations(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_200;
  undefined *local_1f8;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  SEL local_188;
  ID local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_188 = param_2;
  local_180 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  _memset(auStack_1d8,0,0x40);
  local_178 = &cf_WCRPluginHubGroupingEnabled;
  local_170 = &cf_WCRPluginHubGroups;
  local_168 = &cf_WCRPluginHubOverrides;
  local_160 = &cf_WCRPluginHubOrder;
  local_158 = &cf_WCRPluginHubLongPressEnabled;
  local_150 = &cf_WCRPluginHubLongPressStyle;
  local_148 = &cf_WCRPluginHubCustomEntries;
  local_140 = &cf_WCRPluginHubCustomEntryDemoSeededV1;
  local_138 = &cf_WCRPluginHubExcludedEntries;
  local_130 = &cf_WCRPluginHubPageSize;
  local_128 = &cf_WCRPluginHubDefaultGroup;
  local_120 = &cf_pluginTopTitleReplacement;
  local_118 = &cf_pluginTopNavTitleReplacement;
  local_110 = &cf_pluginTopDescriptionLine1Replacement;
  local_108 = &cf_pluginTopDescriptionLine2Replacement;
  local_100 = &cf_pluginTopAvatarEnabled;
  local_f8 = &cf_pluginTopAvatarRandomEnabled;
  local_f0 = &cf_pluginTopAvatarImagePath;
  local_e8 = &cf_pluginTopAvatarScale;
  local_e0 = &cf_pluginTopAvatarCornerRadius;
  local_d8 = &cf_pluginHubSettingsButtonIconName;
  local_d0 = &cf_pluginHubPagingEdgeGuard;
  local_c8 = &cf_pluginHubGroupSwitchSpacing;
  local_c0 = &cf_pluginHubGroupSwitchCornerRadius;
  local_b8 = &cf_pluginHubGroupSwitchBackgroundColorLight;
  local_b0 = &cf_pluginHubGroupSwitchBackgroundColorDark;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_178,
             0x1a);
  _objc_retainAutoreleasedReturnValue();
  local_1f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1f8 != (undefined *)0x0) {
    lVar2 = *local_1c8;
    local_200 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar2,puVar1);
        }
        local_198 = *(undefined8 *)(local_1d0 + (long)local_200 * 8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_removeObjectForKey__0269d700,local_198);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10)
      ;
      local_200 = (undefined *)0x0;
    } while (local_1f8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_190);
  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_190,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

