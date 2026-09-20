// activateCompatibilityFacadeIfNeeded @ 0176db28

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginHubManager::activateCompatibilityFacadeIfNeeded(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_containerEnabled_026a6540);
  if ((param_1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    pcVar1 = "WCPluginsMgr";
    _objc_getClass();
    pcVar2 = "WCPluginModel";
    local_38 = pcVar1;
    _objc_getClass();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRPluginHubEntryMigrationV2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                 &cf_WCRPluginHubMoreEntry);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                 &cf_WCRPluginHubEntryMigrationV2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_48);
    }
    pcVar1 = "WCPluginsMgr";
    _objc_getClass();
    if ((pcVar1 == (char *)0x0) &&
       (IVar5 = local_18, _objc_allocateClassPair(local_18,"WCPluginsMgr",0), IVar5 != 0)) {
      _objc_registerClassPair(IVar5);
    }
    pcVar1 = "WCPluginModel";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      puVar3 = PTR_WCRefinePluginHubItem_026cee50;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefinePluginHubItem_026cee50,PTR_s_class_0269cd60)
      ;
      _objc_allocateClassPair();
      if (puVar3 != (undefined *)0x0) {
        _objc_registerClassPair(puVar3);
      }
    }
    _objc_getClass();
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureDefaultCustomEntryIfNeeded_026b4388);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyPersistedCustomEntries_026a6570);
    _objc_storeStrong(&local_48,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

