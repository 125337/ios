// ============ 功能链 39  根: setPreloadAllAnimatedImageFrames: @0x69a44 ============
// 节点 39，按调用深度排序，自上而下读

// ---- [d0] setPreloadAllAnimatedImageFrames: @0x69a44 ----
// CALLERS: (根)
// CALLEES: animatedImageFrameAtIndex:, preloadAllAnimatedImageFrames, animatedImageFrameAtIndex:, animatedImageFrameAtIndex:, frameCount, animatedImageFrameAtIndex:


/* Function Stack Size: 0x14 bytes */



void WCMYBImage::setPreloadAllAnimatedImageFrames_(ID param_1,SEL param_2,bool param_3)



{

  undefined8 uVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 local_50;

  long local_48;

  ulong local_40;

  ulong local_38;

  undefined8 local_30;

  byte local_21;

  SEL local_20;

  ID local_18;

  

  local_21 = (byte)param_3;

  if ((*(byte *)(param_1 + (long)_preloadAllAnimatedImageFrames) & 1) != (local_21 & 1)) {

    local_20 = param_2;

    local_18 = param_1;

    if (((param_3 & 1) == 0) ||

       (lVar2 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder),local_50),

       lVar2 == 0)) {

      _dispatch_semaphore_wait

                (*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock),0xffffffffffffffff);

      _objc_storeStrong(local_18 + (long)_preloadedFrames,0);

      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock));

    }

    else {

      local_30 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);

      local_38 = 0;

      local_40 = _objc_msgSend_frameCount(*(undefined8 *)(local_18 + (long)_decoder),local_50);

      for (; local_38 < local_40; local_38 = local_38 + 1) {

        _objc_msgSend_animatedImageFrameAtIndex_(local_38 - local_40,local_18,local_50,local_38);

        local_48 = _objc_retainAutoreleasedReturnValue();

        uVar1 = local_30;

        if (local_48 == 0) {

          _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_50);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_addObject_(uVar1,local_50);

          (*(code *)PTR__objc_release_00110458)(uVar3);

        }

        else {

          _objc_msgSend_addObject_(local_30,local_50,local_48);

        }

        _objc_storeStrong(&local_48,0);

      }

      _dispatch_semaphore_wait

                (*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock),0xffffffffffffffff);

      _objc_storeStrong(local_18 + (long)_preloadedFrames,local_30);

      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + (long)_preloadedLock));

      _objc_storeStrong(&local_30,0);

    }

  }

  return;

}






// ---- [d1] animatedImageFrameAtIndex: @0x69fe0 ----
// CALLERS: setPreloadAllAnimatedImageFrames:, setPreloadAllAnimatedImageFrames:, main, _objc_msgSend$animatedImageFrameAtIndex:
// CALLEES: image, image, frameAtIndex:decodeForDisplay:, frameCount, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYBImage::animatedImageFrameAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  ID IVar5;

  long local_70;

  undefined8 local_58;

  long local_38;

  unsigned_long_long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  uVar2 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  if (param_3 < uVar2) {

    _dispatch_semaphore_wait

              (*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock),0xffffffffffffffff);

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(local_20 + (long)_preloadedFrames),local_58,local_30);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock));

    lVar1 = local_38;

    if (local_38 == 0) {

      _objc_msgSend_frameAtIndex_decodeForDisplay_

                (*(undefined8 *)(local_20 + (long)_decoder),local_58,local_30,1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_image(uVar4,local_58);

      local_18 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    else {

      _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_58);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 == lVar3) {

        local_70 = 0;

      }

      else {

        local_70 = local_38;

      }

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_70);

      (*(code *)PTR__objc_release_00110458)(lVar3);

    }

    _objc_storeStrong(&local_38,0);

  }

  else {

    local_18 = 0;

  }

  IVar5 = _objc_autoreleaseReturnValue(local_18);

  return IVar5;

}






