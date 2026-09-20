// getWeChatSettings @ 01d7b928

/* Function Stack Size: 0x10 bytes */

ID WCRefineSearchSettingsViewController::getWeChatSettings(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PluginConfig_026cf5b0;
  local_28 = puVar1;
  _objc_alloc_init();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setKey__026b43f0,&cf_searchWeChatSettings);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClassName__026c4b70,&cf_WeChatSettings);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDisplayName__026ae2f8,&cf__On_);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setDesc__026a5a78,&cf_S_T_NNDe0_S_hQ0w0_u0gSCgP);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsCustomUI__026c4b78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_30);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

