// setNameplateSpecialUserPaused:forUsername: @ 020c36fc

/* Function Stack Size: 0x1c bytes */

void WCRefineConfig::setNameplateSpecialUserPaused_forUsername_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_e0;
  undefined *local_c8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  byte local_31;
  SEL local_30;
  undefined *local_28;
  
  local_31 = (byte)param_3;
  local_40 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_4);
  lVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_4c = 1;
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameplateSpecialUserConfigs_026ae7c8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = 0;
    local_c8 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c8;
    }
    local_61 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_c8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,local_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      local_e0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_e0;
    }
    else {
      local_78 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_e0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_88);
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectForKey__0269d700,&cf_paused);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_paused);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_48);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setNameplateSpecialUserConfigs__026ae7d0,local_58);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

