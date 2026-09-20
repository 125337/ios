// handleHideNewPassword: @ 01c89f20

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginContainerSettingsViewController::handleHideNewPassword_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *local_c0;
  cfstringStruct *local_78;
  char *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
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
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_50 = (cfstringStruct *)0x0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_50;
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_50,local_58);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    if (local_50 == (cfstringStruct *)0x0) {
      local_c0 = &cf__xeHe;
    }
    else {
      local_c0 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_c0);
    local_5c = 1;
  }
  else {
    _objc_setAssociatedObject(local_18,DAT_028c6908,local_48,3);
    pcVar6 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelHidePasswordChange_026c2a20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_handleHideConfirmNewPassword__026c2a40);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    pcVar6 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

