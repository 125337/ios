// receiveRuleChanged: @ 01de030c

/* Function Stack Size: 0x18 bytes */

void WCRefineSmallSignalSettingsViewController::receiveRuleChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifySettingsChanged_026b9a80);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  bVar1 = false;
  if (lVar2 == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
               &cf_S_MR_gb_u7b_OSnmzfNuHe);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

