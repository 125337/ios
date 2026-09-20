// handleChatTopBarMoreLongPressActionWithIndex: @ 01a47348

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleChatTopBarMoreLongPressActionWithIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

