// displayNameForSession: @ 014b8464

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::displayNameForSession_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_filehelper);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = local_38;
      FUN_014b86a8();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar2;
      FUN_014b87d8(pcVar2,&cf_m_nsRemark);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      pcVar1 = local_50;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_48;
        FUN_014b87d8(0,local_48,&cf_m_nsNickName);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        local_18 = local_38;
        pcVar1 = local_58;
        if (pcVar2 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
        local_3c = 1;
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_eNORKb;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

