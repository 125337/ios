// addWeChatSettingsSection @ 01d7c724

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addWeChatSettingsSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_188;
  undefined *local_178;
  undefined *local_170;
  byte local_165;
  undefined4 local_164;
  long local_160;
  undefined1 local_151;
  undefined *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  SEL local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_d0 = param_2;
  local_c8 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf__O_en_);
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getWeChatSettings_026c4ba0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_e0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_currentSearchText_026c4ba8);
  _objc_retainAutoreleasedReturnValue();
  local_f9 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_188 = &::cf___;
  }
  else {
    local_188 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_currentSearchText_026c4ba8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_188;
  }
  local_f9 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_188;
  if ((local_f9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _memset(auStack_148,0,0x40);
  pcVar2 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1b0 != (cfstringStruct *)0x0) {
    lVar8 = *local_138;
    local_1b8 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_138 - lVar8 != 0) {
          _objc_enumerationMutation(*local_138 - lVar8,pcVar2);
        }
        local_108 = *(long *)(local_140 + (long)local_1b8 * 8);
        pcVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        if ((pcVar3 == (cfstringStruct *)0x0) ||
           (pcVar3 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_pluginMatchesSearchText_searchTe_026c4bb0,local_108,local_f0),
           ((ulong)pcVar3 & 1) != 0)) {
          local_b0 = &cf_WeChatSettings;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_b0,1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_108;
          local_150 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_className_026c4b88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          local_151 = SUB81(puVar1,0);
          if (((ulong)puVar1 & 1) == 0) {
            lVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_className_026c4b88);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            _NSClassFromString();
            local_160 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_160 != 0) goto LAB_01d7cad0;
            local_164 = 3;
          }
          else {
LAB_01d7cad0:
            puVar1 = local_e8;
            lVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_key_026a7380);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(lVar4);
            pcVar3 = local_c8;
            puVar7 = PTR_WCRefineHelper_026ce000;
            puVar1 = PTR_s_handleWeChatSettingSwitch__026c4bb8;
            local_165 = (byte)puVar6;
            lVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_displayName_026ac378);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,lVar4,
                       local_165 & 1);
            _objc_retainAutoreleasedReturnValue();
            local_170 = puVar7;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_170 != (undefined *)0x0) {
              puVar7 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
              puVar1 = local_170;
              if (((ulong)puVar7 & 1) != 0) {
                local_c0 = &cf_settingKey;
                lVar4 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_key_026a7380);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b8 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c0,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_setValue_forKey__0269d300,puVar7,&cf_userInfo);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(lVar4);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addCell__0269e3f8,local_170);
            }
            _objc_storeStrong(&local_170,0);
            local_164 = 0;
          }
          _objc_storeStrong(&local_150,0);
        }
        local_1b8 = (cfstringStruct *)((long)&local_1b8->field0_0x0 + 1);
      } while (local_1b8 < local_1b0);
      local_1b0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      local_1b8 = (cfstringStruct *)0x0;
    } while (local_1b0 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_setFooterTitle__0269e3c8,&cf_d___N>f_y_en_y_NNDe0wI_);
  local_178 = (undefined *)0x0;
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
  if (((ulong)puVar1 & 1) != 0) {
    puVar7 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_178;
    local_178 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_178 != (undefined *)0x0) &&
     (puVar1 = local_178, (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0),
     puVar1 != (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)&local_c8->field0_0x0 + (long)_tableViewMgr),
               PTR_s_addSection__0269e3d0,local_d8);
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

