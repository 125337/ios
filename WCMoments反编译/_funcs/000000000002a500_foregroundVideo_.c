// foregroundVideo: @0x2a500

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::foregroundVideo_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_48;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemUptime(uVar1,local_48);
  _objc_msgSend_setLastPlaybackProgress_(local_18,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_view(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_window(uVar1,local_48);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  local_2c = 0;
  if (lVar2 != 0) {
    local_2c = _objc_msgSend_userPaused(local_18,local_48);
    local_2c = local_2c ^ 1;
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_2c & 1) != 0) {
    _objc_msgSend_player(local_18,local_48);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_play(uVar1,local_48);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

