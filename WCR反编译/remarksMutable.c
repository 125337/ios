// remarksMutable @ 0107ebd8

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::remarksMutable(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar2 = DAT_028e3270;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = param_2;
  local_20 = param_1;
  if (DAT_028e3270 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_indexPath_026ae250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_remarks);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3270;
    DAT_028e3270 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,
                 &PTR___NSConcreteGlobalBlock_02584e10);
    }
    puVar1 = DAT_028e3270;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

