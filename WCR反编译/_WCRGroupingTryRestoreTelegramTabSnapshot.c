// _WCRGroupingTryRestoreTelegramTabSnapshot @ 00356ebc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte _WCRGroupingTryRestoreTelegramTabSnapshot
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  uint local_218;
  uint local_1ec;
  undefined *local_1e0;
  uint local_1bc;
  cfstringStruct *local_1b8;
  uint local_184;
  uint local_16c;
  undefined *local_138;
  undefined *local_128;
  undefined *local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined4 local_94;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = (undefined *)0x0;
  _objc_storeStrong(&local_78,param_1);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_2);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_3);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_4);
  if ((local_78 == (undefined *)0x0) ||
     (lVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_69 = 0;
    local_94 = 1;
  }
  else {
    puVar4 = local_78;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTelegramTabSnapshotRestored__026a2598,0);
    puVar4 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    local_16c = 0;
    if (lVar3 != 0) {
      lVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_16c = 0;
      if (lVar3 != 0) {
        lVar3 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_88);
        local_16c = (uint)lVar3 ^ 1;
      }
    }
    local_a1 = (byte)local_16c & 1;
    if ((local_16c & 1) == 0) {
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabSnapshots_026a25a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTelegramTabCacheSignature__026a25b0,0)
      ;
      local_69 = 0;
      local_94 = 1;
    }
    else {
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabCacheSignature_026a25b8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b1 = 0;
      local_184 = 0;
      if (puVar5 != (undefined *)0x0) {
        puVar5 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabCacheSignature_026a25b8);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_184 = (uint)puVar5 ^ 1;
      }
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_184 & 1) != 0) {
        puVar4 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabSnapshots_026a25a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_snapshot_026a25c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      local_c0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_1b8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_1b8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      local_d1 = 0;
      local_1bc = 0;
      if (local_c0 != (undefined *)0x0) {
        puVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1bc = 0;
        if (puVar4 != (undefined *)0x0) {
          puVar4 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_budgetFallback_026a25d8);
          local_1bc = 0;
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = local_c0;
            FUN_00357d1c();
            local_1bc = (uint)puVar4;
          }
        }
      }
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      if ((local_1bc & 1) != 0) {
        puVar4 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabSnapshots_026a25a8);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_e0;
          local_e0 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setTelegramTabSnapshots__026a25e0,local_e0);
        }
        local_68 = &cf_snapshot;
        local_48 = local_c0;
        local_60 = &cf_signature;
        local_40 = local_90;
        local_58 = &cf_expanded;
        local_38 = local_c8;
        local_50 = &cf_nativeRows;
        puVar4 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_snapshotNativeRowCount_026a25e8);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 0;
        local_1e0 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_1e0 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xffffffff);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = local_1e0;
        }
        local_30 = local_1e0;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e9 = puVar4 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_80);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setTelegramTabCacheSignature__026a25b0,local_90);
        _objc_storeStrong(&local_e0,0);
      }
      puVar4 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_telegramTabSnapshots_026a25a8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_snapshot);
      _objc_retainAutoreleasedReturnValue();
      local_1ec = 0;
      local_100 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_pinnedSessionSignature_026a25f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        FUN_00357dac();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8);
        local_1ec = (uint)puVar8 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if ((local_1ec & 1) == 0) {
        puVar4 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = false;
        bVar1 = false;
        local_218 = 1;
        if (((ulong)puVar5 & 1) != 0) {
          local_128 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_expanded);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          puVar5 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_218 = 1;
          if ((((ulong)puVar5 & 1) != 0) && (local_218 = 1, local_100 != (undefined *)0x0)) {
            local_138 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_entries_026a25d0);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            puVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_218 = 1;
            if (puVar5 != (undefined *)0x0) {
              puVar5 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_budgetFallback_026a25d8);
              local_218 = 1;
              if (((ulong)puVar5 & 1) == 0) {
                puVar5 = local_100;
                FUN_00357d1c();
                local_218 = (uint)puVar5 ^ 1;
              }
            }
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_138);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((local_218 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSnapshot__026a2588,local_100);
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          _CACurrentMediaTime();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSnapshotTime__026a2590);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_nativeRows);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setSnapshotNativeRowCount__026a25f8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_setTelegramTabSnapshotRestored__026a2598);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_69 = 1;
        }
        else {
          local_69 = 0;
        }
      }
      else {
        local_69 = 0;
      }
      local_94 = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_69 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

