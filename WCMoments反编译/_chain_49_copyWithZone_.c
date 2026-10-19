// ============ 功能链 49  根: copyWithZone: @0x93158 ============
// 节点 67，按调用深度排序，自上而下读

// ---- [d0] copyWithZone: @0x93158 ----
// CALLERS: (根)
// CALLEES: setIndex:, setImage:, setIndex:, setWidth:, setHeight:, setOffsetX:, setOffsetY:, setDuration:, setDispose:, setBlend:


/* Function Stack Size: 0x18 bytes */



ID WCMYYImageFrame::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_50;

  undefined8 local_30;

  _NSZone *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _objc_opt_class(param_1);

  local_30 = _objc_opt_new();

  _objc_msgSend_setIndex_(local_30,local_50,*(undefined8 *)(local_18 + 8));

  _objc_msgSend_setWidth_(local_30,local_50,*(undefined8 *)(local_18 + 0x10));

  _objc_msgSend_setHeight_(local_30,local_50,*(undefined8 *)(local_18 + 0x18));

  _objc_msgSend_setOffsetX_(local_30,local_50,*(undefined8 *)(local_18 + 0x20));

  _objc_msgSend_setOffsetY_(local_30,local_50,*(undefined8 *)(local_18 + 0x28));

  _objc_msgSend_setDuration_(*(undefined8 *)(local_18 + 0x30),local_30,local_50);

  _objc_msgSend_setDispose_(local_30,local_50,*(undefined8 *)(local_18 + 0x38));

  _objc_msgSend_setBlend_(local_30,local_50,*(undefined8 *)(local_18 + 0x40));

  uVar1 = _objc_msgSend_copy(*(undefined8 *)(local_18 + 0x48),local_50);

  _objc_msgSend_setImage_(local_30,local_50);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  IVar2 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _objc_storeStrong(&local_30,0);

  return IVar2;

}






// ---- [d1] setIndex: @0x2b218 ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMVideoController::setIndex_(ID param_1,SEL param_2,long_long param_3)



{

  *(long_long *)(param_1 + (long)_index) = param_3;

  return;

}






// ---- [d1] setImage: @0x7cf24 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setImage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x78);

  return;

}






// ---- [d1] setIndex: @0x932ac ----
// CALLERS: settleVideo, openVideo:, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 8) = param_3;

  return;

}






// ---- [d1] setWidth: @0x932ec ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setWidth:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setWidth_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x10) = param_3;

  return;

}






// ---- [d1] setHeight: @0x9332c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setHeight:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setHeight_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x18) = param_3;

  return;

}






// ---- [d1] setOffsetX: @0x9336c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setOffsetX:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setOffsetX_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x20) = param_3;

  return;

}






// ---- [d1] setOffsetY: @0x933ac ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setOffsetY:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setOffsetY_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x28) = param_3;

  return;

}






// ---- [d1] setDuration: @0x933ec ----
// CALLERS: showLoading, startAnimation, startImageViewAnimation, copyWithZone:, _updateSourceAPNG, _updateSourceImageIO, _objc_msgSend$setDuration:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setDuration_(ID param_1,SEL param_2,double param_3)



{

  *(double *)(param_1 + 0x30) = param_3;

  return;

}






// ---- [d1] setDispose: @0x9342c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setDispose:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setDispose_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x38) = param_3;

  return;

}






// ---- [d1] setBlend: @0x9346c ----
// CALLERS: copyWithZone:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _objc_msgSend$setBlend:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setBlend_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + 0x40) = param_3;

  return;

}






// ---- [d1] setImage: @0x934ac ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x48,param_3);

  return;

}






// ---- [d1] setImage: @0x9e194 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: image, image, setImage:withType:, image, image, image, image


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_image(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d1] setImage: @0xab96c ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d1] setImage: @0xac990 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOActivityCroppedImageProvider::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d1] setImage: @0xadc14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerTransitioning::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x10,param_3);

  return;

}