// ---- [d1] preloadAllAnimatedImageFrames @0x6a264 ----
// CALLERS: setPreloadAllAnimatedImageFrames:, setPreloadAllAnimatedImageFrames:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYBImage::preloadAllAnimatedImageFrames(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_preloadAllAnimatedImageFrames) & 1;

}






// ---- [d1] animatedImageFrameAtIndex: @0x8f1e4 ----
// CALLERS: setPreloadAllAnimatedImageFrames:, setPreloadAllAnimatedImageFrames:, main, _objc_msgSend$animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYYSpriteSheetImage::animatedImageFrameAtIndex_

             (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  return param_1;

}






// ---- [d1] animatedImageFrameAtIndex: @0x90910 ----
// CALLERS: setPreloadAllAnimatedImageFrames:, setPreloadAllAnimatedImageFrames:, main, _objc_msgSend$animatedImageFrameAtIndex:
// CALLEES: image, image, frameAtIndex:decodeForDisplay:, frameCount, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYYImage::animatedImageFrameAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  long lVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  ID IVar5;

  long local_70;

  undefined8 local_58;

  long local_38;

  unsigned_long_long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  uVar2 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  if (param_3 < uVar2) {

    _dispatch_semaphore_wait

              (*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock),0xffffffffffffffff);

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(local_20 + (long)_preloadedFrames),local_58,local_30);

    local_38 = _objc_retainAutoreleasedReturnValue();

    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_20 + (long)_preloadedLock));

    lVar1 = local_38;

    if (local_38 == 0) {

      _objc_msgSend_frameAtIndex_decodeForDisplay_

                (*(undefined8 *)(local_20 + (long)_decoder),local_58,local_30,1);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_image(uVar4,local_58);

      local_18 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    else {

      _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_58);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar1 == lVar3) {

        local_70 = 0;

      }

      else {

        local_70 = local_38;

      }

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_70);

      (*(code *)PTR__objc_release_00110458)(lVar3);

    }

    _objc_storeStrong(&local_38,0);

  }

  else {

    local_18 = 0;

  }

  IVar5 = _objc_autoreleaseReturnValue(local_18);

  return IVar5;

}






// ---- [d1] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d1] animatedImageFrameAtIndex: @0x9c458 ----
// CALLERS: setPreloadAllAnimatedImageFrames:, setPreloadAllAnimatedImageFrames:, main, _objc_msgSend$animatedImageFrameAtIndex:
// CALLEES: scale, imageWithData:scale:, __NSStringPathScale, imagePath, imageData, imageWithData:scale:, scale


/* Function Stack Size: 0x18 bytes */



ID WCMYYFrameImage::animatedImageFrameAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ID IVar4;

  ID local_b8;

  undefined8 local_60;

  undefined8 local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  unsigned_long_long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  if (*(long *)(param_1 + (long)_imagePaths) == 0) {

    if (*(long *)(param_1 + (long)_imageDatas) == 0) {

      local_b8 = param_1;

      if (param_3 != 0) {

        local_b8 = 0;

      }

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_b8);

    }

    else {

      uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_60);

      if (param_3 < uVar1) {

        _objc_msgSend_objectAtIndexedSubscript_

                  (*(undefined8 *)(local_20 + (long)_imageDatas),local_60,local_30);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        local_50 = uVar2;

        _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_60);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_scale(uVar3,local_60);

        _objc_msgSend_imageWithData_scale_(&_OBJC_CLASS___UIImage,local_60,uVar2);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_wcm_yy_imageByDecoded(uVar2,local_60);

        local_18 = _objc_retainAutoreleasedReturnValue();

        (*(code *)PTR__objc_release_00110458)(uVar2);

        (*(code *)PTR__objc_release_00110458)(uVar3);

        _objc_storeStrong(&local_50,0);

      }

      else {

        local_18 = 0;

      }

    }

  }

  else {

    uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_60);

    if (param_3 < uVar1) {

      _objc_msgSend_objectAtIndexedSubscript_

                (*(undefined8 *)(local_20 + (long)_imagePaths),local_60,local_30);

      local_38 = _objc_retainAutoreleasedReturnValue();

      local_40 = __NSStringPathScale(local_38);

      _objc_msgSend_dataWithContentsOfFile_(&_OBJC_CLASS___NSData,local_60,local_38);

      local_48 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_imageWithData_scale_(local_40,&_OBJC_CLASS___UIImage,local_60,local_48);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_wcm_yy_imageByDecoded(uVar2,local_60);

      local_18 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_storeStrong(&local_48);

      _objc_storeStrong(&local_38,0);

    }

    else {

      local_18 = 0;

    }

  }

  IVar4 = _objc_autoreleaseReturnValue(local_18);

  return IVar4;

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






