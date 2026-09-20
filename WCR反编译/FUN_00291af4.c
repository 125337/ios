// FUN_00291af4 @ 00291af4

void FUN_00291af4(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar2 = "MMContext";
    _objc_getClass();
    pcVar3 = "CContactMgr";
    local_38 = pcVar2;
    _objc_getClass();
    pcVar2 = local_38;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if ((((ulong)pcVar2 & 1) == 0) || (local_40 == (char *)0x0)) {
      local_18 = (char *)0x0;
      local_30 = 1;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
        local_30 = 1;
      }
      else {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getContactByName__0269d178,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
        local_30 = 1;
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

