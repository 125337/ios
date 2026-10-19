// settleVideo @0x27b5c

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::settleVideo(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double in_d1;
  double in_d3;
  long local_108;
  long local_100;
  double local_e0;
  undefined8 local_c8;
  
  _objc_msgSend_collection(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentOffset(uVar1,local_c8);
  _objc_msgSend_collection(param_1,local_c8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar2,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_e0 = in_d3;
  if (in_d3 <= 1.0) {
    local_e0 = 1.0;
  }
  local_100 = (long)(in_d1 / local_e0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_videos(param_1,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_count(uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar3 + -1 < local_100) {
    local_100 = lVar3 + -1;
  }
  if (local_100 < 1) {
    local_108 = 0;
  }
  else {
    local_108 = local_100;
  }
  lVar3 = _objc_msgSend_index(param_1,local_c8);
  if (local_108 == lVar3) {
    uVar6 = _objc_msgSend_userPaused(0,param_1,local_c8);
    if ((uVar6 & 1) == 0) {
      _objc_msgSend_player(param_1,local_c8);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_play(uVar1,local_c8);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
  }
  else {
    _objc_msgSend_player(param_1,local_c8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_currentItem(uVar1,local_c8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend_status(uVar2,local_c8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    if (lVar3 == 1) {
      _objc_msgSend_player(0,param_1,local_c8);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_currentItem(uVar1,local_c8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_preparedItems(param_1,local_c8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_msgSend_index(param_1,local_c8);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_c8,uVar5);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setObject_forKeyedSubscript_(uVar4,local_c8,uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
    _objc_msgSend_setIndex_(param_1,local_c8,local_108);
    _objc_msgSend_activateVideo(param_1,local_c8);
  }
  return;
}

