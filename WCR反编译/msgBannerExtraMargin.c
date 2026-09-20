// msgBannerExtraMargin @ 020e146c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::msgBannerExtraMargin(ID param_1,SEL param_2)

{
  char *pcVar1;
  SEL SVar2;
  char *pcVar3;
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
  SVar2 = local_20;
  local_28 = (char *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (char *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_30 == (char *)0x0) {
    pcVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_28;
    pcVar1 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setObject_forKey__026ca9e8,pcVar1);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_38 < 0) {
    local_38 = (char *)0x0;
  }
  if (200 < (long)local_38) {
    local_38 = section_000000b8.segname;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

