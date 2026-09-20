// clearAllHistory: @ 01b29c5c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryViewController::clearAllHistory_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_historyRecords_026bea70);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar2 = local_18;
    puVar1 = PTR_WCRefineHelper_026ce000;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01b29e04;
    local_40 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzzSSU_,
               &cf_nxnzzhQsQ_cSSU_T,&cf_nzz,&local_58,&cf_Sm);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(IVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

