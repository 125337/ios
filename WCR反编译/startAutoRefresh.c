// startAutoRefresh @ 00521ab8

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsAutoRefreshManager::startAutoRefresh(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timer_026a4950);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_interval_026a4958);
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    (*(code *)PTR__objc_msgSend_02578628)
              ((double)(long)IVar1,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_scheduledTimerWithTimeInterval_t_026a4968,param_1,PTR_s_performRefresh_026a4960
               ,0,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTimer__026a4970);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timer_026a4950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(0,param_1,PTR_s_setLastRefreshTime__026a4980);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               param_1,PTR_s_performRefresh_026a4960);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
               PTR_s_performRefresh_026a4960,0);
  }
  return;
}

