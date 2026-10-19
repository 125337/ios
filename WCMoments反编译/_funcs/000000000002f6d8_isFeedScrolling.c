// isFeedScrolling @0x2f6d8

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::isFeedScrolling(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_msgSend_web(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_scrollView(uVar2,local_48);
  local_30 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = _objc_msgSend_isTracking(local_30,local_48);
  bVar1 = false;
  local_11 = true;
  if ((uVar3 & 1) == 0) {
    uVar3 = _objc_msgSend_isDragging(local_30,local_48);
    local_11 = true;
    if ((uVar3 & 1) == 0) {
      uVar3 = _objc_msgSend_isDecelerating(local_30,local_48);
      local_11 = true;
      if ((uVar3 & 1) == 0) {
        _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_48);
        local_38 = _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        dVar4 = (double)_objc_msgSend_systemUptime(local_38,local_48);
        dVar5 = (double)_objc_msgSend_lastWebScrollTime(local_20,local_48);
        local_11 = dVar4 - dVar5 < 0.24;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

