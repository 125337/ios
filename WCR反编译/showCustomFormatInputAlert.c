// showCustomFormatInputAlert @ 018c167c

/* Function Stack Size: 0x10 bytes */

void WCRefineChatTimeViewController::showCustomFormatInputAlert(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_28 == (undefined *)0x0) {
    _objc_storeStrong(&local_28,&cf__O_);
  }
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,100);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextFieldDefaultText__0269fd98,local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
             PTR_s_alertCancel_026b2910);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_alertConfirmTimeFormat__026b7df0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

