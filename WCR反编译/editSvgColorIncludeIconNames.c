// editSvgColorIncludeIconNames @ 01f370c8

/* Function Stack Size: 0x10 bytes */

void WCRefineUIBeautifyViewController::editSvgColorIncludeIconNames(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_48;
  char *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,2000);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextFieldDefaultText__0269fd98,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_alertConfirmSvgColorIncludeIconN_026c8980);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