// ---- [d2] frameAtIndex:decodeForDisplay: @0x93b68 ----
// CALLERS: initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, initWithData:scale:, animatedImageFrameAtIndex:, encodeImageWithDecoder:type:quality:, _objc_msgSend$_frameAtIndex:decodeForDisplay:, _objc_msgSend$frameAtIndex:decodeForDisplay:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



ID WCMYYImageDecoder::frameAtIndex_decodeForDisplay_

             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_38;

  byte local_29;

  unsigned_long_long local_28;

  SEL local_20;

  ID local_18;

  

  local_29 = (byte)param_4;

  local_38 = 0;

  local_28 = param_3;

  local_20 = param_2;

  local_18 = param_1;

  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));

  _objc_msgSend__frameAtIndex_decodeForDisplay_(local_18,local_58,local_28,local_29 & 1);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar2 = local_38;

  local_38 = uVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_38);

  _objc_storeStrong(&local_38,0);

  IVar3 = _objc_autoreleaseReturnValue(uVar2);

  return IVar3;

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






// ---- [d2] scale @0x2d0d8 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMHeaderSizeController::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_scale);

}






// ---- [d2] imageWithData:scale: @0x68e88 ----
// CALLERS: animatedImageFrameAtIndex:, _objc_msgSend$imageWithData:scale:, _objc_msgSend$imageWithData:scale:decodeDecision:
// CALLEES: imageWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::imageWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_imageWithData_scale_decodeDecision_(param_4,local_18,local_50,local_28,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] __NSStringPathScale @0x69150 ----
// CALLERS: initWithContentsOfFile:decodeDecision:, ____NSStringPathScale_block_invoke, initWithContentsOfFile:, ____NSStringPathScale_block_invoke, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameAtIndex:, ____NSStringPathScale_block_invoke
// CALLEES: ____NSStringPathScale_block_invoke


undefined1  [16] __NSStringPathScale(undefined8 param_1)



{

  long lVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  undefined8 local_e0;

  undefined *local_d8;

  undefined4 local_d0;

  undefined4 local_cc;

  code *local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  undefined8 *local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 *local_78;

  undefined4 local_70;

  undefined4 local_6c;

  undefined8 local_68;

  undefined8 local_60;

  undefined4 local_54;

  undefined8 local_50;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  undefined8 local_28;

  

  local_50 = 0;

  _objc_storeStrong(&local_50,param_1);

  lVar1 = _objc_msgSend_length(local_50,local_e0);

  if ((lVar1 == 0) || (uVar2 = _objc_msgSend_hasSuffix_(local_50,local_e0,&cf__), (uVar2 & 1) != 0))

  {

    local_48 = 0x3ff0000000000000;

    local_54 = 1;

  }

  else {

    _objc_msgSend_stringByDeletingPathExtension(local_50,local_e0);

    local_60 = _objc_retainAutoreleasedReturnValue();

    local_78 = &local_80;

    local_80 = 0;

    local_70 = 0x20000000;

    local_6c = 0x20;

    local_68 = 0x3ff0000000000000;

    uVar3 = _objc_msgSend_regularExpressionWithPattern_options_error_

                      (&_OBJC_CLASS___NSRegularExpression,local_e0,&cf___0_9______0_9__x_,0x10,0);

    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);

    uVar3 = local_60;

    local_88 = uVar4;

    local_a0 = _objc_msgSend_length(local_60,local_e0);

    local_38 = 0;

    local_30 = 0;

    local_a8 = 0;

    local_d8 = PTR___NSConcreteStackBlock_001104f0;

    local_d0 = 0xc2000000;

    local_cc = 0;

    local_c8 = ____NSStringPathScale_block_invoke;

    local_c0 = &___block_descriptor_48_e8_32s40r_e37_v32__0__NSTextCheckingResult_8Q16_B24l;

    local_b0 = &local_80;

    local_40 = local_a0;

    local_28 = local_a0;

    local_b8 = (*(code *)PTR__objc_retain_00110460)(local_50);

    _objc_msgSend_enumerateMatchesInString_options_range_usingBlock_

              (uVar4,local_e0,uVar3,0,local_a8,local_a0,&local_d8);

    local_48 = local_78[3];

    local_54 = 1;

    _objc_storeStrong(&local_b8);

    _objc_storeStrong(&local_88,0);

    __Block_object_dispose(&local_80,8);

    _objc_storeStrong(&local_60,0);

  }

  _objc_storeStrong(&local_50,0);

  auVar5._8_8_ = 0;

  auVar5._0_8_ = local_48;

  return auVar5;

}






