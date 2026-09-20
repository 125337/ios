// forwardToGroupDelayMs @ 021986a4

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::forwardToGroupDelayMs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineForwardToGroupDelayMs);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined *)param_1;
  if ((undefined *)param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKey__026ca9e8,local_38,&cf_WCRefineForwardToGroupDelayMs)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if ((long)puVar2 < 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_18 = puVar2;
    if (60000 < (long)puVar2) {
      local_18 = (undefined *)0xea60;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

