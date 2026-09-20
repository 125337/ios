// showCustomTargetInputMiniProgram: @ 01df6fc4

/* Function Stack Size: 0x14 bytes */

void WCRefineSuperFloatActionPickerViewController::showCustomTargetInputMiniProgram_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *local_38;
  char *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    pcVar1 = &cf_miniprogram;
    if ((local_21 & 1) == 0) {
      pcVar1 = &cf_url;
    }
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingCustomKind__026b70a8,pcVar1);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,300);
    pcVar1 = &cf_Ty_;
    if ((local_21 & 1) == 0) {
      pcVar1 = &cf_Ty_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextFieldDefaultText__0269fd98,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelCustomInput_026b70b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
               PTR_s_confirmCustomInput__026b70c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAlert__026b70c0,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

