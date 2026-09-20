// confirmClearAllHistory: @ 01b1c5a0

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::confirmClearAllHistory_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentPage__0269f4f0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_exitMultiSelectMode_026bade0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzzhQcSSU_);
  _objc_storeStrong(&local_28,0);
  return;
}

