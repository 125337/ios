// setLogLevelBasic @ 00917fdc

/* Function Stack Size: 0x10 bytes */

void NavigationMonitorViewController::setLogLevelBasic(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCNavigationMonitor_026cea60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

