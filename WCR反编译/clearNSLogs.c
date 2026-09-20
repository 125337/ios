// clearNSLogs @ 0091a560

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::clearNSLogs(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_0269d508);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearCurrentNSLogLocalFile_026aa3e0);
  return;
}

