// addCustomUIPluginsSection @ 01d7eb04

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::addCustomUIPluginsSection(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_170;
  undefined *local_160;
  undefined *local_158;
  byte local_14a;
  byte local_149;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  SEL local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_c8 = param_2;
  local_c0 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf__IN);
  pcVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_getCustomUIPlugins_026c4bd0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_d8 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_c0;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_currentSearchText_026c4ba8);
  _objc_retainAutoreleasedReturnValue();
  local_f1 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_170 = &::cf___;
  }
  else {
    local_170 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_currentSearchText_026c4ba8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_170;
  }
  local_f1 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_170;
  if ((local_f1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _memset(auStack_140,0,0x40);
  pcVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_198 != (cfstringStruct *)0x0) {
    lVar9 = *local_130;
    local_1a0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_130 - lVar9 != 0) {
          _objc_enumerationMutation(*local_130 - lVar9,pcVar3);
        }
        local_100 = *(long *)(local_138 + (long)local_1a0 * 8);
        pcVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if ((pcVar4 == (cfstringStruct *)0x0) ||
           (pcVar4 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c0,PTR_s_pluginMatchesSearchText_searchTe_026c4bb0,local_100,local_e8),
           ((ulong)pcVar4 & 1) != 0)) {
          lVar5 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_className_026c4b88);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_149 = 0;
          bVar1 = false;
          if (lVar6 != 0) {
            lVar6 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_className_026c4b88);
            _objc_retainAutoreleasedReturnValue();
            local_149 = 1;
            local_148 = lVar6;
            _NSClassFromString();
            bVar1 = lVar6 == 0;
          }
          if ((local_149 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          puVar2 = local_e0;
          if (!bVar1) {
            lVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_key_026a7380);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(lVar5);
            pcVar4 = local_c0;
            puVar8 = PTR_WCRefineHelper_026ce000;
            puVar2 = PTR_s_handleOfficialPluginSwitch__026c4bc8;
            local_14a = (byte)puVar7;
            lVar5 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_displayName_026ac378);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar8,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar2,pcVar4,lVar5,
                       local_14a & 1);
            _objc_retainAutoreleasedReturnValue();
            local_158 = puVar8;
            (*(code *)PTR__objc_release_02578630)(lVar5);
            if (local_158 != (undefined *)0x0) {
              puVar8 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_setUserInfo__026a17c8);
              puVar2 = local_158;
              if (((ulong)puVar8 & 1) != 0) {
                local_b8 = &cf_pluginKey;
                lVar5 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_key_026a7380);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_b0 = lVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_setValue_forKey__0269d300,puVar8,&cf_userInfo);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                (*(code *)PTR__objc_release_02578630)(lVar5);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addCell__0269e3f8,local_158);
            }
            _objc_storeStrong(&local_158,0);
          }
        }
        local_1a0 = (cfstringStruct *)((long)&local_1a0->field0_0x0 + 1);
      } while (local_1a0 < local_198);
      local_198 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_1a0 = (cfstringStruct *)0x0;
    } while (local_198 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setFooterTitle__0269e3c8,&cf__IN);
  local_160 = (undefined *)0x0;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
  if (((ulong)puVar2 & 1) != 0) {
    puVar8 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_performSelector__026ca7b8,PTR_s_getAllCells_026a5540);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_160;
    local_160 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_160 != (undefined *)0x0) &&
     (puVar2 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0),
     puVar2 != (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)&local_c0->field0_0x0 + (long)_tableViewMgr),
               PTR_s_addSection__0269e3d0,local_d0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

