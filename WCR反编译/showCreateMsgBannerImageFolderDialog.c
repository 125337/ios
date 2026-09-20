// showCreateMsgBannerImageFolderDialog @ 01b97c74

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::showCreateMsgBannerImageFolderDialog
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTextFieldDefaultText__0269fd98,&::cf__);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_,local_18,
               PTR_s_handleCreateMsgBannerImageFolder_026c00d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