// ---- [d1] setImage: @0xbb800 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d2] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d2] setImage:withType: @0x9e720 ----
// CALLERS: setImage:, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, initWithCoder:, _objc_msgSend$setImage:withType:
// CALLEES: setImage:, resetAnimated, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, imageChanged, stopAnimating


/* Function Stack Size: 0x20 bytes */



void WCMYYAnimatedImageView::setImage_withType_

               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)



{

  undefined8 local_78;

  ID local_70;

  class_t *local_68;

  ID local_60;

  class_t *local_58;

  ID local_50;

  class_t *local_48;

  ID local_40;

  class_t *local_38;

  unsigned_long_long local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = param_4;

  _objc_msgSend_stopAnimating(local_18,local_78);

  if (*(long *)(local_18 + (long)_link) != 0) {

    _objc_msgSend_resetAnimated(local_18,local_78);

  }

  _objc_storeStrong(local_18 + (long)_curFrame,0);

  if (local_30 != 0) {

    if (local_30 == 1) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"setImage:",local_28);

    }

    else if (local_30 == 2) {

      local_50 = local_18;

      local_48 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_50,"setHighlightedImage:",local_28);

    }

    else if (local_30 == 3) {

      local_60 = local_18;

      local_58 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_60,"setAnimationImages:",local_28);

    }

    else if (local_30 == 4) {

      local_70 = local_18;

      local_68 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_70,"setHighlightedAnimationImages:",local_28);

    }

  }

  _objc_msgSend_imageChanged(local_18,local_78);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d2] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d2] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d2] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d2] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] resetAnimated @0x9db04 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke.71, setHighlighted:, setImage:withType:, imageChanged, _objc_msgSend$resetAnimated
// CALLEES: currentAnimatedImageIndex


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::resetAnimated(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_a8;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined *local_58;

  undefined4 local_50;

  undefined4 local_4c;

  code *local_48;

  undefined *local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long *local_18;

  

  lVar3 = (long)_onceToken;

  local_58 = PTR___NSConcreteStackBlock_001104f0;

  local_50 = 0xc2000000;

  local_4c = 0;

  local_48 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke;

  local_40 = &___block_descriptor_40_e8_32s_e5_v8__0l;

  local_30 = param_2;

  local_28 = param_1;

  local_38 = (*(code *)PTR__objc_retain_00110460)(param_1);

  local_18 = (long *)(param_1 + lVar3);

  local_20 = 0;

  _objc_storeStrong(&local_20,&local_58);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_28 + (long)_requestQueue),local_a8);

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_28 + (long)_lock),0xffffffffffffffff);

  lVar3 = _objc_msgSend_count(*(undefined8 *)(local_28 + (long)_buffer),local_a8);

  if (lVar3 != 0) {

    local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(local_28 + (long)_buffer));

    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

    uVar2 = *(undefined8 *)(local_28 + (long)_buffer);

    *(undefined8 *)(local_28 + (long)_buffer) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _dispatch_get_global_queue(-2,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke_71;

    local_70 = &___block_descriptor_40_e8_32s_e5_v8__0l;

    local_68 = (*(code *)PTR__objc_retain_00110460)(local_60);

    _dispatch_async(uVar1,&local_88);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_68);

    _objc_storeStrong(&local_60,0);

  }

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_28 + (long)_lock));

  _objc_msgSend_setPaused_(*(undefined8 *)(local_28 + (long)_link),local_a8,1);

  *(undefined8 *)(local_28 + (long)_time) = 0;

  if (*(long *)(local_28 + (long)_curIndex) != 0) {

    _objc_msgSend_willChangeValueForKey_(local_28,local_a8);

    *(undefined8 *)(local_28 + (long)_curIndex) = 0;

    _objc_msgSend_didChangeValueForKey_(local_28,local_a8,&cf_currentAnimatedImageIndex);

  }

  _objc_storeStrong(local_28 + (long)_curAnimatedImage);

  _objc_storeStrong(local_28 + (long)_curFrame,0);

  *(undefined8 *)(local_28 + (long)_curLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalFrameCount) = 1;

  *(undefined1 *)(local_28 + (long)_loopEnd) = 0;

  *(undefined1 *)(local_28 + (long)_bufferMiss) = 0;

  *(undefined8 *)(local_28 + (long)_incrBufferCount) = 0;

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d3] setHighlightedImage: @0x9e23c ----
// CALLERS: initWithImage:highlightedImage:, setImage:withType:, initWithCoder:, _objc_msgSend$setHighlightedImage:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedImage(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,2);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d3] setAnimationImages: @0x9e2e4 ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_animationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,3);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d3] setHighlightedAnimationImages: @0x9e38c ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedAnimationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,4);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d3] imageChanged @0x9e8c8 ----
// CALLERS: setHighlighted:, setImage:withType:, _objc_msgSend$imageChanged
// CALLEES: _CGRectMake, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount, animatedImageContentsRectAtIndex:, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount


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






