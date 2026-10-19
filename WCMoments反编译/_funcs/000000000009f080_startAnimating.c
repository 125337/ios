// startAnimating @0x9f080

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::startAnimating(ID param_1,SEL param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  ID local_40;
  class_t *local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_28 = _objc_msgSend_currentImageType(param_1);
  if ((local_28 == 3) || (local_28 == 4)) {
    _objc_msgSend_imageForType_(0,local_18,local_48,local_28);
    local_30 = _objc_retainAutoreleasedReturnValue();
    lVar1 = _objc_msgSend_count(local_30,local_48);
    if (lVar1 != 0) {
      local_40 = local_18;
      local_38 = &objc::class_t::WCMYYAnimatedImageView;
      _objc_msgSendSuper2(&local_40,"startAnimating");
      _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);
    }
    _objc_storeStrong(&local_30,0);
  }
  else if ((*(long *)(local_18 + (long)_curAnimatedImage) != 0) &&
          (uVar2 = _objc_msgSend_isPaused(*(undefined8 *)(local_18 + (long)_link),local_48),
          (uVar2 & 1) != 0)) {
    *(undefined8 *)(local_18 + (long)_curLoop) = 0;
    *(undefined1 *)(local_18 + (long)_loopEnd) = 0;
    _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_48,0);
    _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);
  }
  return;
}

