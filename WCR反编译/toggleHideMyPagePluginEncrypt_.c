// toggleHideMyPagePluginEncrypt: @ 01c8965c

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginContainerSettingsViewController::toggleHideMyPagePluginEncrypt_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_30;
  ulong local_28;
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
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setHideWCRefinePluginHubEntryArm_026a6548,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setHideWCRefinePluginHubEntryEna_026a6550,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_postGlobalSettingsChangedNotific_026a6558);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Qn_6e_eQS_>f_y);
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideWCRefinePluginHubEntryEnable_026c28e8);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_hideMyPagePluginPasswordConfigur_026b4510);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_beginSetHidePasswordThenArm_026c2a08);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setHideWCRefinePluginHubEntryArm_026a6548,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_showHidePluginHubNextStepAlert_026c2a10);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

