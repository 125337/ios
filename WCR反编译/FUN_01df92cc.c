// FUN_01df92cc @ 01df92cc

void FUN_01df92cc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  dispatch_time_t dVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  ulong local_230;
  ulong local_228;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined *local_1d0;
  long local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  cfstringStruct *local_140;
  undefined4 local_134;
  long local_130;
  ulong local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = 0;
  local_120 = param_1;
  _objc_storeStrong(&local_128);
  local_130 = param_1;
  if (local_128 == 0) {
    local_134 = 1;
  }
  else {
    _memset(auStack_180,0,0x40);
    uVar1 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar9 = *local_170;
      local_230 = 0;
      do {
        do {
          if (*local_170 - lVar9 != 0) {
            _objc_enumerationMutation(*local_170 - lVar9,uVar1);
          }
          pcVar10 = *(cfstringStruct **)(local_178 + local_230 * 8);
          local_140 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_length_0269cca0);
          if (pcVar10 != (cfstringStruct *)0x0) {
            pcVar10 = local_140;
            _WCRChatToolbarContactAction();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_188 = pcVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)pcVar10 & 1) == 0) {
              local_134 = 3;
            }
            else {
              pcVar10 = local_188;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey)
              ;
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar10;
              FUN_01df2eec();
              _objc_retainAutoreleasedReturnValue();
              local_190 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar10);
              pcVar10 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
              if (pcVar10 == (cfstringStruct *)0x0) {
                local_134 = 3;
              }
              else {
                pcVar10 = &cf_wcr_sf_toolbar_;
                (*(code *)PTR__objc_msgSend_02578628)
                          (&cf_wcr_sf_toolbar_,PTR_s_stringByAppendingString__0269d398,local_190);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = local_188;
                local_198 = pcVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarTitleKey
                          );
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = pcVar3;
                FUN_01df2eec();
                _objc_retainAutoreleasedReturnValue();
                local_1a0 = pcVar10;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                pcVar10 = local_188;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_188,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey)
                ;
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar10;
                FUN_01df2eec();
                _objc_retainAutoreleasedReturnValue();
                local_1a8 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                local_118 = _WCRSuperFloatTitleKey;
                pcVar10 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
                if (pcVar10 == (cfstringStruct *)0x0) {
                  local_278 = local_140;
                }
                else {
                  local_278 = local_1a0;
                }
                local_e0 = local_278;
                local_110 = _WCRSuperFloatIconKey;
                pcVar10 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
                if (pcVar10 == (cfstringStruct *)0x0) {
                  local_280 = &cf_icons_filled_contacts;
                }
                else {
                  local_280 = local_1a8;
                }
                local_d8 = local_280;
                local_108 = _WCRSuperFloatActionKey;
                local_d0 = local_198;
                local_100 = _WCRSuperFloatEnabledKey;
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                local_f8 = _WCRSuperFloatSourceKey;
                local_c0 = &cf_T_N;
                local_f0 = _WCRSuperFloatCustomKindKey;
                local_b8 = &cf_toolbar;
                local_e8 = _WCRSuperFloatCustomPayloadKey;
                local_b0 = local_190;
                puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_c8 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_118,7);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1b0 = puVar5;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                (*(code *)PTR__objc_release_02578630)();
                _WCRSuperFloatRefreshActions();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1b8 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar2);
                local_1b9 = 0;
                for (local_1c8 = 0; lVar7 = local_1c8, puVar2 = local_1b8,
                    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_count_0269cfe0),
                    lVar7 < (long)puVar2; local_1c8 = local_1c8 + 1) {
                  puVar2 = local_1b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c8);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  puVar5 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4)
                  ;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  if (((ulong)puVar5 & 1) != 0) {
                    puVar2 = local_1b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = puVar4;
                    FUN_01df2eec();
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                    if (((ulong)puVar6 & 1) != 0) {
                      puVar2 = local_1b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_1c8);
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = puVar2;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_1d0 = puVar4;
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                                 1);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                                 _WCRSuperFloatEnabledKey);
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                      puVar2 = local_1b0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,
                                 _WCRSuperFloatTitleKey);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                                 _WCRSuperFloatTitleKey);
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1b8,PTR_s_setObject_atIndexedSubscript__0269e970,local_1d0,
                                 local_1c8);
                      local_1b9 = 1;
                      local_134 = 4;
                      _objc_storeStrong(&local_1d0,0);
                      break;
                    }
                  }
                }
                if ((local_1b9 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_insertObject_atIndex__0269eac0,local_1b0,0);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,
                           local_1b8);
                _objc_storeStrong(&local_1b8);
                _objc_storeStrong(&local_1b0,0);
                _objc_storeStrong(&local_1a8,0);
                _objc_storeStrong(&local_1a0,0);
                _objc_storeStrong(&local_198,0);
                local_134 = 0;
              }
              _objc_storeStrong(&local_190,0);
            }
            _objc_storeStrong(&local_188,0);
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10
                  );
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _WCRSuperFloatNotifySettingsChanged();
    lVar9 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar7 = lVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar9);
    if (lVar7 != 0) {
      lVar9 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar7 = lVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_release_02578630)(lVar9);
    }
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__Tek);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_copyWeak(auStack_1d8,param_1 + 0x20);
    dVar8 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_200 = PTR___NSConcreteStackBlock_02578660;
    local_1f8 = 0xc2000000;
    local_1f4 = 0;
    local_1f0 = FUN_01df9e74;
    local_1e8 = &DAT_0257be28;
    _objc_copyWeak(auStack_1e0,auStack_1d8);
    _dispatch_after(dVar8,puVar2,&local_200);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1d8);
    local_134 = 0;
  }
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

