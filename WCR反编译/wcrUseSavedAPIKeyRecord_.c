// wcrUseSavedAPIKeyRecord: @ 017e23f8

/* Function Stack Size: 0x18 bytes */

void WCRefineAISettingsViewController::wcrUseSavedAPIKeyRecord_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_1d0;
  undefined *local_1c8;
  ID local_190;
  ulong local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined4 local_138;
  byte local_131;
  undefined *local_130;
  ulong local_128;
  undefined *local_120;
  undefined *local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  SEL local_f8;
  ID local_f0;
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
  local_100 = 0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  uVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_100;
  local_108 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_apiKey);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineAIStore_026ce048;
  local_110 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_providerForID__026aad08,local_108);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_100;
  local_120 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
  _objc_retainAutoreleasedReturnValue();
  local_131 = 0;
  bVar1 = true;
  local_128 = uVar2;
  if (local_120 != (undefined *)0x0) {
    uVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    bVar1 = true;
    if (uVar2 != 0) {
      uVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
      bVar1 = false;
      if (uVar2 != 0) {
        puVar4 = PTR_WCRefineAIClient_026ce080;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineAIClient_026ce080,PTR_s_validationErrorForBaseURL__026b5498,local_128
                  );
        _objc_retainAutoreleasedReturnValue();
        local_131 = 1;
        local_130 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar4 != (undefined *)0x0;
      }
    }
  }
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_A);
    local_138 = 1;
  }
  else {
    _memset(auStack_180,0,0x40);
    local_e8 = &cf_baseURL;
    local_e0 = &cf_chatPath;
    local_d8 = &cf_imagePath;
    local_d0 = &cf_videoPath;
    local_c8 = &cf_videoStatusPath;
    local_c0 = &cf_chatModel;
    local_b8 = &cf_imageModel;
    local_b0 = &cf_videoModel;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8,8
              );
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != (undefined *)0x0) {
      lVar8 = *local_170;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar8 != 0) {
            _objc_enumerationMutation(*local_170 - lVar8,puVar4);
          }
          local_140 = *(undefined8 *)(local_178 + (long)local_1d0 * 8);
          uVar2 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectForKeyedSubscript__0269d098,local_140);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_188 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_setValue_forField_providerID__026b5368,local_188,local_140,
                       local_108);
          }
          _objc_storeStrong(&local_188,0);
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_108;
    uVar2 = local_110;
    puVar4 = local_118;
    IVar6 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_pendingAPIKeyKind_026b5490);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setAPIKey_providerID_kind__026b5370,uVar2,uVar3);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_A);
      local_138 = 1;
    }
    else {
      puVar5 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_providerForID__026aad08,local_108);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_120;
      local_120 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_wcrActivateProvider__026b54c0,local_120);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_reloadTableData_0269dca8);
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar7 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__Rbc0R);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      IVar6 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_wcrPrimaryKindForProvider__026b54c8,local_120);
      _objc_retainAutoreleasedReturnValue();
      local_190 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
      if (IVar6 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_wcrFetchCloudModelsForProvider_k_026b53c8,local_120,local_190);
      }
      _objc_storeStrong(&local_190,0);
      local_138 = 0;
    }
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
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

