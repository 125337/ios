// saveInlineHTMLToRepository @ 01efb5a4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::saveInlineHTMLToRepository(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveInlineHTMLSilently__026c80e8,1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSOX_v);
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingKey__026aebd8,&cf_saveRepository)
    ;
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_2c = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf_Q_uNx_;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTextFieldDefaultText__0269fd98,&cf_Q_uNx_);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
                 PTR_s_confirmTextValue_026c7f80);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

