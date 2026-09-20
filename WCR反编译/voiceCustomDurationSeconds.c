// voiceCustomDurationSeconds @ 0203bd74

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::voiceCustomDurationSeconds(ID param_1,SEL param_2)

{
  SEL SVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_b8;
  char *local_b0;
  char *local_68;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = (char *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (char *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKey__0269e048,&cf_voiceCustomDurationEnabled);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar4 & 1) == 0) ||
     ((((ulong)pcVar2 & 1) != 0 &&
      (pcVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540),
      ((ulong)pcVar4 & 1) == 0)))) {
    if ((((ulong)pcVar2 & 1) == 0) ||
       (pcVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540),
       ((ulong)pcVar4 & 1) == 0)) {
      local_b8 = (char *)0x0;
    }
    else {
      local_b0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
      if ((long)local_b0 < 2) {
        local_b0 = (char *)((long)&MACH_HEADER.magic + 2);
      }
      local_b8 = local_b0;
    }
    pcVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar2 = local_28;
    pcVar4 = local_30;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setObject_forKey__026ca9e8,pcVar4);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_68 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_68 < 0) {
    local_68 = (char *)0x0;
  }
  if (600 < (long)local_68) {
    local_68 = section_00000248.segname;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_68;
}

