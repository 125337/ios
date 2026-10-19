// dealloc @0x35b04

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_timer(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_galleryTimer(local_18,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_galleryDecodeQueue(local_18,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_cancelAllOperations(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObserver_(uVar1,local_38,local_18);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_msgSend_observingRefreshOffset(local_18,local_38);
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_web(local_18,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_scrollView(uVar1,local_38);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeObserver_forKeyPath_context_
              (uVar3,local_38,local_18,&cf_contentOffset,&_RefreshOffsetKey);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_web(local_18,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_scrollView(uVar1,local_38);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_panGestureRecognizer(uVar3,local_38);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeTarget_action_(uVar4,local_38,local_18,"refreshPan:");
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_30 = local_18;
  local_28 = &objc::class_t::WCMFeedController;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

