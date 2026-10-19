// beginSeeking @0x29b14

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::beginSeeking(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemUptime(uVar1,local_30);
  _objc_msgSend_setLastPlaybackProgress_(param_1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setSeeking_(param_1,local_30,1);
  _objc_msgSend_player(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pause(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