// ---- [d2] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d2] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d2] imageWithData:scale: @0x8fb84 ----
// CALLERS: animatedImageFrameAtIndex:, _objc_msgSend$imageWithData:scale:
// CALLEES: initWithData:scale:, initWithData:scale:


/* Function Stack Size: 0x20 bytes */



ID WCMYYImage::imageWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithData_scale_(param_4,uVar1,local_50,local_28);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d2] scale @0x97710 ----
// CALLERS: webView:startURLSchemeTask:, viewDidLoad, changed, updateGallery, wcm_yb_maximumZoomScaleWithContainerSize:imageSize:orientation:, initWithData:scale:decodeDecision:, encodeWithCoder:, ____NSBundlePreferredScales_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageDecoder::scale(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0xa8);

}






// ---- [d3] imageWithData:scale:decodeDecision: @0x68f0c ----
// CALLERS: imageWithData:scale:, ___31-[WCMYBIBImageData_loadYBImage]_block_invoke, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke_2.69, ___38-[WCMYBIBImageData_loadURL_queryCache]_block_invoke.70, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke_2.79, ___36-[WCMYBIBImageData_loadURL_download]_block_invoke.81, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2, ___31-[WCMYBIBImageData_loadPHAsset]_block_invoke_2.90
// CALLEES: initWithData:scale:decodeDecision:


/* Function Stack Size: 0x28 bytes */



ID WCMYBImage::imageWithData_scale_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)



{

  undefined8 uVar1;

  ID IVar2;

  undefined8 local_60;

  undefined8 local_38;

  double local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3,param_3,param_5,param_6);

  local_38 = 0;

  local_30 = param_4;

  _objc_storeStrong(&local_38,param_5);

  uVar1 = _objc_alloc(local_18);

  uVar1 = _objc_msgSend_initWithData_scale_decodeDecision_

                    (local_30,uVar1,local_60,local_28,local_38);

  _objc_storeStrong(&local_38,0);

  _objc_storeStrong(&local_28,0);

  IVar2 = _objc_autoreleaseReturnValue(uVar1);

  return IVar2;

}






// ---- [d3] ____NSStringPathScale_block_invoke @0x6a448 ----
// CALLERS: __NSStringPathScale, __NSStringPathScale, __NSStringPathScale
// CALLEES: __NSStringPathScale


void ____NSStringPathScale_block_invoke(long param_1)



