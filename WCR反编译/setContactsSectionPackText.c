// setContactsSectionPackText @ 01b5809c

/* Function Stack Size: 0x10 bytes */

void WCRefineLayoutFunctionViewController::setContactsSectionPackText(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_58;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    FUN_01b45740();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = PTR_WCRefineConfig_026cdf58;
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar1 == (char *)0x0) {
      local_58 = local_30;
    }
    else {
      local_58 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_58;
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleContactsSectionPackTextInp_026bd300);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_40)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

