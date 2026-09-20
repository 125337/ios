// chatTimePlacement @ 02078688

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatTimePlacement(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  int local_8c;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_chatTimeShowBelowMessage);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_chatTimeShowBelowAvatar);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    if ((IVar3 & 1) == 0) {
      local_8c = 2;
      if ((IVar4 & 1) == 0) {
        local_8c = 0;
      }
    }
    else {
      local_8c = 1;
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,(long)local_8c)
    ;
    _objc_retainAutoreleasedReturnValue();
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar5);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = (long)local_8c;
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    FUN_0207896c();
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

