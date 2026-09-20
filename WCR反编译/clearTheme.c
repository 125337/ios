// clearTheme @ 0171fedc

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropConsumedCodesDetailViewController::clearTheme(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  undefined *local_48;
  uint local_3c;
  char *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_codes_026b3a80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__nzz_N);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIAlertView";
  local_30 = puVar2;
  _objc_getClass();
  local_38 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    local_48 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nzz,local_18,
               PTR_s_confirmClearTheme__026b3a90);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_confirmClearTheme__026b3a90,0);
  }
  local_3c = (uint)(pcVar3 == (char *)0x0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

