// stop @0x3b5f4

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::stop(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_30;
  
  _objc_msgSend_facade(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_traceState_(param_1,local_30,&cf_session_stop);
  }
  _objc_msgSend_timer(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar2,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setTimer_(param_1,local_30,0);
  _objc_msgSend_setRefreshingHead_(param_1,local_30,0);
  lVar1 = _objc_msgSend_refreshGeneration(param_1,local_30);
  _objc_msgSend_setRefreshGeneration_(param_1,local_30,lVar1 + 1);
  _objc_msgSend_refreshControl(param_1,local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelFeedback(uVar2,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = _objc_msgSend_began(param_1,local_30);
  if ((uVar3 & 1) != 0) {
    _objc_msgSend_facade(param_1,local_30);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar2,&cf_endTimeline,PTR____NSArray0__struct_00110718);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_msgSend_setBegan_(param_1,local_30,0);
  _objc_msgSend_setFacade_(param_1,local_30);
  _objc_msgSend_setNativeVideoEnvironment_(param_1,local_30,0);
  _objc_msgSend_setNativeVideoEnvironmentAccount_(param_1,local_30,0);
  _objc_msgSend_setLoadingTail_(param_1,local_30,0);
  lVar1 = _objc_msgSend_pagingGeneration(param_1,local_30);
  _objc_msgSend_setPagingGeneration_(param_1,local_30,lVar1 + 1);
  _objc_msgSend_setInitialHeadPending_(param_1,local_30,0);
  return;
}

