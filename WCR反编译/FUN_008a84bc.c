// FUN_008a84bc @ 008a84bc

void FUN_008a84bc(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c8;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  FUN_008a887c();
  _objc_retainAutoreleasedReturnValue();
  local_39 = false;
  bVar1 = (cfstringStruct *)pcVar2 == (cfstringStruct *)0x0;
  local_18 = (cfstringStruct *)pcVar2;
  if (bVar1) {
    local_70 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_70 = (cfstringStruct *)pcVar2;
    local_38 = (cfstringStruct *)pcVar2;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_70;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  bVar1 = local_20 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_88 = (cfstringStruct *)0x0;
  }
  else {
    local_88 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  FUN_008a82d4();
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_88;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_008a82d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  if (local_48 == (cfstringStruct *)0x0) {
    local_c8 = &cf___;
  }
  else {
    local_c8 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_c8);
  return;
}

