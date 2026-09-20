// pluginControllerMapping @ 01ccb1b8

/* Function Stack Size: 0x10 bytes */

ID WCRefineProfileCardActionConfigViewController::pluginControllerMapping(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineSearchManager_026cf4e8;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSearchManager_026cf4e8,PTR_s_getPluginVCMapping_026af570);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_38;
  local_68 = PTR___NSConcreteGlobalBlock_02578658;
  local_60 = 0xd0800000;
  local_5c = 0;
  local_58 = FUN_01ccb3b8;
  local_50 = &DAT_02579a30;
  local_40 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  FUN_01ccb740();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

