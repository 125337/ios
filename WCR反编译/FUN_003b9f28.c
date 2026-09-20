// FUN_003b9f28 @ 003b9f28

void FUN_003b9f28(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_28 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeGroupingGroupPinnedSessions)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar3 = local_38;
    puVar2 = local_40;
    if (((ulong)puVar4 & 1) != 0) {
      local_68 = PTR___NSConcreteGlobalBlock_02578658;
      local_60 = 0xd0800000;
      local_5c = 0;
      local_58 = FUN_003be8b0;
      local_50 = &DAT_02579a30;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_68);
      _objc_storeStrong(&local_48,0);
    }
    lVar1 = local_20;
    FUN_003b4688();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObject__0269d678,local_18);
    if ((local_21 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_insertObject_atIndex__0269eac0,local_18,0);
    }
    lVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,local_20);
    }
    else {
      lVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,lVar1,local_20);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_removeObjectForKey__0269d700,&cf_homeGroupingGroupPinnedSessions);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,
                 &cf_homeGroupingGroupPinnedSessions);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_30);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

