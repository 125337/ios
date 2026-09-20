// confirmCustomInput: @ 01df71f4

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatActionPickerViewController::confirmCustomInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  void *local_3d8;
  void *local_3d0;
  undefined *local_358;
  undefined *local_350;
  undefined *local_328;
  cfstringStruct *local_2e0;
  cfstringStruct *local_2c8;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  ulong local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  int local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  bool local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  bool local_1a9;
  cfstringStruct *local_1a8;
  byte local_199;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  byte local_181;
  cfstringStruct *local_180;
  SEL local_178;
  cfstringStruct *local_170;
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = (cfstringStruct *)0x0;
  local_178 = param_2;
  local_170 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_180,param_3);
  pcVar2 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_pendingCustomKind_026b70d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_181 = (byte)pcVar3;
  pcVar2 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_customAlert_026b70d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_199 = 0;
  local_1a9 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_2c8 = local_180;
  }
  else {
    local_2c8 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_customAlert_026b70d8);
    _objc_retainAutoreleasedReturnValue();
    local_199 = 1;
    local_198 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = local_2c8;
  }
  local_1a9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_2c8;
  if ((local_1a9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a8);
  }
  if ((local_199 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_198);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_1c1 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_2e0 = &::cf___;
  }
  else {
    local_2e0 = local_190;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = local_2e0;
  }
  local_1c1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = local_2e0;
  if ((local_1c1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setPendingCustomKind__026b70a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setCustomAlert__026b70c0,0);
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  pcVar2 = &cf_icons_outlined_miniprogram;
  if ((local_181 & 1) == 0) {
    pcVar2 = &cf_icons_outlined_link;
  }
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  pcVar3 = local_1b8;
  FUN_01df7c90(local_1b8,pcVar2,&local_1e8,&local_1f0,&local_1f8);
  _objc_storeStrong(&local_1d0,local_1e8);
  _objc_storeStrong(&local_1d8,local_1f0);
  _objc_storeStrong(&local_1e0,local_1f8);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cTy_);
    local_1fc = 1;
  }
  else {
    puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_211 = 0;
    local_328 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_328 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_210 = local_328;
    }
    local_211 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = local_328;
    if ((local_211 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_210);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_260,0,0x40);
    puVar4 = local_208;
    (*(code *)PTR__objc_retain_02578638)();
    local_350 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,0x10);
    if (local_350 != (undefined *)0x0) {
      lVar10 = *local_250;
      local_358 = (undefined *)0x0;
      do {
        do {
          if (*local_250 - lVar10 != 0) {
            _objc_enumerationMutation(*local_250 - lVar10,puVar4);
          }
          uVar11 = *(ulong *)(local_258 + (long)local_358 * 8);
          local_220 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          FUN_01df2eec();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_release_02578630)(uVar11);
          if ((uVar7 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_vh_mR);
            local_1fc = 1;
            goto LAB_01df78a0;
          }
          local_358 = local_358 + 1;
        } while (local_358 < local_350);
        local_350 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_a8,
                   0x10);
        local_358 = (undefined *)0x0;
      } while (local_350 != (undefined *)0x0);
    }
    local_1fc = 0;
LAB_01df78a0:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_208;
    if (local_1fc == 0) {
      local_e8 = &cf_title;
      local_c8 = local_1d0;
      local_e0 = &cf_url;
      local_c0 = local_1d8;
      local_d8 = &cf_icon;
      local_b8 = local_1e0;
      local_d0 = &cf_enabled;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c8,&local_e8,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_insertObject_atIndex__0269eac0,puVar8,0);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_208);
      pvVar9 = _memset(auStack_2a8,0,0x40);
      _WCRSuperFloatRefreshActions();
      _objc_retainAutoreleasedReturnValue();
      local_3d0 = pvVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3d0 != (void *)0x0) {
        lVar10 = *local_298;
        local_3d8 = (void *)0x0;
        do {
          do {
            if (*local_298 - lVar10 != 0) {
              _objc_enumerationMutation(*local_298 - lVar10,pvVar9);
            }
            uVar11 = *(ulong *)(local_2a0 + (long)local_3d8 * 8);
            local_268 = uVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar11,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomPayloadKey
                      );
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            FUN_01df2eec();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar11);
            if ((uVar7 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_enableAction__026c5b38,local_268);
              local_1fc = 1;
              goto LAB_01df7bb8;
            }
            local_3d8 = (void *)((long)local_3d8 + 1);
          } while (local_3d8 < local_3d0);
          local_3d0 = pvVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_168,
                     0x10);
          local_3d8 = (void *)0x0;
        } while (local_3d0 != (void *)0x0);
      }
      local_1fc = 0;
LAB_01df7bb8:
      (*(code *)PTR__objc_release_02578630)(pvVar9);
      if (local_1fc == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mR1Y_);
        local_1fc = 0;
      }
    }
    _objc_storeStrong(&local_208,0);
  }
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

