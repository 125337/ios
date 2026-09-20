// wcr_ensureDurationCacheLoaded @ 015aebfc

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoicePackStore::wcr_ensureDurationCacheLoaded(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_38;
  int local_2c;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  if ((((DAT_028e3b08 & 1) == 0) && ((DAT_028e3b09 & 1) == 0)) && (0 < DAT_028e3af8)) {
    DAT_028e3b09 = 1;
    local_2c = 0;
  }
  else {
    local_11 = 0;
    local_2c = 1;
  }
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if (local_2c == 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_durationCacheFilePath_026b0c00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = local_38;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = false;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      bVar1 = puVar5 != (undefined *)0x0;
    }
    uVar2 = DAT_028e3ae8;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,
                 &PTR___NSConcreteGlobalBlock_02587068);
      _objc_sync_exit(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar3);
    DAT_028e3b08 = 1;
    DAT_028e3b09 = 0;
    _objc_sync_exit(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_2c = 1;
    local_11 = bVar1;
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