{

  ulong uVar1;

  long lVar2;

  long extraout_x1;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 local_a0;

  undefined8 local_40;

  long local_38;

  long local_30;

  long local_28;

  long local_20;

  long local_18;

  

  local_40 = 0;

  local_38 = param_1;

  _objc_storeStrong(&local_40);

  uVar1 = _objc_msgSend_range(local_40,local_a0);

  if (2 < uVar1) {

    uVar3 = *(undefined8 *)(param_1 + 0x20);

    lVar2 = _objc_msgSend_range(local_40,local_a0);

    lVar2 = lVar2 + 1;

    _objc_msgSend_range(local_40,local_a0);

    local_30 = extraout_x1 + -2;

    local_28 = lVar2;

    local_20 = lVar2;

    local_18 = local_30;

    _objc_msgSend_substringWithRange_(uVar3,local_a0,lVar2,local_30);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    uVar4 = _objc_msgSend_doubleValue(uVar3,local_a0);

    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

  }

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d3] initWithData:scale: @0x69500 ----
// CALLERS: initWithCoder:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], imageNamed:, imageWithData:scale:, initWithContentsOfFile:, initWithData:, initWithCoder:, _objc_msgSend$initWithData:scale:
// CALLEES: initWithData:scale:decodeDecision:


/* Function Stack Size: 0x20 bytes */



ID WCMYBImage::initWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  ID IVar1;

  undefined8 local_58;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  IVar1 = local_18;

  local_18 = 0;

  local_18 = _objc_msgSend_initWithData_scale_decodeDecision_(param_4,IVar1,local_58,local_28,0);

  IVar1 = (*(code *)PTR__objc_retain_00110460)();

  _objc_storeStrong(&local_28,0);

  _objc_storeStrong(&local_18,0);

  return IVar1;

}






// ---- [d3] initWithData:scale: @0x8ffd0 ----
// CALLERS: initWithCoder:, +[UIImage(WCMYBImageBrowser)_wcm_ybib_imageNamed:bundle:], imageNamed:, imageWithData:scale:, initWithContentsOfFile:, initWithData:, initWithCoder:, _objc_msgSend$initWithData:scale:
// CALLEES: scale, animatedImageType, animatedImageMemorySize, image, type, image, decoderWithData:scale:, frameAtIndex:decodeForDisplay:, type, scale


/* Function Stack Size: 0x20 bytes */



ID WCMYYImage::initWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  ID IVar1;

  long lVar2;

  undefined8 uVar3;

  dispatch_semaphore_t pdVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  ulong uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 local_60;

  long local_58;

  undefined8 local_50;

  undefined8 local_48;

  int local_3c;

  double local_38;

  undefined8 local_30;

  SEL local_28;

  ID local_20;

  ID local_18;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  local_38 = param_4;

  lVar2 = _objc_msgSend_length(local_30,local_60);

  if (lVar2 == 0) {

    local_18 = 0;

    local_3c = 1;

  }

  else {

    if (local_38 <= 0.0) {

      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_60);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      local_38 = (double)_objc_msgSend_scale(uVar3,local_60);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    pdVar4 = _dispatch_semaphore_create(1);

    uVar3 = *(undefined8 *)(local_20 + (long)_preloadedLock);

    *(undefined8 *)(local_20 + (long)_preloadedLock) = pdVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_autoreleasePoolPush();

    _objc_msgSend_decoderWithData_scale_

              (local_38,&objc::class_t::WCMYYImageDecoder,local_60,local_30);

    local_48 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_frameAtIndex_decodeForDisplay_(local_48,local_60,0,1);

    local_50 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_image(local_50,local_60);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    IVar1 = local_20;

    local_58 = lVar2;

    if (lVar2 == 0) {

      local_18 = 0;

      local_3c = 1;

    }

    else {

      _objc_retainAutorelease();

      uVar5 = _objc_msgSend_CGImage(lVar2,local_60);

      uVar9 = _objc_msgSend_scale(local_48,local_60);

      uVar6 = _objc_msgSend_imageOrientation(local_58,local_60);

      local_20 = 0;

      local_20 = _objc_msgSend_initWithCGImage_scale_orientation_(uVar9,IVar1,local_60,uVar5,uVar6);

      _objc_storeStrong(&local_20);

      if (local_20 == 0) {

        local_18 = 0;

        local_3c = 1;

      }

      else {

        uVar5 = _objc_msgSend_type(local_48,local_60);

        *(undefined8 *)(local_20 + (long)_animatedImageType) = uVar5;

        uVar7 = _objc_msgSend_frameCount(local_48,local_60);

        if (1 < uVar7) {

          _objc_storeStrong(local_20 + (long)_decoder,local_48);

          lVar2 = local_58;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_60);

          lVar8 = _CGImageGetBytesPerRow();

          lVar2 = local_58;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_60);

          lVar2 = _CGImageGetHeight();

          *(long *)(local_20 + (long)_bytesPerFrame) = lVar8 * lVar2;

          lVar8 = *(long *)(local_20 + (long)_bytesPerFrame);

          lVar2 = _objc_msgSend_frameCount(local_48,local_60);

          *(long *)(local_20 + (long)_animatedImageMemorySize) = lVar8 * lVar2;

        }

        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_20,local_60,1);

        local_3c = 0;

      }

    }

    _objc_storeStrong(&local_58);

    _objc_storeStrong(&local_50,0);

    _objc_storeStrong(&local_48,0);

    _objc_autoreleasePoolPop(uVar3);

    if (local_3c == 0) {

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_20);

      local_3c = 1;

    }

  }

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_20,0);

  return local_18;

}






