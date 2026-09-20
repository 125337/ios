// setOverrideValue:key:identifier: @ 0177c730

/* Function Stack Size: 0x28 bytes */

void WCRefinePluginHubManager::setOverrideValue_key_identifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_110;
  undefined *local_100;
  undefined *local_d8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_4c = 1;
  }
  else {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customizationOverrides_026b4438);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,local_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = 0;
    local_d8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_d8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d8;
    }
    local_69 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObjectForKey__0269d700,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_40);
    }
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_group);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_0176d368();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    local_81 = 0;
    local_91 = 0;
    bVar1 = false;
    if (puVar3 != (undefined *)0x0) {
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupID);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = puVar3;
      FUN_0176d368();
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar3 == (undefined *)0x0;
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_resolvedGroupIdentifierFromStore_026b4468,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        local_100 = local_78;
      }
      else {
        local_100 = local_a0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_100,&cf_groupID);
      _objc_storeStrong(&local_a0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObjectForKey__0269d700,&cf_group);
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObjectForKey__0269d700,local_48);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,local_48);
    }
    puVar3 = local_28;
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      local_110 = (undefined *)0x0;
    }
    else {
      local_110 = local_58;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setConfigValue_forKey__026b4428,local_110,&cf_WCRPluginHubOverrides);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

