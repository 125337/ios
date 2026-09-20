// FUN_0042698c @ 0042698c

void FUN_0042698c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong *local_150;
  cfstringStruct *local_a0;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if (local_30 == (cfstringStruct *)0x0) {
    local_51 = 0;
    pcVar2 = local_38;
    FUN_00429144();
    if (((ulong)pcVar2 & 1) == 0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_38;
      FUN_00426910();
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_a0;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_58 = 1;
    goto LAB_00426ec8;
  }
  pcVar1 = local_38;
  FUN_00426910();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  FUN_00429144();
  pcVar2 = local_60;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_68;
    FUN_0040a974();
    pcVar2 = local_68;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_70;
      FUN_0040a974();
      pcVar2 = local_70;
      if (((ulong)pcVar1 & 1) == 0) {
        FUN_0040c4c4();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
LAB_00426de4:
          pcVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_150 = (ulong *)&local_70;
          }
          else {
            local_150 = (ulong *)&local_68;
          }
          pcVar2 = (cfstringStruct *)*local_150;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar2;
        }
        else {
          pcVar1 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_78);
          pcVar2 = local_70;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_78)
            ;
            pcVar2 = local_68;
            if (((ulong)pcVar1 & 1) == 0) goto LAB_00426de4;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
          }
        }
        local_58 = 1;
        _objc_storeStrong(&local_78,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
        local_58 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_58 = 1;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_58 = 1;
  }
  _objc_storeStrong(&local_60,0);
LAB_00426ec8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

