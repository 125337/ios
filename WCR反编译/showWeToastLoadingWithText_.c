// showWeToastLoadingWithText: @ 00f99a88

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::showWeToastLoadingWithText_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  char *local_48;
  undefined4 local_3c;
  char *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = "WeToast";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_toast_026aca18);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_loadingStyle);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_showToastWithText__026a18d8);
      if (((ulong)pcVar1 & 1) != 0) {
        if (local_30 == (cfstringStruct *)0x0) {
          local_78 = &cf_R__N_;
        }
        else {
          local_78 = local_30;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_showToastWithText__026a18d8,local_78);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