// ---- [d3] stopAnimating @0x9eff0 ----
// CALLERS: setImage:withType:, step:, didMoved, _objc_msgSend$stopAnimating
// CALLEES: setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::stopAnimating(ID param_1,SEL param_2)



{

  undefined8 local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMYYAnimatedImageView;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"stopAnimating");

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_38);

  _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_38,1);

  _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_38,0);

  return;

}






// ---- [d4] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d4] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d4] animatedImageFrameCount @0x69f4c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d4] animatedImageLoopCount @0x69f84 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d4] animatedImageFrameCount @0x8f170 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: contentRects


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  return uVar1;

}






// ---- [d4] animatedImageLoopCount @0x8f1a8 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d4] animatedImageContentsRectAtIndex: @0x8f2ac ----
// CALLERS: contentsRectForCALayerAtIndex:, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, _objc_msgSend$animatedImageContentsRectAtIndex:
// CALLEES: contentRects


/* Function Stack Size: 0x18 bytes */



CGRect WCMYYSpriteSheetImage::animatedImageContentsRectAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  CGRect CVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_60;

  undefined8 local_30;

  undefined8 uStack_28;

  undefined8 local_20;

  double dStack_18;

  

  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  if (param_3 < uVar2) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(param_1 + (long)_contentRects),local_60,param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_CGRectValue(uVar3,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uStack_28 = in_d1;

    local_20 = in_d2;

    dStack_18 = in_d3;

  }

  else {

    uStack_28 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;

    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_20 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  }

  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;

  CVar1.field0_0x0.field0_0x0 = (double)local_30;

  CVar1.field1_0x10.field0_0x0 = (double)local_20;

  CVar1.field1_0x10.field1_0x8 = dStack_18;

  return CVar1;

}






// ---- [d4] animatedImageFrameCount @0x9087c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d4] animatedImageLoopCount @0x908b4 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d4] animatedImageFrameCount @0x9c370 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: imagePath, imageData


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  undefined8 local_30;

  undefined8 local_18;

  

  if (*(long *)(param_1 + (long)_imagePaths) == 0) {

    if (*(long *)(param_1 + (long)_imageDatas) == 0) {

      local_18 = 1;

    }

    else {

      local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_30);

    }

  }

  else {

    local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_30);

  }

  return local_18;

}






