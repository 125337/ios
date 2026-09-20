// FUN_014e9700 @ 014e9700

void FUN_014e9700(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  FUN_014e41d8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

