// viewWillDisappear: @0x1ba30

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::viewWillDisappear_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_50;
  uint local_3c;
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMVideoController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewWillDisappear:",param_3 & 1);
  _objc_msgSend_presentedViewController(local_18,local_50);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(&objc::class_t::WCMVideoComments);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  local_3c = 0;
  if ((uVar3 & 1) != 0) {
    local_3c = _objc_msgSend_isBeingDismissed(local_18,local_50);
    local_3c = local_3c ^ 1;
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if ((local_3c & 1) == 0) {
    _objc_msgSend_player(local_18,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_pause(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_timer(local_18,local_50);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_invalidate(uVar1,local_50);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_setTimer_(local_18,local_50,0);
  }
  return;
}

