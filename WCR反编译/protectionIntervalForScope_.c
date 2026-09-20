// protectionIntervalForScope: @ 010f009c

/* Function Stack Size: 0x18 bytes */

double WCRefinePageLockGuard::protectionIntervalForScope_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined8 local_30;
  
  if (param_3 == 1) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((long)local_30 < 0) {
    local_30 = (undefined *)0x0;
  }
  return (double)(long)local_30;
}

