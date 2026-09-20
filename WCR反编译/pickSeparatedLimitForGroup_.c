// pickSeparatedLimitForGroup: @ 01d12928

/* Function Stack Size: 0x14 bytes */

void WCRefineQuickChatSettingsViewController::pickSeparatedLimitForGroup_
               (ID param_1,SEL param_2,bool param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *local_50;
  char *local_48;
  undefined *local_40;
  undefined *local_38;
  char *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setEditingGroupLimit__026c3f80,local_21 & 1);
    local_50 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_quickChatPrivateLimit_026b13e0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_quickChatGroupLimit_026b13e8);
    }
    local_40 = local_50;
    pcVar1 = local_30;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_handleMetricAlertCancel__026c3d88);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_handleSeparatedLimitInput__026c3f88);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    pcVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

