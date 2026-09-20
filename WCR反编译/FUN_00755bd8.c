// FUN_00755bd8 @ 00755bd8

void FUN_00755bd8(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [2];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_48;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  local_31 = param_2;
  FUN_007562d0();
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
    goto LAB_0075609c;
  }
  pcVar2 = local_30;
  FUN_0074c5f8(local_30,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar1 = local_50;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactDisplayName_0269d160);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_58, FUN_00744988(pcVar1), pcVar1 = local_58, ((ulong)pcVar2 & 1) != 0)) {
        local_48 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
      if (local_48 != 0) goto LAB_0075607c;
    }
    pcVar2 = local_30;
    FUN_0074c5f8(local_30,&cf_m_nsNickName);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_68[0];
    if (pcVar2 == (cfstringStruct *)0x0) {
      if ((local_31 & 1) != 0) {
        pcVar1 = local_30;
        FUN_0074c5f8(local_30,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar2 = local_70, FUN_00744988(pcVar1), pcVar1 = local_70, ((ulong)pcVar2 & 1) != 0)) {
          local_48 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
          local_48 = 1;
        }
        _objc_storeStrong(&local_70,0);
        if (local_48 != 0) goto LAB_0075605c;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_48 = 1;
    }
LAB_0075605c:
    _objc_storeStrong(local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_48 = 1;
  }
LAB_0075607c:
  _objc_storeStrong(&local_50,0);
LAB_0075609c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

