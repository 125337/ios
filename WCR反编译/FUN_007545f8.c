// FUN_007545f8 @ 007545f8

void FUN_007545f8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70 [2];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
    goto LAB_00754a60;
  }
  pcVar3 = local_38;
  FUN_0074e2f8();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_38;
  local_50 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_48 = 1;
  }
  else {
    FUN_0074c5f8(pcVar3,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar2 = local_58;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getContactDisplayName_0269d160);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        pcVar2 = local_60;
        bVar1 = pcVar3 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
        }
        local_48 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_60,0);
        if (local_48 != 0) goto LAB_00754a20;
      }
      pcVar4 = local_50;
      FUN_0074c5f8(local_50,&cf_m_nsNickName);
      _objc_retainAutoreleasedReturnValue();
      local_70[0] = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
      pcVar3 = local_38;
      pcVar2 = local_70[0];
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      local_48 = 1;
      _objc_storeStrong(local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_48 = 1;
    }
LAB_00754a20:
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_00754a60:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

