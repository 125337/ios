// FUN_006807d4 @ 006807d4

void FUN_006807d4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_7c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    local_7c = 0;
    if ((cfstringStruct *)0x2 < pcVar1) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,3);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = (uint)pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_7c & 1) == 0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

