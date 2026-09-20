// pinnedMutable @ 0107d7e4

/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::pinnedMutable(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  IVar2 = DAT_028e3258;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_2;
  local_20 = param_1;
  if (DAT_028e3258 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_indexPath_026ae250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      local_80 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    else {
      local_80 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
      local_40 = local_80;
    }
    _objc_storeStrong(&DAT_028e3258,local_80);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    IVar2 = DAT_028e3258;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

