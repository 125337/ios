// editReplyText @ 01944050

/* Function Stack Size: 0x10 bytes */

void WCRefineDoNotDisturbSettingsViewController::editReplyText(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
             PTR_s_handleReplyTextInput__026b9770);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showTextFieldWithMaxLen__0269e5e0,500);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  pcVar1 = local_28;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_48 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98,local_48);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  _objc_storeStrong(&local_28,0);
  return;
}

