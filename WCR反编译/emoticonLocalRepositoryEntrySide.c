// emoticonLocalRepositoryEntrySide @ 021947d8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::emoticonLocalRepositoryEntrySide(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *local_38;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_28;
  local_30 = (undefined1 *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined1 *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_38 == (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_30;
    puVar4 = local_38;
    SVar2 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKey__026ca9e8,puVar4);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if (puVar4 == (undefined1 *)0x0) {
    local_18 = 0;
  }
  else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

