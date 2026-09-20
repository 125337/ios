// toggleFinderFriendTabHighEntropy: @ 01f51a90

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::toggleFinderFriendTabHighEntropy_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ID local_38;
  undefined *local_30;
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
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_forceModeFromSender__026c91e8,local_28);
  IVar4 = local_18;
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_shouldShowEnableTipFromOldMode_n_026c91f8,local_30,IVar3);
  if ((IVar4 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showRestartAlertIfNeeded_026c9140);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectedSegmentIndex__0269e9e0,local_30)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_applyForceModeAppearanceToContro_026c9108,local_28,local_30);
    _objc_initWeak(auStack_40,local_18);
    _objc_initWeak(auStack_48,local_28);
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01f51da0;
    local_60 = &DAT_02582188;
    _objc_copyWeak(auStack_58,auStack_40);
    _objc_copyWeak(auStack_50,auStack_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_WCRefine,&::cf_newline_s_,
               &cf_Sm,0,&cf___,&local_78);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

