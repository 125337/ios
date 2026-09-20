// FUN_008bbaac @ 008bbaac

void FUN_008bbaac(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48 [2];
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_008b7d64();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  pcVar3 = local_28;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    FUN_008b5ddc(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_008b7d64();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar3 = local_28;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_008b7d64();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_28;
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      local_18 = local_20;
      pcVar3 = local_28;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar3 = &cf_m_contact;
        _NSSelectorFromString();
        FUN_008b5ddc(local_18,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_48[0] = local_18;
        if ((local_18 == (cfstringStruct *)0x0) || ((long)local_18 - (long)local_20 == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        else {
          FUN_008bbaac((long)local_18 - (long)local_20);
          _objc_retainAutoreleasedReturnValue();
        }
        local_38 = 1;
        _objc_storeStrong(local_48,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
        local_38 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      local_38 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

