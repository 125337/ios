// FUN_00941cc8 @ 00941cc8

void FUN_00941cc8(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_00941de4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = (cfstringStruct *)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    FUN_00941344(pcVar2,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

