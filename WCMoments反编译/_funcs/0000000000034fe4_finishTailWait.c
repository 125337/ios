// finishTailWait @0x34fe4

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::finishTailWait(ID param_1,SEL param_2)

{
  long lVar1;
  long local_58;
  undefined8 local_40;
  
  _objc_msgSend_traceState_(param_1,param_2,&cf_tail_wait_finished);
  _objc_msgSend_setLoadingTail_(param_1,local_40,0);
  _objc_msgSend_setTailRetryRequired_(param_1,local_40,1);
  lVar1 = _objc_msgSend_pagingGeneration(param_1,local_40);
  _objc_msgSend_setPagingGeneration_(param_1,local_40,lVar1 + 1);
  local_58 = _objc_msgSend_tailPreviousLimit(param_1,local_40);
  lVar1 = _objc_msgSend_tailStartCount(param_1,local_40);
  if (local_58 < lVar1) {
    local_58 = lVar1;
  }
  _objc_msgSend_setLimit_(param_1,local_40,local_58);
  _objc_msgSend_syncPaging(param_1,local_40);
  return;
}

