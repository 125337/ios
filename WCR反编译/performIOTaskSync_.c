// performIOTaskSync: @ 010c9080

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsMonitor::performIOTaskSync_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 != 0) {
    pvVar1 = _dispatch_get_specific(DAT_0280e190);
    if (pvVar1 == (void *)0x0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ioQueue_026ae678);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_sync();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      (**(code **)(local_28 + 0x10))();
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

