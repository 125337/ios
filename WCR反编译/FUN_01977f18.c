// FUN_01977f18 @ 01977f18

void FUN_01977f18(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_50 = &cf___;
    }
    else {
      local_50 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    local_24 = 1;
  }
  else {
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,local_30);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_38;
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,pcVar1);
      pcVar1 = local_38;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      else {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

