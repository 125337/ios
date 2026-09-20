// FUN_008f3a68 @ 008f3a68

void FUN_008f3a68(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_28 = local_30;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = 1;
    goto LAB_008f3ff8;
  }
  pcVar4 = "CContactMgr";
  _objc_getClass(0);
  FUN_008f3348();
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)pcVar4;
  FUN_008e6088(pcVar4,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)pcVar4;
  FUN_008e6088(pcVar4,PTR_s_m_nsUsrName_0269d638);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = (cfstringStruct *)pcVar4;
  FUN_008e5574();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar3;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar4 = "SettingUtil";
    _objc_getClass(0);
    puVar1 = PTR_s_getLocalUsrName__0269ce98;
    if (((cfstringStruct *)pcVar4 != (cfstringStruct *)0x0) &&
       (pcVar2 = (cfstringStruct *)pcVar4,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar1,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = (cfstringStruct *)pcVar4;
      FUN_008e5574();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_28 = local_30;
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_008f3fb8;
      }
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
  }
LAB_008f3fb8:
  local_40 = 1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_008f3ff8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

