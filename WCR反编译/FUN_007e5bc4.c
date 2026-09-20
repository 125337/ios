// FUN_007e5bc4 @ 007e5bc4

void FUN_007e5bc4(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c0;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMServiceCenter";
  local_28 = puVar1;
  _objc_getClass();
  local_30 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_getService__0269d170;
  pcVar3 = "CContactMgr";
  local_48[0] = (cfstringStruct *)pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector_withObject__026ca7c0,puVar1,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = (cfstringStruct *)pcVar2;
  if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxDogModeEnabled_026a84e0);
  if (((ulong)puVar4 & 1) == 0) {
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar5 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_60);
    }
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxDogModeSkipSelf_026a84e8);
    if ((((ulong)puVar1 & 1) == 0) &&
       (pcVar5 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       pcVar5 != (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_60);
    }
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeBoxDogModeWxids_026a84f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    FUN_007e611c();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addObject__0269d180,&cf_wxid_919w3ffmhln712);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObjectsFromArray__0269d540,local_70);
    }
    _objc_storeStrong(&local_70,0);
  }
  puVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

