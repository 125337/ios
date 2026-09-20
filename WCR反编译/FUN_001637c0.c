// FUN_001637c0 @ 001637c0

void FUN_001637c0(void)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_80;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  char *local_20;
  char *local_18;
  
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_30 = 1;
    }
    else {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        local_80 = (char *)0x0;
      }
      else {
        local_80 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_80;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

