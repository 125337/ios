// showLinkInputForKind: @ 01b7eeec

/* Function Stack Size: 0x18 bytes */

void WCRLongPressMenuPickerViewController::showLinkInputForKind_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *local_40;
  byte local_35;
  undefined4 local_34;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_miniprogram);
    local_35 = (byte)uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingCustomKind__026b70a8,local_28);
    pcVar2 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,300);
    pcVar1 = &cf_Ty_;
    if ((local_35 & 1) == 0) {
      pcVar1 = &cf_Ty_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextFieldDefaultText__0269fd98,pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelCustomInput_026b70b0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_mR,local_18,
               PTR_s_confirmLinkInput__026b70b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCustomAlert__026b70c0,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