// ---- [d4] initWithData:scale:decodeDecision: @0x695a8 ----
// CALLERS: imageNamed:decodeDecision:, imageWithData:scale:decodeDecision:, initWithContentsOfFile:decodeDecision:, initWithData:decodeDecision:, initWithData:scale:, _objc_msgSend$initWithData:scale:decodeDecision:
// CALLEES: _CGSizeMake, scale, animatedImageType, animatedImageMemorySize, image, type, width, height, image, decoderWithData:scale:


/* Function Stack Size: 0x28 bytes */



ID WCMYBImage::initWithData_scale_decodeDecision_

             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5,undefined4 param_6)



{

  ID IVar1;

  long lVar2;

  undefined8 uVar3;

  dispatch_semaphore_t pdVar4;

  ulong uVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  long lVar9;

  undefined8 uVar10;

  double dVar11;

  double local_d0;

  undefined8 local_90;

  long local_88;

  undefined8 local_80;

  undefined8 local_78;

  double local_70;

  byte local_61;

  undefined8 local_60;

  int local_54;

  long local_50;

  double local_48;

  undefined8 local_40;

  SEL local_38;

  ID local_30;

  ID local_28;

  

  local_40 = 0;

  local_38 = param_2;

  local_30 = param_1;

  _objc_storeStrong(&local_40,param_3,param_3,param_5,param_6);

  local_50 = 0;

  local_48 = param_4;

  _objc_storeStrong(&local_50,param_5);

  lVar2 = _objc_msgSend_length(local_40,local_90);

  if (lVar2 == 0) {

    local_28 = 0;

    local_54 = 1;

  }

  else {

    if (local_48 <= 0.0) {

      _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_90);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      local_48 = (double)_objc_msgSend_scale(uVar3,local_90);

      (*(code *)PTR__objc_release_00110458)(uVar3);

    }

    pdVar4 = _dispatch_semaphore_create(1);

    uVar3 = *(undefined8 *)(local_30 + (long)_preloadedLock);

    *(undefined8 *)(local_30 + (long)_preloadedLock) = pdVar4;

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uVar3 = _objc_autoreleasePoolPush();

    _objc_msgSend_decoderWithData_scale_

              (local_48,&objc::class_t::WCMYYImageDecoder,local_90,local_40);

    local_60 = _objc_retainAutoreleasedReturnValue();

    lVar2 = local_50;

    local_61 = 1;

    if (local_50 != 0) {

      uVar5 = _objc_msgSend_width(local_60,local_90);

      uVar6 = _objc_msgSend_height(local_60,local_90);

      dVar11 = (double)uVar6;

      local_78 = _CGSizeMake((double)uVar5);

      local_70 = dVar11;

      local_d0 = (double)_objc_msgSend_scale(local_60,local_90);

      if (local_d0 == 0.0) {

        local_d0 = 1.0;

      }

      local_61 = (**(code **)(lVar2 + 0x10))(local_78,local_70,local_d0);

    }

    _objc_msgSend_frameAtIndex_decodeForDisplay_(local_60,local_90,0,local_61 & 1);

    local_80 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_image(local_80,local_90);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    IVar1 = local_30;

    local_88 = lVar2;

    if (lVar2 == 0) {

      local_28 = 0;

      local_54 = 1;

    }

    else {

      _objc_retainAutorelease();

      uVar7 = _objc_msgSend_CGImage(lVar2,local_90);

      uVar10 = _objc_msgSend_scale(local_60,local_90);

      uVar8 = _objc_msgSend_imageOrientation(local_88,local_90);

      local_30 = 0;

      local_30 = _objc_msgSend_initWithCGImage_scale_orientation_(uVar10,IVar1,local_90,uVar7,uVar8)

      ;

      _objc_storeStrong(&local_30);

      if (local_30 == 0) {

        local_28 = 0;

        local_54 = 1;

      }

      else {

        uVar7 = _objc_msgSend_type(local_60,local_90);

        *(undefined8 *)(local_30 + (long)_animatedImageType) = uVar7;

        uVar5 = _objc_msgSend_frameCount(local_60,local_90);

        if (1 < uVar5) {

          _objc_storeStrong(local_30 + (long)_decoder,local_60);

          lVar2 = local_88;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_90);

          lVar9 = _CGImageGetBytesPerRow();

          lVar2 = local_88;

          _objc_retainAutorelease();

          _objc_msgSend_CGImage(lVar2,local_90);

          lVar2 = _CGImageGetHeight();

          *(long *)(local_30 + (long)_bytesPerFrame) = lVar9 * lVar2;

          lVar9 = *(long *)(local_30 + (long)_bytesPerFrame);

          lVar2 = _objc_msgSend_frameCount(local_60,local_90);

          *(long *)(local_30 + (long)_animatedImageMemorySize) = lVar9 * lVar2;

        }

        _objc_msgSend_setWcm_yy_isDecodedForDisplay_(local_30,local_90,1);

        local_54 = 0;

      }

    }

    _objc_storeStrong(&local_88);

    _objc_storeStrong(&local_80,0);

    _objc_storeStrong(&local_60,0);

    _objc_autoreleasePoolPop(uVar3);

    if (local_54 == 0) {

      local_28 = (*(code *)PTR__objc_retain_00110460)(local_30);

      local_54 = 1;

    }

  }

  _objc_storeStrong(&local_50);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_30,0);

  return local_28;

}






