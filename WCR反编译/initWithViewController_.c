// initWithViewController: @ 014bd09c

/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::initWithViewController_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRefineSearchManager_026cfa10;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    _objc_storeWeak(local_18 + 9,local_28);
    *(undefined1 *)(local_18 + 1) = 0;
    *(undefined1 *)((long)local_18 + 9) = 0;
    puVar4 = PTR____NSArray0___02578280;
    _objc_storeStrong(local_18 + 2,*(undefined8 *)PTR____NSArray0___02578280);
    _objc_storeStrong(local_18 + 3);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)local_18[4];
    local_18[4] = (ID)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_18 + 5,0);
    _objc_storeStrong(local_18 + 6,0);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)local_18[7];
    local_18[7] = (ID)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_18 + 8,*(undefined8 *)puVar4);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)local_18[10];
    local_18[10] = (ID)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)local_18[0xb];
    local_18[0xb] = (ID)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)local_18[0xd];
    local_18[0xd] = (ID)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    *(undefined1 *)((long)local_18 + 0xb) = 0;
    *(undefined1 *)((long)local_18 + 0xc) = 0;
    *(undefined1 *)((long)local_18 + 0xd) = 0;
    *(undefined1 *)((long)local_18 + 10) = 0;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadPersistentPluginTitleIndex_026af4e8);
    puVar5 = (undefined8 *)local_18[0xb];
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined1 *)((long)local_18 + 9) = 1;
    }
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