// ---- [d4] animatedImageLoopCount @0x9c410 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d4] conformsToProtocol: @0x9ce14 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, imageChanged, encodeWithCoder:, _objc_msgSend$conformsToProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::conformsToProtocol_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_conformsToProtocol_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d4] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d4] imageForType: @0x9e4b8 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$imageForType:
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYYAnimatedImageView::imageForType_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ID IVar1;

  undefined8 local_40;

  undefined8 local_18;

  

  if (param_3 == 0) {

    local_18 = 0;

  }

  else if (param_3 == 1) {

    _objc_msgSend_image(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 2) {

    _objc_msgSend_highlightedImage(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 3) {

    _objc_msgSend_animationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 4) {

    _objc_msgSend_highlightedAnimationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_18 = 0;

  }

  IVar1 = _objc_autoreleaseReturnValue(local_18);

  return IVar1;

}






// ---- [d4] currentImageType @0x9e5b0 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$currentImageType
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentImageType(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_40;

  undefined8 local_28;

  

  local_28 = 0;

  uVar1 = _objc_msgSend_isHighlighted(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_highlightedAnimationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_highlightedImage(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 2;

      }

    }

    else {

      local_28 = 4;

    }

  }

  if (local_28 == 0) {

    _objc_msgSend_animationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_image(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 1;

      }

    }

    else {

      local_28 = 3;

    }

  }

  return local_28;

}






// ---- [d4] calcMaxBufferCount @0x9ecb0 ----
// CALLERS: main, imageChanged, _objc_msgSend$calcMaxBufferCount
// CALLEES: animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, maxBufferSize, __YYDeviceMemoryTotal, __YYDeviceMemoryFree


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::calcMaxBufferCount(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  ulong local_90;

  ulong local_88;

  double local_80;

  double local_78;

  ulong local_40;

  long local_28;

  

  local_28 = _objc_msgSend_animatedImageBytesPerFrame

                       (*(undefined8 *)(param_1 + (long)_curAnimatedImage));

  if (local_28 == 0) {

    local_28 = 0x400;

  }

  lVar1 = __YYDeviceMemoryTotal();

  lVar2 = __YYDeviceMemoryFree();

  local_80 = (double)lVar2 * 0.6;

  if ((double)lVar1 * 0.2 < local_80) {

    local_80 = (double)lVar1 * 0.2;

  }

  local_88 = (ulong)local_80;

  if ((long)local_88 < 0xa00000) {

    local_88 = 0xa00000;

  }

  local_40 = local_88;

  if (*(long *)(param_1 + (long)_maxBufferSize) != 0) {

    if (*(ulong *)(param_1 + (long)_maxBufferSize) < local_88) {

      local_90 = *(ulong *)(param_1 + (long)_maxBufferSize);

    }

    else {

      local_90 = local_88;

    }

    local_40 = local_90;

  }

  local_78 = (double)(long)local_40 / (double)local_28;

  if (1.0 <= local_78) {

    if (512.0 < local_78) {

      local_78 = 512.0;

    }

  }

  else {

    local_78 = 1.0;

  }

  *(long *)(param_1 + (long)_maxBufferCount) = (long)local_78;

  return;

}






// ---- [d4] setContentsRect:forImage: @0x9ffd8 ----
// CALLERS: imageChanged, step:, _objc_msgSend$setContentsRect:forImage:
// CALLEES: _CGRectMake, size


/* Function Stack Size: 0x38 bytes */



void WCMYYAnimatedImageView::setContentsRect_forImage_

               (ID param_1,SEL param_2,CGRect param_3,ID param_4)



