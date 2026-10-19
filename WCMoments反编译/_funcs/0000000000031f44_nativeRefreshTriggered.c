// nativeRefreshTriggered @0x31f44

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::nativeRefreshTriggered(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = _objc_msgSend_refreshedThisDrag(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_refreshHead(param_1,local_28);
  }
  return;
}

