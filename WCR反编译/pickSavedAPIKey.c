// pickSavedAPIKey @ 017e1758

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::pickSavedAPIKey(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined *local_350;
  byte local_2d4;
  undefined *local_230;
  undefined *local_228;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [15];
  byte local_1c1;
  undefined *local_1c0;
  byte local_1b1;
  ID local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  byte local_191;
  undefined *local_190;
  byte local_181;
  ID local_180;
  byte local_171;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  long local_148;
  undefined *local_140 [3];
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineAIStore_026ce048;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_apiKeyHistoryRecords_026aae20);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg_OX_v);
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _objc_initWeak(auStack_e0,local_b0);
    _memset(auStack_128,0,0x40);
    puVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_228 != (undefined *)0x0) {
      lVar7 = *local_118;
      local_230 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,puVar2);
          }
          puVar3 = local_c0;
          lVar8 = *(long *)(local_120 + (long)local_230 * 8);
          local_e8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_providerForID__026aad08);
          _objc_retainAutoreleasedReturnValue();
          local_140[0] = puVar3;
          (*(code *)PTR__objc_release_02578630)(lVar8);
          lVar8 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_apiKey);
          _objc_retainAutoreleasedReturnValue();
          local_148 = lVar8;
          if ((local_140[0] == (undefined *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0), puVar3 = local_c0,
             lVar8 == 0)) {
            local_cc = 3;
          }
          else {
            puVar4 = local_140[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_providerID_0269d480);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pendingAPIKeyKind_026b5490);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_apiKeyForProviderID_kind__0269d488,puVar4);
            _objc_retainAutoreleasedReturnValue();
            local_150 = puVar3;
            (*(code *)PTR__objc_release_02578630)(IVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            IVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_editingProviderID_026b5220);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_140[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_providerID_0269d480);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8);
            local_2d4 = 0;
            if ((IVar6 & 1) != 0) {
              puVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_isEqualToString__0269ccc8,local_148);
              local_2d4 = (byte)puVar4;
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(IVar5);
            puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
            local_151 = local_2d4 & 1;
            lVar8 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString__026a16d8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_160 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(lVar8);
            local_171 = 0;
            local_181 = 0;
            local_191 = 0;
            local_1a1 = 0;
            local_1b1 = 0;
            local_1c1 = 0;
            puVar3 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            local_350 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (puVar3 == (undefined *)0x0) {
              puVar3 = local_140[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              local_1a1 = 1;
              IVar5 = local_b0;
              local_1a0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_wcrMaskedAPIKey__026b54b0,local_148);
              _objc_retainAutoreleasedReturnValue();
              local_1b1 = 1;
              local_1b0 = IVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_350,PTR_s_stringWithFormat__0269cca8,&::cf__);
              _objc_retainAutoreleasedReturnValue();
              local_1c1 = 1;
              local_1c0 = local_350;
            }
            else {
              puVar3 = local_140[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              local_171 = 1;
              IVar5 = local_b0;
              local_170 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_wcrMaskedAPIKey__026b54b0,local_148);
              _objc_retainAutoreleasedReturnValue();
              local_181 = 1;
              local_180 = IVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_350,PTR_s_stringWithFormat__0269cca8,&::cf__);
              _objc_retainAutoreleasedReturnValue();
              local_191 = 1;
              local_190 = local_350;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = local_350;
            if ((local_1c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c0);
            }
            if ((local_1b1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1b0);
            }
            if ((local_1a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a0);
            }
            if ((local_191 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_190);
            }
            if ((local_181 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_180);
            }
            if ((local_171 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_170);
            }
            IVar5 = local_b0;
            puVar4 = local_d8;
            bVar1 = local_151;
            puVar3 = local_168;
            local_1f8 = PTR___NSConcreteStackBlock_02578660;
            local_1f0 = 0xc2000000;
            local_1ec = 0;
            local_1e8 = FUN_017e2394;
            local_1e0 = &DAT_02579c60;
            _objc_copyWeak(auStack_1d0,auStack_e0);
            lVar8 = local_e8;
            (*(code *)PTR__objc_retain_02578638)();
            local_1d8 = lVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_actionWithTitle_highlighted_bloc_026b5310,puVar3,bVar1 & 1,
                       &local_1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(IVar5);
            _objc_storeStrong(&local_1d8);
            _objc_destroyWeak(auStack_1d0);
            _objc_storeStrong(&local_168,0);
            _objc_storeStrong(&local_160,0);
            _objc_storeStrong(&local_150,0);
            local_cc = 0;
          }
          _objc_storeStrong(&local_148);
          _objc_storeStrong(local_140,0);
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_230 = (undefined *)0x0;
      } while (local_228 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_showSheetTitle_actions__026b5348,&cf__OX_v,local_d8);
    _objc_destroyWeak(auStack_e0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

