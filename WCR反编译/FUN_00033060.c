// FUN_00033060 @ 00033060

void FUN_00033060(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  if (local_20 != (cfstringStruct *)0x0) {
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      local_38 = (cfstringStruct *)0x0;
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_38;
        local_38 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if (local_38 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        pcVar2 = local_38;
        FUN_000332d0(local_38,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
      goto LAB_0003329c;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf___;
  local_30 = 1;
LAB_0003329c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