{

  ulong uVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  undefined8 local_140;

  undefined8 local_80;

  double dStack_78;

  double local_70;

  double dStack_68;

  long local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_3.field1_0x10.field1_0x8;

  local_30 = param_3.field1_0x10.field0_0x0;

  local_38 = param_3.field0_0x0.field1_0x8;

  local_40 = param_3.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  _objc_storeStrong(&local_58,param_4);

  dStack_78 = 0.0;

  dStack_68 = 1.0;

  local_70 = 1.0;

  local_80 = _CGRectMake(0);

  if (((local_58 != 0) &&

      (dVar5 = dStack_78, dVar3 = (double)_objc_msgSend_size(local_58,local_140), 0.01 < dVar3)) &&

     (0.01 < dVar5)) {

    dVar4 = local_40 / dVar3;

    dStack_78 = local_38 / dVar5;

    local_70 = local_30 / dVar3;

    dStack_68 = local_28 / dVar5;

    _CGRectMake(0);

    local_80 = _CGRectIntersection(dVar4);

    uVar1 = _CGRectIsNull(local_80,dStack_78,local_70,dStack_68);

    if (((uVar1 & 1) != 0) ||

       (uVar1 = _CGRectIsEmpty(local_80,dStack_78,local_70,dStack_68), (uVar1 & 1) != 0)) {

      dStack_78 = 0.0;

      dStack_68 = 1.0;

      local_70 = 1.0;

      local_80 = _CGRectMake(0);

    }

  }

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_140);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_140,1);

  _objc_msgSend_layer(local_48,local_140);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentsRect_(local_80,dStack_78,local_70,dStack_68,uVar2,local_140);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_140);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d4] didMoved @0xa026c ----
// CALLERS: imageChanged, didMoveToWindow, didMoveToSuperview, _objc_msgSend$didMoved
// CALLEES: stopAnimating, startAnimating, autoPlayAnimatedImage


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::didMoved(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  undefined8 local_40;

  

  uVar2 = _objc_msgSend_autoPlayAnimatedImage(param_1);

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_superview(param_1,local_40);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = false;

    if (lVar3 != 0) {

      _objc_msgSend_window(param_1,local_40);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar4 != 0;

      (*(code *)PTR__objc_release_00110458)(lVar4);

    }

    (*(code *)PTR__objc_release_00110458)(lVar3);

    if (bVar1) {

      _objc_msgSend_startAnimating(param_1,local_40);

    }

    else {

      _objc_msgSend_stopAnimating(param_1,local_40);

    }

  }

  return;

}






// ---- [d4] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d5] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d5] loopCount @0x8f3c8 ----
// CALLERS: animatedImageLoopCount, initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageLoopCount, animatedImageLoopCount, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d5] loopCount @0x97748 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb8);

}






// ---- [d5] loopCount @0x9a214 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d5] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d5] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d5] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d5] animatedImageBytesPerFrame @0x69fbc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d5] animatedImageBytesPerFrame @0x8f1cc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d5] animatedImageBytesPerFrame @0x908ec ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d5] animatedImageBytesPerFrame @0x9c434 ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_oneFrameBytes);

}






// ---- [d5] maxBufferSize @0xa10b4 ----
// CALLERS: calcMaxBufferCount, setMaxBufferSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::maxBufferSize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_maxBufferSize);

}






// ---- [d5] __YYDeviceMemoryTotal @0xa11d4 ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryTotal(void)



{

  undefined8 uVar1;

  undefined8 local_30;

  long local_18;

  

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_18 = _objc_msgSend_physicalMemory(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (local_18 < -1) {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d5] __YYDeviceMemoryFree @0xa124c ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryFree(void)



{

  kern_return_t kVar1;

  uint local_64 [15];

  vm_size_t local_28;

  mach_msg_type_number_t local_20;

  host_t local_1c;

  long local_18;

  

  local_1c = _mach_host_self();

  local_20 = 0xf;

  kVar1 = _host_page_size(local_1c,&local_28);

  if (kVar1 == 0) {

    kVar1 = _host_statistics(local_1c,2,(host_info_t)local_64,&local_20);

    if (kVar1 == 0) {

      local_18 = local_64[0] * local_28;

    }

    else {

      local_18 = -1;

    }

  }

  else {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d5] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d5] startAnimating @0x9f080 ----
// CALLERS: didMoved, _objc_msgSend$startAnimating
// CALLEES: imageForType:, currentImageType, setCurrentIsPlayingAnimation:


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






// ---- [d5] autoPlayAnimatedImage @0xa0fd8 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, didMoved, initWithCoder:, encodeWithCoder:, setAutoPlayAnimatedImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;

}






// ---- [d5] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}





