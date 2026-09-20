// msgBannerExtraMarginDark @ 020e1ba8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::msgBannerExtraMarginDark(ID param_1,SEL param_2)

{
  SEL SVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_68;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  SEL local_30;
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
  pcVar2 = local_28;
  local_30 = SVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,SVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_38 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    puVar3 = PTR_s_msgBannerExtraMargin_026ca358;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKey__0269e048);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_40 == (char *)0x0) {
      local_68 = (char *)0x0;
    }
    else {
      local_68 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
    }
    local_48 = local_68;
    if ((long)local_68 < 0) {
      local_48 = (char *)0x0;
    }
    if (200 < (long)local_48) {
      local_48 = section_000000b8.segname;
    }
    pcVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_48);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,0);
  }
  local_50 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if ((long)local_50 < 0) {
    local_50 = (char *)0x0;
  }
  if (200 < (long)local_50) {
    local_50 = section_000000b8.segname;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_50;
}

