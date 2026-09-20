// showPreviewCustomIDInput @ 01ca39c4

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::showPreviewCustomIDInput(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  char *local_38;
  cfstringStruct *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_50;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,100);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_previewCustomIDConfirm__026c2e08);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

