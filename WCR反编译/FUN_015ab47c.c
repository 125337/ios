// FUN_015ab47c @ 015ab47c

void FUN_015ab47c(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_40 [3];
  uint local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_015ad074();
  _objc_retainAutoreleasedReturnValue();
  local_20 = (cfstringStruct *)pcVar2;
  if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        pcVar3 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_015acf8c();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      local_24 = (uint)bVar1;
      _objc_storeStrong(local_40,0);
      if (local_24 != 0) goto LAB_015ab688;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
LAB_015ab688:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

