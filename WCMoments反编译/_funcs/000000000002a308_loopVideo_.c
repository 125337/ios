// loopVideo: @0x2a308

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::loopVideo_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_68;
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_object(local_28,local_68);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_player(local_18,local_68);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_currentItem(uVar2,local_68);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  local_44 = 0;
  if (lVar1 == lVar3) {
    local_44 = _objc_msgSend_userPaused(local_18,local_68);
    local_44 = local_44 ^ 1;
  }
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_44 & 1) != 0) {
    _objc_msgSend_player(local_18,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uStack_38 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 8);
    local_40 = *(undefined8 *)PTR__kCMTimeZero_001108f8;
    local_30 = *(undefined8 *)(PTR__kCMTimeZero_001108f8 + 0x10);
    _objc_msgSend_seekToTime_(uVar2,local_68,&local_40);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_player(local_18,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_play(uVar2,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

