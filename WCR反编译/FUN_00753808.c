// FUN_00753808 @ 00753808

void FUN_00753808(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_28;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_40 = 1;
    goto LAB_00753ad0;
  }
  pcVar2 = local_30;
  FUN_0074e2f8();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_00753a84:
    pcVar2 = local_30;
    FUN_007545f8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = pcVar2;
  }
  else {
    FUN_0074c5f8(pcVar2,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar3 = local_50;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar3 = local_48;
      FUN_0074c5f8(0,local_48,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      pcVar2 = local_58;
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_40 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_58,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      local_40 = 1;
    }
    _objc_storeStrong(&local_50,0);
    if (local_40 == 0) goto LAB_00753a84;
  }
  _objc_storeStrong(&local_48,0);
LAB_00753ad0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

