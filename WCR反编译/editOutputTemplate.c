// editOutputTemplate @ 019f29a8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontConvertViewController::editOutputTemplate(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  char *local_30;
  char *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x30);
    pcVar1 = local_30;
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_outputTemplate_026b1040);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_48 = &cf___fontName_UI;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98,local_48);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmOutputTemplate__026bb390);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

