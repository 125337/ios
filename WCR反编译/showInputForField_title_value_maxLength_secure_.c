// showInputForField:title:value:maxLength:secure: @ 017dedd0

/* Function Stack Size: 0x34 bytes */

void WCRefineAISettingsViewController::showInputForField_title_value_maxLength_secure_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6,
               bool param_7)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *local_90;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  byte local_41;
  unsigned_long_long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_5);
  local_41 = (byte)param_7;
  uVar1 = local_28;
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_systemPrompt);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_isEqualToString__0269ccc8,&cf_chatReplyPrompt), (uVar1 & 1) == 0)) {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingField__026b5468,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_40);
      if (local_38 == (cfstringStruct *)0x0) {
        local_90 = &::cf___;
      }
      else {
        local_90 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_90);
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      if (((local_41 & 1) != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setSecureTextEntry__026caa30),
         ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setSecureTextEntry__026caa30,1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelInput_026b5470);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmInput_026b5478);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
      _objc_storeStrong(&local_58,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showLongPromptEditorForField_tit_026b5460,local_28,local_30,local_38);
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

