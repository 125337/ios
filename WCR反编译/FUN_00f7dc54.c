// FUN_00f7dc54 @ 00f7dc54

void FUN_00f7dc54(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_30;
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if (DAT_028e2e68 == 0) {
    FUN_00f7e13c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar2 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      local_60 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_30 = local_60;
    }
    else {
      local_60 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mutableCopy_0269d8a0);
      local_20 = local_60;
    }
    _objc_storeStrong(&DAT_028e2e68,local_60);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_20);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

