// setCustomEntryEnabled:atIndex: @ 01779e78

/* Function Stack Size: 0x1c bytes */

bool WCRefinePluginHubManager::setCustomEntryEnabled_atIndex_
               (ID param_1,SEL param_2,bool param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  unsigned_long_long local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_38 = param_4;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_customEntryDefinitions_026b4448);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (uVar1 < param_1) {
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_29 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_enabled);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_setObject_atIndexedSubscript__0269e970,local_50,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_persistCustomEntryDefinitions__026b4498,local_58);
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_removeLivePluginForCustomEntry__026b44a8,local_50);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_registerPluginForCustomEntry__026b44a0,local_50);
    }
    local_11 = 1;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_11 = 0;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_11 & 1;
}

