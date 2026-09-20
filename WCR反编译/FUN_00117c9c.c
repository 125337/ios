// FUN_00117c9c @ 00117c9c

void FUN_00117c9c(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_30 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = (cfstringStruct *)pcVar2;
      FUN_0010dca0(pcVar2,&cf_m_nsRemark);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = (cfstringStruct *)pcVar2;
      FUN_0010ee50();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

