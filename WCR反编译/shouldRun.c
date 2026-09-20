// shouldRun @ 00520934

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsAutoRefreshManager::shouldRun(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_6c;
  uint local_54;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (uint)puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_54 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_release_02578630)();
  FUN_00520b10();
  if (((local_54 & 1) != 0) || (local_6c = 0, (uVar1 & 1) != 0)) {
    FUN_00520cd8();
    local_6c = uVar1 ^ 1;
  }
  return local_6c & 1;
}

