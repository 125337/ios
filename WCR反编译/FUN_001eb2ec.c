// FUN_001eb2ec @ 001eb2ec

void FUN_001eb2ec(ulong param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  FUN_001eb250();
  if ((param_1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_20 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_20 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_s__Uj;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_58 = (cfstringStruct *)0x0;
      }
      else {
        local_58 = local_20;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_58;
    }
    _objc_storeStrong(&local_20,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

