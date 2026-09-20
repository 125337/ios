// clearWeAppRecentUsageRecords @ 01a70158

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::clearWeAppRecentUsageRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineWeAppRecordCleaner_026cf2c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWeAppRecordCleaner_026cf2c8,PTR_s_sharedCleaner_026bd358);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

