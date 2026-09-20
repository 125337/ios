// FUN_0089b9b4 @ 0089b9b4

byte FUN_0089b9b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

