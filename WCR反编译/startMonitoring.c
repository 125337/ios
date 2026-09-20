// startMonitoring @ 00919f08

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::startMonitoring(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 10) = 0;
    DAT_028ce368 = 1;
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hookViewControllerMethods_026aa3a0);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hookNavigationControllerMethods_026aa3a8);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hookPresentationMethods_026aa3b0);
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logLevelString_026aa3b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logWithFormat__026aa3c0,&::cf__);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}