// ---- [d4] animatedImageType @0x6a21c ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, -[UIImage(WCMYYImageCoder)__wcm_yy_dataRepresentationForSystem:], _objc_msgSend$animatedImageType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageType(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageType);

}






// ---- [d4] animatedImageMemorySize @0x6a240 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageMemorySize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_animatedImageMemorySize);

}






// ---- [d4] type @0x82db4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBCopywriter::type(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d4] decoderWithData:scale: @0x937e8 ----
// CALLERS: initWithData:scale:decodeDecision:, initWithData:scale:, _objc_msgSend$decoderWithData:scale:
// CALLEES: initWithScale:, updateData:final:, frameCount


/* Function Stack Size: 0x20 bytes */



ID WCMYYImageDecoder::decoderWithData_scale_(ID param_1,SEL param_2,ID param_3,double param_4)



{

  undefined8 uVar1;

  long lVar2;

  ID IVar3;

  undefined8 local_58;

  undefined8 local_48;

  undefined4 local_3c;

  double local_38;

  long local_30;

  SEL local_28;

  ID local_20;

  undefined8 local_18;

  

  local_30 = 0;

  local_28 = param_2;

  local_20 = param_1;

  _objc_storeStrong(&local_30,param_3);

  local_38 = param_4;

  if (local_30 == 0) {

    local_18 = 0;

    local_3c = 1;

  }

  else {

    uVar1 = _objc_alloc(&objc::class_t::WCMYYImageDecoder);

    local_48 = _objc_msgSend_initWithScale_(local_38,uVar1,local_58);

    _objc_msgSend_updateData_final_(local_48,local_58,local_30,1);

    lVar2 = _objc_msgSend_frameCount(local_48,local_58);

    if (lVar2 == 0) {

      local_18 = 0;

    }

    else {

      local_18 = (*(code *)PTR__objc_retain_00110460)(local_48);

    }

    local_3c = 1;

    _objc_storeStrong(&local_48,0);

  }

  _objc_storeStrong(&local_30,0);

  IVar3 = _objc_autoreleaseReturnValue(local_18);

  return IVar3;

}






