// setNameplateSpecialUserConfig:forUsername: @ 020c2d90

/* Function Stack Size: 0x20 bytes */

void WCRefineConfig::setNameplateSpecialUserConfig_forUsername_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_b8;
  undefined *local_a0;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  undefined *local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nameplateSpecialUserConfigs_026ae7c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_a0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_a0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_28 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setNameplateSpecialUserConfigs__026ae7d0,local_48);
      local_3c = 1;
    }
    else {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
      local_b8 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_68 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b8;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_configured);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setNameplateSpecialUserConfigs__026ae7d0,local_48);
      _objc_storeStrong(&local_60,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

