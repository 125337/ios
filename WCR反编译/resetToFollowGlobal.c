// resetToFollowGlobal @ 018405a0

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::resetToFollowGlobal(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setAvatarFrameSpecialUserConfig__026b65f0,0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadDraft_026b65b8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sendSettingsChangedNotification_026b61d8);
  puVar2 = PTR_WCRefineHelper_026ce000;
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isPageAvatarSpecialKey_026b6618);
  pcVar1 = &cf__ndub4YPFhMn_;
  if ((IVar3 & 1) == 0) {
    pcVar1 = &cf__b_YhQ__;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

