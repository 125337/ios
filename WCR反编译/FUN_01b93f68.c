// FUN_01b93f68 @ 01b93f68

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01b93f68(undefined8 param_1,cfstringStruct *param_2,cfstringStruct *param_3,
                 cfstringStruct *param_4,cfstringStruct *param_5,ulong *param_6,ulong *param_7)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  bool local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  ulong *local_58;
  ulong *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  pcVar1 = local_28;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  FUN_01b92980();
  _objc_retainAutoreleasedReturnValue();
  local_68 = local_30;
  local_70 = local_38;
  local_60 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    local_89 = 0;
    local_99 = false;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_110 = &cf___;
    }
    else {
      local_110 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_110;
      FUN_01b92980();
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_110;
    }
    local_99 = pcVar1 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_110;
    if ((local_99 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    if (pcVar1 < (cfstringStruct *)0x2) {
      local_128 = &cf___;
    }
    else {
      local_b0 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_b0;
      FUN_01b92980();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_128;
    }
    local_c1 = pcVar1 >= (cfstringStruct *)0x2;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_128;
    if (local_c1) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_integerValue_026ca750);
      local_68 = pcVar1;
    }
    pcVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        local_70 = local_68;
      }
    }
    else {
      pcVar1 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_integerValue_026ca750);
      local_70 = pcVar1;
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  if ((long)local_68 < (long)local_40) {
    local_68 = local_40;
  }
  if ((long)local_48 < (long)local_68) {
    local_68 = local_48;
  }
  if ((long)local_70 < (long)local_40) {
    local_70 = local_40;
  }
  if ((long)local_48 < (long)local_70) {
    local_70 = local_48;
  }
  if (local_50 != (ulong *)0x0) {
    *local_50 = (ulong)local_68;
  }
  if (local_58 != (ulong *)0x0) {
    *local_58 = (ulong)local_70;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_28,0);
  return;
}

