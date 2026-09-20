// FUN_01b22924 @ 01b22924

void FUN_01b22924(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01b2fe8c();
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    FUN_01b22b28(local_20,PTR_s_m_nsRemark_0269d760);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      FUN_01b22b28(local_20,PTR_s_getContactDisplayName_0269d160);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      pcVar1 = local_38;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_20;
        FUN_01b22b28(local_20,PTR_s_m_nsNickName_0269d758);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        pcVar1 = local_40;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar1 = local_20;
          FUN_01b22b28(local_20,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_24 = 1;
      }
      _objc_storeStrong(&local_38,0);
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

