// FUN_0010ef9c @ 0010ef9c

void FUN_0010ef9c(void)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  cfstringStruct *local_80;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_0010f1e0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = (cfstringStruct *)pcVar2;
  if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_30 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    else {
      local_48[0] = (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48[0];
      local_48[0] = (cfstringStruct *)pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_48[0] == (cfstringStruct *)0x0) {
        local_80 = &cf___;
      }
      else {
        local_80 = local_48[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_80;
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

