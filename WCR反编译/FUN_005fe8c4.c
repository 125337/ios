// FUN_005fe8c4 @ 005fe8c4

void FUN_005fe8c4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_50;
  undefined4 local_44;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  pcVar1 = "MMServiceCenter";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  pcVar2 = "CContactMgr";
  local_30 = pcVar1;
  _objc_getClass();
  local_38 = pcVar2;
  if ((local_30 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
        if (((ulong)pcVar1 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
      }
      local_44 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

