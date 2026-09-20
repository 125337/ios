// addOfficialUIPluginsSection @ 01d7e2e0

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addOfficialUIPluginsSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1b0;
  undefined *local_1a0;
  undefined *local_198;
  byte local_18d;
  undefined4 local_18c;
  long local_188;
  undefined1 local_179;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  long local_130;
  bool local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  SEL local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_f8 = param_2;
  local_f0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHeaderTitle__0269e3c0,&cf_cNd__n_);
  pcVar2 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_getOfficialUIPlugins_026c4bc0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_108 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_f0;
  local_110 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_currentSearchText_026c4ba8);
  _objc_retainAutoreleasedReturnValue();
  local_121 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1b0 = &::cf___;
  }
  else {
    local_1b0 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_currentSearchText_026c4ba8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = local_1b0;
  }
  local_121 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = local_1b0;
  if ((local_121 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _memset(auStack_170,0,0x40);
  pcVar2 = local_108;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
  if (local_1d8 != (cfstringStruct *)0x0) {
    lVar8 = *local_160;
    local_1e0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_160 - lVar8 != 0) {
          _objc_enumerationMutation(*local_160 - lVar8,pcVar2);
        }
        local_130 = *(long *)(local_168 + (long)local_1e0 * 8);
        pcVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        if ((pcVar3 == (cfstringStruct *)0x0) ||
           (pcVar3 = local_f0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_f0,PTR_s_pluginMatchesSearchText_searchTe_026c4bb0,local_130,local_118),
           ((ulong)pcVar3 & 1) != 0)) {
          local_d8 = &cf_HuangBai;
          local_d0 = &cf_ThemeBox;
          local_c8 = &cf_BubbleBox;
          local_c0 = &cf_WCPureExtension;
          local_b8 = &cf_WeChatTweak;
          local_b0 = &cf_PKC;
          puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_d8,6);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_130;
          local_178 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_className_026c4b88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(lVar4);
          local_179 = SUB81(puVar1,0);
          if (((ulong)puVar1 & 1) == 0) {
            lVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_className_026c4b88);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            _NSClassFromString();
            local_188 = lVar5;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_188 != 0) goto LAB_01d7e6c8;
            local_18c = 3;
          }
          else {
LAB_01d7e6c8:
            puVar1 = local_110;
            lVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_key_026a7380);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_valueForKey__0269d128);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(lVar4);
            pcVar3 = local_f0;
            puVar7 = PTR_WCRefineHelper_026ce000;
            puVar1 = PTR_s_handleOfficialPluginSwitch__026c4bc8;
            local_18d = (byte)puVar6;
            lVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_displayName_026ac378);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar1,pcVar3,lVar4,
                       local_18d & 1);
            _objc_retainAutoreleasedReturnValue();
            local_198 = puVar7;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_198 != (undefined *)0x0) {
              puVar7 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
              puVar1 = local_198;
              if (((ulong)puVar7 & 1) != 0) {
                local_e8 = &cf_pluginKey;
                lVar4 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_key_026a7380);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_e0 = lVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_e8,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_setValue_forKey__0269d300,puVar7,&cf_userInfo);
                (*(code *)PTR__objc_release_02578630)(puVar7);
                (*(code *)PTR__objc_release_02578630)(lVar4);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addCell__0269e3f8,local_198);
            }
            _objc_storeStrong(&local_198,0);
            local_18c = 0;
          }
          _objc_storeStrong(&local_178,0);
        }
        local_1e0 = (cfstringStruct *)((long)&local_1e0->field0_0x0 + 1);
      } while (local_1e0 < local_1d8);
      local_1d8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10)
      ;
      local_1e0 = (cfstringStruct *)0x0;
    } while (local_1d8 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setFooterTitle__0269e3c8,&::cf___);
  local_1a0 = (undefined *)0x0;
  puVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
  if (((ulong)puVar1 & 1) != 0) {
    puVar7 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1a0;
    local_1a0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_1a0 != (undefined *)0x0) &&
     (puVar1 = local_1a0, (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_count_0269cfe0),
     puVar1 != (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)&local_f0->field0_0x0 + (long)_tableViewMgr),
               PTR_s_addSection__0269e3d0,local_100);
  }
  _objc_storeStrong(&local_1a0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

