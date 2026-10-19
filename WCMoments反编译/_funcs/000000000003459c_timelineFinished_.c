// timelineFinished: @0x3459c

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::timelineFinished_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_object(local_28,local_48);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_facade(local_18,local_48);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(lVar4);
  IVar2 = local_18;
  if (lVar4 == lVar5) {
    _objc_msgSend_userInfo(local_28,local_48);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar6,local_48,&cf_failed);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar8 = _objc_msgSend_boolValue(uVar7,local_48);
    pcVar1 = &cf_timeline_error;
    if ((uVar8 & 1) == 0) {
      pcVar1 = &cf_timeline_normal;
    }
    _objc_msgSend_traceState_(IVar2,local_48,pcVar1);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    uVar8 = _objc_msgSend_initialHeadPending(local_18,local_48);
    local_4c = 1;
    if ((uVar8 & 1) == 0) {
      local_4c = _objc_msgSend_refreshingHead(local_18,local_48);
    }
    _objc_msgSend_setInitialHeadPending_(local_18,local_48,0);
    _objc_msgSend_userInfo(local_28,local_48);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar6,local_48,&cf_failed);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_boolValue(uVar7,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    uVar8 = _objc_msgSend_loadingTail(local_18,local_48);
    if ((uVar8 & 1) != 0) {
      _objc_msgSend_finishTailWait(local_18,local_48);
    }
    if (((local_4c & 1) != 0) && ((uVar3 & 1) == 0)) {
      _objc_msgSend_setHeadOrderPending_(local_18,local_48,1);
    }
    _objc_msgSend_finishRefreshWithSuccess_(local_18,local_48,(uVar3 & 0xff ^ 1) & 1);
    _objc_msgSend_setNativeListDirty_(local_18,local_48,1);
    _objc_msgSend_reloadFeed(local_18,local_48);
    if ((uVar3 & 1) != 0) {
      _objc_msgSend_status_(local_18,local_48,&cf_7Re_g_bzTNb);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

