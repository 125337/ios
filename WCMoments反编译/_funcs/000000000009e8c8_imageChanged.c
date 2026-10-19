// imageChanged @0x9e8c8

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::imageChanged(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_100;
  byte local_49;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  local_38 = _objc_msgSend_currentImageType(param_1);
  _objc_msgSend_imageForType_(local_28,local_100,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  local_49 = 0;
  local_40 = uVar2;
  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if ((((uVar4 & 1) != 0) &&
      (uVar4 = _objc_msgSend_conformsToProtocol_
                         (local_40,local_100,&objc::protocol_t::WCMYYAnimatedImage),
      (uVar4 & 1) != 0)) &&
     (local_48 = _objc_msgSend_animatedImageFrameCount(local_40,local_100), 1 < local_48)) {
    local_49 = _objc_opt_respondsToSelector(local_40,"animatedImageContentsRectAtIndex:");
    local_49 = local_49 & 1;
  }
  if ((local_49 == 0) && ((*(byte *)(local_28 + (long)_curImageHasContentsRect) & 1) != 0)) {
    _objc_msgSend_layer(local_28,local_100);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_contentsRect(uVar2,local_100);
    _CGRectMake(0);
    uVar1 = _CGRectEqualToRect(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((uVar1 & 1) == 0) {
      _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_100);
      _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_100,1);
      in_d1 = 0;
      in_d3 = 0x3ff0000000000000;
      in_d2 = 0x3ff0000000000000;
      uVar3 = _CGRectMake(0);
      _objc_msgSend_layer(local_28,local_100);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setContentsRect_(uVar3,uVar2,local_100);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_100);
    }
  }
  *(byte *)(local_28 + (long)_curImageHasContentsRect) = local_49;
  if (local_49 != 0) {
    uVar2 = _objc_msgSend_animatedImageContentsRectAtIndex_(local_40,local_100,0);
    _objc_msgSend_setContentsRect_forImage_(uVar2,in_d1,in_d2,in_d3,local_28,local_100,local_40);
  }
  if (local_48 != 0 && local_48 - 1 != 0) {
    _objc_msgSend_resetAnimated(local_48 - 1,local_28,local_100);
    _objc_storeStrong(local_28 + (long)_curAnimatedImage,local_40);
    _objc_storeStrong(local_28 + (long)_curFrame,local_40);
    uVar2 = _objc_msgSend_animatedImageLoopCount
                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);
    *(undefined8 *)(local_28 + (long)_totalLoop) = uVar2;
    uVar2 = _objc_msgSend_animatedImageFrameCount
                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);
    *(undefined8 *)(local_28 + (long)_totalFrameCount) = uVar2;
    _objc_msgSend_calcMaxBufferCount(local_28,local_100);
  }
  _objc_msgSend_setNeedsDisplay(local_28,local_100);
  _objc_msgSend_didMoved(local_28,local_100);
  _objc_storeStrong(&local_40,0);
  return;
}

