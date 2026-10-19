// togglePlayback @0x29860

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::togglePlayback(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemUptime(uVar2,local_28);
  _objc_msgSend_setLastPlaybackProgress_(param_1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _objc_msgSend_userPaused(param_1,local_28);
  _objc_msgSend_setUserPaused_(param_1,local_28,uVar1 ^ 1);
  uVar3 = _objc_msgSend_userPaused(param_1,local_28);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_player(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_play(uVar2,local_28);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    _objc_msgSend_player(param_1,local_28);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_pause(uVar2,local_28);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  uVar1 = _objc_msgSend_userPaused(param_1,local_28);
  _objc_msgSend_pauseButton(param_1,local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_28,uVar1 ^ 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  return;
}

