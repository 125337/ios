// atMeAutoReplyCountMode @ 01ff2060

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::atMeAutoReplyCountMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined1 *)param_1;
  FUN_01fd9510(param_1,local_20);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01fd95c0(local_28,local_20,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long)(int)(uint)(puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
}

