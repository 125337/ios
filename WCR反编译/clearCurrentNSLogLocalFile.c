// clearCurrentNSLogLocalFile @ 0091b97c

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::clearCurrentNSLogLocalFile(ID param_1,SEL param_2)

{
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_0091ba30;
  local_30 = &DAT_0257a800;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_performOnNSLogFileQueue_waitUnti_026aa448,&local_48,1);
  _objc_storeStrong(&local_28,0);
  return;
}

