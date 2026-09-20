// FUN_01c90934 @ 01c90934

void FUN_01c90934(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (((uVar1 != 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isViewLoaded_0269cde0), (uVar1 & 1) != 0))
     && ((*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadFeatureData_026c2ac8),
        (*(byte *)(param_1 + 0x28) & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

