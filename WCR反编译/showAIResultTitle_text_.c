// showAIResultTitle:text: @ 017be550

/* Function Stack Size: 0x20 bytes */

void WCRefineAIFeatureViewController::showAIResultTitle_text_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAIStore_026ce048,PTR_s_plainTextByStrippingMarkdown__0269d258,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setResultText__026b4d48,local_30);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_Y6R);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_sQ,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_18,
               PTR_s_copyAIResult_026b4d50);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

