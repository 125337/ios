// performOnNSLogFileQueue:waitUntilDone: @ 0091b214

/* Function Stack Size: 0x1c bytes */

void WCNavigationMonitor::performOnNSLogFileQueue_waitUntilDone_
               (ID param_1,SEL param_2,ID param_3,uint param_4,bool param_5)

{
  void *pvVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  if (local_28 != 0) {
    pvVar1 = _dispatch_get_specific(DAT_026f4c30);
    if (pvVar1 == (void *)0x0) {
      if ((param_4 & 1) == 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nsLogFileQueue_026aa418);
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nsLogFileQueue_026aa418);
        _objc_retainAutoreleasedReturnValue();
        _dispatch_sync();
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
    }
    else {
      (**(code **)(local_28 + 0x10))();
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

