// FUN_00f5264c @ 00f5264c

void FUN_00f5264c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_268;
  undefined *local_260;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  undefined *local_198;
  byte local_18d;
  undefined4 local_18c;
  undefined *local_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_188;
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isEqualToString__0269ccc8,&cf_all);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
    local_18d = (byte)puVar1;
    if ((((ulong)puVar1 & 1) == 0) &&
       (puVar1 = PTR_WCRefineAuth_026ce2c8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineAuth_026ce2c8,PTR_s_shouldPersistDisableInternalOnly_026ac5a8),
       ((ulong)puVar1 & 1) == 0)) {
      local_18c = 1;
    }
    else if (((local_18d & 1) == 0) &&
            (_WCRefineEnhancedAdBlockFeatureAllowed(), ((ulong)puVar1 & 1) != 0)) {
      local_18c = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      local_80 = &cf_WCRefineEnhancedAdBlockEnabled;
      local_78 = &cf_WCRefineEnhancedAdBlockBrandEnabled;
      local_70 = &cf_WCRefineEnhancedAdBlockFinderEnabled;
      local_68 = &cf_WCRefineEnhancedAdBlockFinderAutoSkipPromotionEnabled;
      local_60 = &cf_WCRefineEnhancedAdBlockLiveEnabled;
      local_58 = &cf_WCRefineEnhancedAdBlockMomentsEnabled;
      local_50 = &cf_WCRefineEnhancedAdBlockMiniProgramEnabled;
      local_48 = &cf_WCRefineEnhancedAdBlockSearchEnabled;
      local_40 = &cf_WCRefineEnhancedAdBlockNetworkEnabled;
      local_38 = &cf_WCRefineEnhancedAdBlockRewardedAdFastPassEnabled;
      local_30 = &cf_WCRefineDisableTeenagerPopupEnabled;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_198 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80
                 ,0xb);
      _objc_retainAutoreleasedReturnValue();
      local_1a1 = 0;
      local_1a0 = puVar2;
      _memset(auStack_1f0,0,0x40);
      puVar1 = local_1a0;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_100,0x10
                );
      if (local_260 != (undefined *)0x0) {
        lVar4 = *local_1e0;
        local_268 = (undefined *)0x0;
        do {
          do {
            if (*local_1e0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar4,puVar1);
            }
            local_1b0 = *(undefined8 *)(local_1e8 + (long)local_268 * 8);
            puVar2 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_objectForKey__0269e048,local_1b0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar3 & 1) != 0) {
              local_1a1 = 1;
              local_18c = 2;
              goto LAB_00f52a00;
            }
            local_268 = local_268 + 1;
          } while (local_268 < local_260);
          local_260 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_100,
                     0x10);
          local_268 = (undefined *)0x0;
        } while (local_260 != (undefined *)0x0);
      }
      local_18c = 0;
LAB_00f52a00:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if ((local_1a1 & 1) == 0) {
        local_18c = 1;
      }
      else {
        _memset(auStack_238,0,0x40);
        puVar1 = local_1a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_2b0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_180,
                   0x10);
        if (local_2b0 != (undefined *)0x0) {
          lVar4 = *local_228;
          local_2b8 = (undefined *)0x0;
          do {
            do {
              if (*local_228 - lVar4 != 0) {
                _objc_enumerationMutation(*local_228 - lVar4,puVar1);
              }
              puVar2 = local_198;
              local_1f8 = *(undefined8 *)(local_230 + (long)local_2b8 * 8);
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,local_1f8);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_2b8 = local_2b8 + 1;
            } while (local_2b8 < local_2b0);
            local_2b0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                       auStack_180,0x10);
            local_2b8 = (undefined *)0x0;
          } while (local_2b0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_198);
        _WCRefineEnhancedAdBlockLog(&cf_persistdisable_definitivenoaccessgate___);
        local_18c = 0;
      }
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_198,0);
    }
  }
  else {
    local_18c = 1;
  }
  _objc_storeStrong(&local_188,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

