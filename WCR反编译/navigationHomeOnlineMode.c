// navigationHomeOnlineMode @ 0206e294

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::navigationHomeOnlineMode(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  SEL SVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar3);
  if (local_30 == (undefined *)0x0) {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKey__0269e048,&cf_navigationShowAvatarTQQ);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_68 == (undefined *)0x0;
    local_38 = local_68;
    if (bVar1) {
      local_40 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_40;
    }
    _objc_storeStrong(&local_30,local_68);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    puVar2 = local_28;
    puVar4 = local_30;
    SVar3 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar4);
    (*(code *)PTR__objc_release_02578630)(SVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_38,0);
  }
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar4;
}

