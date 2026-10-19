// timelineChanged: @0x34310

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::timelineChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_object(local_28,local_48);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_facade(local_18,local_48);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if (lVar1 == lVar2) {
    _objc_msgSend_traceState_(0,local_18,local_48,&cf_timeline_changed);
    uVar3 = _objc_msgSend_refreshingHead(local_18,local_48);
    if (((uVar3 & 1) != 0) ||
       (uVar3 = _objc_msgSend_initialHeadPending(local_18,local_48), (uVar3 & 1) != 0)) {
      _objc_msgSend_setHeadOrderPending_(local_18,local_48,1);
    }
    _objc_msgSend_setNativeListDirty_(local_18,local_48,1);
    _objc_msgSend_reloadFeed(local_18,local_48);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

