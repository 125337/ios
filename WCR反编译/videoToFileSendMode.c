// videoToFileSendMode @ 0203cc2c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::videoToFileSendMode(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (undefined1 *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined1 *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_30 == (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_28;
    puVar4 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKey__026ca9e8,puVar4);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long)(int)(uint)(puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
}

