// FUN_0074be7c @ 0074be7c

void FUN_0074be7c(void)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  uint local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar3 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar3 = local_20;
  if (pcVar4 == (cfstringStruct *)0x0) {
    if (DAT_028cc740 == (cfstringStruct *)0x0) {
      pcVar5 = "MMContext";
      _objc_getClass();
      DAT_028cc740 = (cfstringStruct *)pcVar5;
    }
    pcVar3 = DAT_028cc740;
    _objc_retainAutoreleaseReturnValue();
    local_38 = pcVar3;
    if ((pcVar3 != (cfstringStruct *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_s_userName_0269f7b8;
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_userName_0269f7b8);
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar2);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_30 = (uint)bVar1;
      _objc_storeStrong(&local_40,0);
      if (local_30 != 0) goto LAB_0074c164;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_30 = 1;
  }
LAB_0074c164:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

