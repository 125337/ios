// setLogLevel: @ 0091a210

/* Function Stack Size: 0x18 bytes */

void WCNavigationMonitor::setLogLevel_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  long_long local_28;
  
  if (((long)param_3 < 0) || (local_28 = param_3, 2 < (long)param_3)) {
    local_28 = 0;
  }
  *(long_long *)(param_1 + 0x28) = local_28;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logLevelString_026aa3b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_logWithFormat__026aa3c0,&cf_e___R_n__N_);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return;
}

