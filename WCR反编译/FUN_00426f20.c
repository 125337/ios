// FUN_00426f20 @ 00426f20

void FUN_00426f20(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsRealChatUsr_0269d190);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00429268();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      pcVar1 = local_48[0];
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_50;
        FUN_0040a974();
        local_18 = local_50;
        if (((ulong)pcVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        local_24 = 1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_24 = 1;
      }
      _objc_storeStrong(local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

