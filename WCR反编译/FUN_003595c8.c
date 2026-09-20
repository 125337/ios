// FUN_003595c8 @ 003595c8

undefined * FUN_003595c8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  bool local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeGroupingSubListSortMode);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_18 = (undefined *)0x0;
      local_34 = 1;
    }
    else {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeGroupingGroupSortModes);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_51 = false;
      bVar1 = ((ulong)puVar2 & 1) == 0;
      if (bVar1) {
        local_78 = (undefined *)0x0;
      }
      else {
        local_78 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_78;
      }
      local_51 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_78;
      if ((local_51 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR_WCRefineGroupManager_026ce2b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_60;
        local_68 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_scope_0269ea90);
        if (((uint)puVar4 >> 1 & 1) == 0) {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_scope_0269ea90);
          if (((ulong)puVar2 & 0x7c) == 0) {
            puVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_homeGroupingFriendSortMode_026a2e20);
            local_18 = puVar2;
          }
          else {
            puVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeGroupingOtherSortMode_026a2e18)
            ;
            local_18 = puVar2;
          }
        }
        else {
          puVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_homeGroupingChatRoomSortMode_026a2e10);
          local_18 = puVar2;
        }
        local_34 = 1;
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
      else {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
        local_18 = (undefined *)(ulong)(puVar2 != (undefined *)0x0);
        local_34 = 1;
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    local_18 = (undefined *)(ulong)(puVar2 != (undefined *)0x0);
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

