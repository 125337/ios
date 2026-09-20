// setVersionCode: @ 01f53750

/* Function Stack Size: 0x18 bytes */

void WCRefineVersionController::setVersionCode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  if (param_3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showVersionSelectedAlert_026c93c8);
  }
  return;
}

