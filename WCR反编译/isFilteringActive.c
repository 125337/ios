// isFilteringActive @ 0151fd5c

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::isFilteringActive(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  undefined1 local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = (ulong)puVar2 & 0xffffffff;
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    _WCRefineTelegramGroupingGateAllowed();
    if ((uVar3 & 1) == 0) {
      local_11 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTab_026a2a78);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = IVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  return (uint)local_11;
}

