// FUN_0011ee0c @ 0011ee0c

void FUN_0011ee0c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
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
    FUN_0010dca0(local_20,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    pcVar2 = local_30;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      FUN_0010dca0(0,local_20,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      pcVar2 = local_48[0];
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_0010dca0(0,local_20,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

