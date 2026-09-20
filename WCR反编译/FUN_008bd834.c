// FUN_008bd834 @ 008bd834

void FUN_008bd834(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_a8;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_008be3d8();
  _objc_retainAutoreleasedReturnValue();
  local_20 = (cfstringStruct *)pcVar1;
  FUN_008b5ddc(pcVar1,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)pcVar1;
  FUN_008b5ddc(pcVar1,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)pcVar1;
  FUN_008b7d64();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  pcVar2 = local_40[0];
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_008b7d64();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40[0];
    local_40[0] = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_40[0] == (cfstringStruct *)0x0) {
      local_a8 = &cf___;
    }
    else {
      local_a8 = local_40[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

