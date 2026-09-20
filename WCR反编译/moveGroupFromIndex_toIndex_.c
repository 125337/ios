// moveGroupFromIndex:toIndex: @ 01773588

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubManager::moveGroupFromIndex_toIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  unsigned_long_long local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar2 = local_28;
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  uVar1 = local_30;
  if (((uVar2 < IVar3) &&
      (IVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
      uVar1 < IVar3)) && (local_28 != local_30)) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_insertObject_atIndex__0269eac0,local_48,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setConfigValue_forKey__026b4428,local_38,&cf_WCRPluginHubGroups);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

