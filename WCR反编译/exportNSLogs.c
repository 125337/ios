// exportNSLogs @ 0091a6c0

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::exportNSLogs(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = *(ID *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

