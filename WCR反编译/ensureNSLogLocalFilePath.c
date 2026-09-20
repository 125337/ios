// ensureNSLogLocalFilePath @ 0091ae4c

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::ensureNSLogLocalFilePath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  uint local_6c;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  ID local_40;
  ID local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nsLogLocalDirectoryPath_026aa400);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar2,1,0);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentNSLogLocalFilePath_026aa408);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar1 = local_30;
  local_41 = 0;
  local_6c = 0;
  if (IVar3 != 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentNSLogLocalFilePath_026aa408);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
    local_6c = (uint)puVar1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_6c & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMdd_HHmmss);
    puVar1 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_stringByAppendingPathComponent__026cab30,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setCurrentNSLogLocalFilePath__026aa410,IVar2);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_68);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (&::cf___,PTR_s_writeToFile_atomically_encoding__026a33a8,local_68,1,4,0);
    }
    IVar2 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_48 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentNSLogLocalFilePath_026aa408);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

