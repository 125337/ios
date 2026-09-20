// FUN_007c91c4 @ 007c91c4

void FUN_007c91c4(void)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_58 [3];
  cfstringStruct *local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_20 = pcVar1;
  _objc_getClass();
  local_28 = pcVar2;
  if ((local_20 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar1 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_34 = 1;
      }
      else {
        pcVar3 = &cf_getService_;
        _NSSelectorFromString();
        pcVar1 = local_30;
        local_40 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_18 = (char *)0x0;
          local_34 = 1;
        }
        else {
          pcVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_58[0] = pcVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_34 = 1;
          local_18 = pcVar1;
          _objc_storeStrong(local_58,0);
        }
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

