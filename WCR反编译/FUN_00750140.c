// FUN_00750140 @ 00750140

void FUN_00750140(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  int local_28;
  uint local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    FUN_00748ad4(local_20,&cf_m_uiMessageType);
    local_28 = (int)pcVar2;
    if (local_28 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__;
      local_24 = 1;
    }
    else {
      if (local_28 == 1) {
        pcVar2 = local_20;
        FUN_0074c5f8(0,local_20,&cf_m_nsContent);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        local_40[0] = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
        pcVar2 = local_40[0];
        bVar1 = pcVar3 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(bVar1,local_40,0);
        if (local_24 != 0) goto LAB_007504c0;
      }
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetDisplayContent_026a7d18);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetDisplayContent_026a7d18);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        pcVar2 = local_48;
        bVar1 = pcVar3 != (cfstringStruct *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
        }
        local_24 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_48,0);
        if (local_24 != 0) goto LAB_007504c0;
      }
      local_18 = (cfstringStruct *)0x0;
      local_24 = 1;
    }
  }
LAB_007504c0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

