// handleNewPassword: @ 01cba11c

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendViewController::handleNewPassword_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *local_90;
  cfstringStruct *local_78;
  char *local_70;
  undefined4 local_68;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_90 = local_30;
  local_51 = 0;
  local_61 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_90 = &::cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_90;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((cfstringStruct *)0x3 < pcVar2) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar2 < (cfstringStruct *)0x20 || pcVar2 + -1 == (cfstringStruct *)0x0) {
      _objc_setAssociatedObject(pcVar2 + -1,local_18,&DAT_028e4690,local_48,3);
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelPasswordChange_026c33f0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
                 PTR_s_handleConfirmNewPassword__026c3408);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_show_0269d280);
      _objc_storeStrong(&local_70,0);
      local_68 = 0;
      goto LAB_01cba4e8;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x);
  local_68 = 1;
LAB_01cba4e8:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