// ---- [d4] type @0x976f4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xa0);

}






// ---- [d4] type @0x9a1f8 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}






// ---- [d5] _CGSizeMake @0x7b08 ----
// CALLERS: layoutIndicatorContent, tableView:cellForRowAtIndexPath:, tableView:cellForRowAtIndexPath:, layoutSubviews, viewDidLoad, webView:didFinishNavigation:, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, ___39-[WCMFeedController_galleryPlaceholder]_block_invoke
// CALLEES: (叶)


undefined1  [16] _CGSizeMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d5] width @0x932d0 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x10);

}






// ---- [d5] height @0x93310 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageFrame::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x18);

}






// ---- [d5] width @0x97764 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$width
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::width(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xc0);

}






// ---- [d5] height @0x97780 ----
// CALLERS: initWithData:scale:decodeDecision:, _frameAtIndex:decodeForDisplay:, _updateSourceAPNG, _newUnblendedImageAtIndex:extendToCanvas:decoded:, _blendImageWithFrame:, _newBlendedImageWithFrame:, _objc_msgSend$height
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::height(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 200);

}






// ---- [d5] initWithScale: @0x93984 ----
// CALLERS: decoderWithData:scale:, init, _objc_msgSend$initWithScale:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



ID WCMYYImageDecoder::initWithScale_(ID param_1,SEL param_2,double param_3)



{

  dispatch_semaphore_t pdVar1;

  undefined8 uVar2;

  ID IVar3;

  ID local_50;

  class_t *local_48;

  double local_40;

  SEL local_38;

  long local_30;

  pthread_mutexattr_t pStack_28;

  long local_18;

  

  local_18 = *(long *)PTR____stack_chk_guard_00110518;

  local_30 = 0;

  local_48 = &objc::class_t::WCMYYImageDecoder;

  local_50 = param_1;

  local_40 = param_3;

  local_38 = param_2;

  local_30 = _objc_msgSendSuper2(&local_50,"init");

  _objc_storeStrong(&local_30);

  if (local_40 <= 0.0) {

    local_40 = 1.0;

  }

  *(double *)(local_30 + 0xa8) = local_40;

  pdVar1 = _dispatch_semaphore_create(1);

  uVar2 = *(undefined8 *)(local_30 + 0x68);

  *(dispatch_semaphore_t *)(local_30 + 0x68) = pdVar1;

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _pthread_mutexattr_init(&pStack_28);

  _pthread_mutexattr_settype(&pStack_28,2);

  _pthread_mutex_init((pthread_mutex_t *)(local_30 + 8),&pStack_28);

  _pthread_mutexattr_destroy(&pStack_28);

  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _objc_storeStrong(&local_30,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);

  }

  return IVar3;

}






// ---- [d5] updateData:final: @0x93ac8 ----
// CALLERS: decoderWithData:scale:, _objc_msgSend$_updateData:final:, _objc_msgSend$updateData:final:
// CALLEES: (叶)


/* Function Stack Size: 0x1c bytes */



bool WCMYYImageDecoder::updateData_final_(ID param_1,SEL param_2,ID param_3,bool param_4)



{

  byte bVar1;

  undefined8 local_48;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _pthread_mutex_lock((pthread_mutex_t *)(local_18 + 8));

  bVar1 = _objc_msgSend__updateData_final_(local_18,local_48,local_28,param_4 & 1);

  _pthread_mutex_unlock((pthread_mutex_t *)(local_18 + 8));

  _objc_storeStrong(&local_28,0);

  return bVar1 & 1;

}





