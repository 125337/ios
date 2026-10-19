// refreshPan: @0x31f88

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::refreshPan_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = _objc_msgSend_state(local_28,local_50);
  if (lVar1 + -1 == 0) {
    _objc_msgSend_setRefreshedThisDrag_(local_18,local_50,0);
    _objc_msgSend_web(local_18,local_50);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scrollView(uVar2,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend_adjustedContentInset(uVar3,local_50);
    _objc_msgSend_setRefreshBaseInset_(uVar5,local_18,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    lVar1 = _objc_msgSend_state(lVar1 + -1,local_28,local_50);
    if (lVar1 + -3 == 0) {
      dVar6 = (double)_objc_msgSend_pullDistance(local_18,local_50);
      if (((72.0 <= dVar6) &&
          (uVar4 = _objc_msgSend_refreshedThisDrag(local_18,local_50), (uVar4 & 1) == 0)) &&
         (uVar4 = _objc_msgSend_refreshingHead(local_18,local_50), (uVar4 & 1) == 0)) {
        _objc_msgSend_refreshControl(local_18,local_50);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_beginRefreshing(uVar2,local_50);
        (*(code *)PTR__objc_release_00110458)(uVar2);
        _objc_msgSend_refreshHead(local_18,local_50);
      }
    }
    else {
      lVar1 = _objc_msgSend_state(lVar1 + -3,local_28,local_50);
      if ((lVar1 == 4) &&
         (uVar4 = _objc_msgSend_refreshingHead(0,local_18,local_50), (uVar4 & 1) == 0)) {
        _objc_msgSend_refreshControl(local_18,local_50);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_cancelFeedback(uVar2,local_50);
        (*(code *)PTR__objc_release_00110458)(uVar2);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

