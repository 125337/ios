// migrateGroupingSortModeFromGroupId:toGroupId: @ 01ad3530

/* Function Stack Size: 0x20 bytes */

void WCRefineGroupManager::migrateGroupingSortModeFromGroupId_toGroupId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_34;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (((uVar2 == 0) ||
      (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      lVar3 == 0)) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_30),
     (uVar2 & 1) != 0)) {
    local_34 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeGroupingGroupSortModes);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar4 & 1) == 0) {
      local_34 = 1;
    }
    else {
      puVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKeyedSubscript__0269d098,local_28)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_58 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,local_30);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar4 != (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if (!bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,local_30);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectForKey__0269d700,local_28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,
                   &cf_homeGroupingGroupSortModes);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_40);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

