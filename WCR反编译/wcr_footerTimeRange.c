// wcr_footerTimeRange @ 01db2690

/* Function Stack Size: 0x10 bytes */

long_long WCRefineSessionStatsBoardView::wcr_footerTimeRange(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boardMode_026c4e58);
  if (param_1 == 2) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return (long_long)local_18;
}

