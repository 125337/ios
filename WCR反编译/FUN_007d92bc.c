// FUN_007d92bc @ 007d92bc

uint FUN_007d92bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_44;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if (((ulong)puVar1 & 1) == 0) {
    local_44 = 0;
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_boolValue_026ca540);
    local_44 = (uint)puVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

