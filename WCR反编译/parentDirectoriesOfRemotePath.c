// parentDirectoriesOfRemotePath @ 00f03d0c

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::parentDirectoriesOfRemotePath(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  int local_54;
  ID local_50;
  ulong local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_normalizedRemotePath_026abb08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  for (local_48 = 0; uVar1 = local_48, IVar3 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0), uVar1 < IVar3;
      local_48 = local_48 + 1) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    uVar1 = local_48;
    if (IVar3 == 0) {
      local_54 = 4;
    }
    else {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (uVar1 == IVar3 - 1) {
        local_54 = 2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_50);
        puVar2 = local_30;
        puVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_componentsJoinedByString__0269d140);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = &cf__;
        (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_54 = 0;
      }
    }
    _objc_storeStrong(&local_50,0);
    if ((local_54 != 0) && (local_54 == 2)) break;
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

