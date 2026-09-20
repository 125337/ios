// getLogsForType @ 00912998

/* Function Stack Size: 0x10 bytes */

ID LogViewerViewController::getLogsForType(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logType_026aa0f8);
  if (param_1 == 0) {
    pcVar1 = (cfstringStruct *)PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__Oe_R;
  }
  else if (param_1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_cNe_R;
  }
  else if (param_1 == 3) {
    pcVar1 = (cfstringStruct *)PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

