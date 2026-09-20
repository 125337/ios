// quickEditRemarkModeChanged: @ 01a52578

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::quickEditRemarkModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  uVar3 = (ulong)(lVar1 == 1);
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((ulong)(lVar1 == 1) == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&::cf___,&cf_bwSN,0,in_x6,in_x7,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

