// showPatOtherAutoReplyMultiContentEditor @ 01a5eaa8

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showPatOtherAutoReplyMultiContentEditor
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  cfstringStruct *local_50;
  char *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_autoReplyNormalizedMultiItems__0269efa0,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar5 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar5,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
             PTR_s_handlePatOtherAutoReplyMultiInpu_026bcfe0);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,2000);
  pcVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  if (((ulong)pcVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_30)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

