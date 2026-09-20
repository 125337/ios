// FUN_003d22c8 @ 003d22c8

byte FUN_003d22c8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_38;
  undefined1 *local_30;
  undefined4 local_24;
  undefined1 *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isFilteringActive_026a30c8);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hidePinned_026a30d0);
    bVar1 = false;
    local_11 = true;
    if (((ulong)puVar3 & 1) == 0) {
      local_38 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = true;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
        local_11 = true;
        if (puVar3 != (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
          puVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
          local_11 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

