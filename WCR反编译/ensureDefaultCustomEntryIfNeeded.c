// ensureDefaultCustomEntryIfNeeded @ 01778b44

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::ensureDefaultCustomEntryIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_98;
  ID local_90;
  undefined4 local_84;
  undefined *local_80;
  SEL local_78;
  ID local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_78 = param_2;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRPluginHubCustomEntryDemoSeededV1)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_customEntryDefinitions_026b4448);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_68 = &cf_kind;
    local_40 = &cf_controller;
    local_60 = &cf_title;
    local_38 = &cf_6e__t;
    local_58 = &cf_version;
    local_30 = &cf_5_2_0;
    local_50 = &cf_controller;
    local_28 = &cf_WCRefinePluginHubCustomEntriesViewController;
    local_48 = &cf_enabled;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_68,5);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_customEntry_conflictsWithExistin_026b4480,local_98,0x7fffffffffffffff)
    ;
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_insertObject_atIndex__0269eac0,local_98,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,
               &cf_WCRPluginHubCustomEntries);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
               &cf_WCRPluginHubCustomEntryDemoSeededV1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_80);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  else {
    local_84 = 1;
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

