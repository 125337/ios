// momentsSpecialFollowHistoryCount @ 02166070

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::momentsSpecialFollowHistoryCount(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
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
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_30 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar4 = local_28;
    pcVar3 = local_30;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setObject_forKey__026ca9e8,pcVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_38 < 1) {
    local_38 = (char *)((long)&MACH_HEADER.magic + 1);
  }
  if (0x32 < (long)local_38) {
    local_38 = segment_command_00000020.segname + 10;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

