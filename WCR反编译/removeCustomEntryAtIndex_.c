// removeCustomEntryAtIndex: @ 0177a0b8

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginHubManager::removeCustomEntryAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_customEntryDefinitions_026b4448);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (uVar1 < param_1) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_38;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_removeObjectAtIndex__0269d530,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_persistCustomEntryDefinitions__026b4498,local_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_removeLivePluginForCustomEntry__026b44a8,local_48);
    local_11 = 1;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 0;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

