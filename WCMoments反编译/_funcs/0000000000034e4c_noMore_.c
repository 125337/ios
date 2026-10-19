// noMore: @0x34e4c

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::noMore_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_object(local_28,local_48);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_facade(local_18,local_48);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if (lVar2 == lVar3) {
    _objc_msgSend_traceState_(0,local_18,local_48,&cf_timeline_end);
    _objc_msgSend_setInitialHeadPending_(local_18,local_48,0);
    _objc_msgSend_setExhausted_(local_18,local_48,1);
    _objc_msgSend_setLoadingTail_(local_18,local_48,0);
    _objc_msgSend_setTailRetryRequired_(local_18,local_48,0);
    IVar1 = local_18;
    lVar2 = _objc_msgSend_pagingGeneration(local_18,local_48);
    _objc_msgSend_setPagingGeneration_(IVar1,local_48,lVar2 + 1);
    _objc_msgSend_syncPaging(local_18,local_48);
    uVar4 = _objc_msgSend_refreshingHead(local_18,local_48);
    if ((uVar4 & 1) == 0) {
      _objc_msgSend_finishRefresh(local_18,local_48);
    }
    _objc_msgSend_setNativeListDirty_(local_18,local_48,1);
    _objc_msgSend_reloadFeed(local_18,local_48);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

