// toggleAskXiaoWei: @ 01f51304

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::toggleAskXiaoWei_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_forceModeFromSender__026c91e8,local_28);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_shouldShowEnableTipFromOldMode_n_026c91f8,puVar2,IVar3);
  if ((IVar4 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isAskXiaoWeiSupportedByCurrentWe_026c92b8);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectedSegmentIndex__0269e9e0,puVar2)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_applyForceModeAppearanceToContro_026c9108,local_28,puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_WCRefine,&::cf_newline_s_,&cf_wSN,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_01f51524;
    }
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestartAlertIfNeeded_026c9140);
LAB_01f51524:
  _objc_storeStrong(&local_28,0);
  return;
}

