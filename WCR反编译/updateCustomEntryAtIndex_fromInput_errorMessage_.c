// updateCustomEntryAtIndex:fromInput:errorMessage: @ 017799e4

/* Function Stack Size: 0x28 bytes */

bool WCRefinePluginHubManager::updateCustomEntryAtIndex_fromInput_errorMessage_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  ID *local_40;
  undefined8 local_38;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  byte local_11;
  
  local_38 = 0;
  local_30 = (undefined *)param_3;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_20;
  local_40 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customEntryDefinitions_026b4448);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
  if (puVar2 < puVar1) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_parsedCustomEntryFromInput_error_026b4490,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_11 = 0;
      local_4c = 1;
    }
    else {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_customEntry_conflictsWithExistin_026b4480,puVar2,local_30);
      if (((ulong)puVar1 & 1) == 0) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_60 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mutableCopy_0269d8a0);
        puVar2 = local_60;
        local_68 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 0;
        local_b0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_b0 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_b0;
        }
        local_71 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_enabled);
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_58,local_68);
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
        local_80 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_atIndexedSubscript__0269e970,local_58,local_30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_persistCustomEntryDefinitions__026b4498,local_80);
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_identifierForCustomEntry__026b4450,local_60);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_identifierForCustomEntry__026b4450,local_58);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_removeLivePluginForCustomEntry__026b44a8,local_60);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_registerPluginForCustomEntry__026b44a0,local_58);
        local_11 = 1;
        local_4c = 1;
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
      }
      else {
        if (local_40 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_40 = (ID)&cf_c6RhVb;
        }
        local_11 = 0;
        local_4c = 1;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    if (local_40 != (ID *)0x0) {
      _objc_retainAutorelease();
      *local_40 = (ID)&cf_agvNX__W;
    }
    local_11 = 0;
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

