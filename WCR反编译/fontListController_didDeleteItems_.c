// fontListController:didDeleteItems: @ 019dd674

/* Function Stack Size: 0x20 bytes */

void WCRefineFontBeautifyViewController::fontListController_didDeleteItems_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  undefined *local_2a0;
  undefined *local_298;
  byte local_26c;
  cfstringStruct *local_268;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  cfstringStruct *local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158;
  undefined4 local_14c;
  ulong local_148;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  local_148 = 0;
  _objc_storeStrong(&local_148,param_4);
  uVar3 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    local_14c = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    _memset(auStack_1a0,0,0x40);
    uVar3 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_230 != 0) {
      lVar8 = *local_190;
      local_238 = 0;
      do {
        do {
          if (*local_190 - lVar8 != 0) {
            _objc_enumerationMutation(*local_190 - lVar8,uVar3);
          }
          lVar9 = *(long *)(local_198 + local_238 * 8);
          local_160 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
          }
          _objc_storeStrong(&local_1a8,0);
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_238 = 0;
      } while (local_230 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      local_14c = 1;
    }
    else {
      pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_268 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_268 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = local_268;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
      local_26c = 0;
      if (pcVar5 != (cfstringStruct *)0x0) {
        puVar4 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_containsObject__0269cbb8,local_1b0);
        local_26c = (byte)puVar4;
      }
      local_1b1 = local_26c & 1;
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = puVar4;
      _memset(auStack_208,0,0x40);
      puVar4 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_298 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10
                );
      if (local_298 != (undefined *)0x0) {
        lVar8 = *local_1f8;
        local_2a0 = (undefined *)0x0;
        do {
          do {
            if (*local_1f8 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar8,puVar4);
            }
            local_1c8 = *(undefined8 *)(local_200 + (long)local_2a0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_removeItemAtPath_error__0269f910,local_1c8,0);
            local_2a0 = local_2a0 + 1;
          } while (local_2a0 < local_298);
          local_298 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                     0x10);
          local_2a0 = (undefined *)0x0;
        } while (local_298 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_1b1 & 1) != 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_sendSettingsChangedNotification_026b61d8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadFontItems_026bae90);
      uVar2 = local_140;
      IVar7 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_fontItems_026bae98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_reloadItems__026bb000);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadTableData_0269dca8);
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_1c0);
      _objc_storeStrong(&local_1b0,0);
      local_14c = 0;
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

