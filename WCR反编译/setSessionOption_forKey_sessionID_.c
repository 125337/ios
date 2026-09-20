// setSessionOption:forKey:sessionID: @ 009bfca0

/* Function Stack Size: 0x28 bytes */

void WCRefineAIStore::setSessionOption_forKey_sessionID_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined *local_c8;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar2 = local_48;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = 0;
  bVar1 = true;
  if (lVar3 != 0) {
    lVar3 = local_40;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar3 == 0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (bVar1) {
    local_58 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = 0;
    local_c8 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c8;
    }
    local_69 = puVar6 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_c8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,local_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_80 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_e8;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeObjectForKey__0269d700,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_40);
    }
    puVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObjectForKey__0269d700,local_48);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,local_48);
    }
    puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

