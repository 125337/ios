// setToDoCardSourceMode: @ 0216e00c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setToDoCardSourceMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  SEL SVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  undefined1 local_39;
  ID local_38;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (((long)local_28 < 0) || (2 < (long)local_28)) {
    local_28 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObject_forKey__026ca9e8,puVar1);
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_28 == 2) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_objectForKey__0269e048,&cf_toDoCardWebConfigInitialized);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_39 = (undefined1)IVar4;
    if ((IVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setToDoCardTitleEnabled__026c7a28,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setToDoCardDateEnabled__026c7a30,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setToDoCardBulletEnabled__026c7a50,0);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_setObject_forKey__026ca9e8,puVar1,&cf_toDoCardWebConfigInitialized);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

