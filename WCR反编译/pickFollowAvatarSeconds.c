// pickFollowAvatarSeconds @ 01d11bf0

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickChatSettingsViewController::pickFollowAvatarSeconds(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_handleMetricAlertCancel__026c3d88);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_handleFollowAvatarSecondsInput__026c3f20);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_30)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

