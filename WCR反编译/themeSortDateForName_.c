// themeSortDateForName: @ 015c6f2c

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeStore::themeSortDateForName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_a0;
  undefined *local_90;
  cfstringStruct *local_78;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_repositoryPath_026aeb48);
  _objc_retainAutoreleasedReturnValue();
  if (local_30 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_30;
  }
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_78);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,
             *(undefined8 *)PTR__NSFileModificationDate_02578020);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  local_90 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_48 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileCreationDate_02578018);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar1 = local_48 == (undefined *)0x0;
    local_a0 = local_48;
    if (bVar1) {
      local_58 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_58;
    }
    local_90 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_90;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

