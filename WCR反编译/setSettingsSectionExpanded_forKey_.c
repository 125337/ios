// setSettingsSectionExpanded:forKey: @ 01613d9c

/* Function Stack Size: 0x1c bytes */

void WCRSuperFloatProfileStore::setSettingsSectionExpanded_forKey_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  byte local_21;
  SEL local_20;
  undefined *local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_34 = 1;
  }
  else {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_currentValueForKey__026b1898,&cf_settingsSectionExpanded);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      local_78 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_78;
    }
    else {
      local_78 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
      local_50 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_30);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_18;
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setCurrentValue_forKey__026b18a8,puVar4,&cf_settingsSectionExpanded);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

