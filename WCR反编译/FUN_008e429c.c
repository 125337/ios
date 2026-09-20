// FUN_008e429c @ 008e429c

byte FUN_008e429c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_38;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = false;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_11 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
    local_11 = false;
    if (((ulong)puVar3 & 1) != 0) {
      local_38 = local_20;
      FUN_008e575c();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = lVar4 != 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

