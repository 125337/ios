// wcrGrouping_active @ 003763a8

/* Function Stack Size: 0x10 bytes */

bool WCRefineHomeSessionGroupingHook::wcrGrouping_active(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  byte local_80;
  uint local_68;
  undefined *local_60;
  undefined *local_50;
  undefined1 *local_40;
  undefined1 *local_30;
  byte local_11;
  
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_68 = 0;
  if (((ulong)puVar6 & 1) != 0) {
    _WCRefineTelegramGroupingGateAllowed();
    local_68 = 0;
    if (((ulong)puVar6 & 1) != 0) {
      local_30 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      puVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = 0;
      if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        local_50 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        puVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = (uint)puVar6 ^ 1;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((local_68 & 1) == 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = 0;
    if (((ulong)puVar6 & 1) != 0) {
      local_80 = (byte)puVar6;
      _WCRefineHomeGroupingRegularGateAllowed();
    }
    local_11 = local_80 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

