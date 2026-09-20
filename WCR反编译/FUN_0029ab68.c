// FUN_0029ab68 @ 0029ab68

void FUN_0029ab68(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "CContactMgr";
  local_20 = pcVar1;
  _objc_getClass();
  pcVar1 = local_20;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if ((((ulong)pcVar1 & 1) == 0) || (local_28 == (char *)0x0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) == 0) {
      local_18 = (char *)0x0;
      local_40 = 1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_50 = (char *)0x0;
      local_48 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSelfContact_0269da60);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_50 == (char *)0x0) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
        else {
          pcVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
      }
      local_40 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

