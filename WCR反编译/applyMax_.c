// applyMax: @ 018ecc38

/* Function Stack Size: 0x18 bytes */

void WCRefineClipboardSettingsViewController::applyMax_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_c4;
  undefined *local_b8;
  undefined *local_58;
  undefined *local_50;
  byte local_42;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
    local_41 = 0;
    local_b8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_b8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_b8;
    }
    local_41 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_b8;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    do {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if ((long)puVar2 <= (long)local_28) break;
      local_42 = 0;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      local_50 = puVar2;
      do {
        local_50 = local_50 + -1;
        if ((long)local_50 < 0) break;
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c4 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_c4 = (uint)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        bVar1 = (local_c4 & 1) == 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_removeObjectAtIndex__0269d530,local_50);
          local_42 = 1;
        }
        _objc_storeStrong(&local_58,0);
      } while (!bVar1);
    } while ((local_42 & 1) != 0);
    puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  return;
}

