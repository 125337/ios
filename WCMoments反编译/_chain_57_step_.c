// ============ 功能链 57  根: step: @0x9f828 ============
// 节点 22，按调用深度排序，自上而下读

// ---- [d0] step: @0x9f828 ----
// CALLERS: (根)
// CALLEES: animatedImageDurationAtIndex:, animatedImageDurationAtIndex:, animatedImageContentsRectAtIndex:, animatedImageDurationAtIndex:, duration, animatedImageDurationAtIndex:, setView:, setNextIndex:, curImage, setCurImage:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::step_(ID param_1,SEL param_2,ID param_3)



{

  ulong uVar1;

  undefined8 *puVar2;

  ulong uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  ulong uVar8;

  double dVar9;

  double in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  long local_e8;

  undefined8 local_98;

  undefined8 local_90;

  undefined8 local_88;

  double dStack_80;

  double local_68;

  undefined4 local_60;

  byte local_59;

  long local_58;

  long local_50;

  undefined8 local_48;

  long local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_38 = 0;

  local_30 = param_2;

  local_28 = param_1;

  _objc_storeStrong(&local_38,param_3);

  local_40 = (*(code *)PTR__objc_retain_00110460)

                       (*(undefined8 *)(local_28 + (long)_curAnimatedImage));

  local_48 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(local_28 + (long)_buffer));

  local_50 = 0;

  uVar1 = *(long *)(local_28 + (long)_curIndex) + 1;

  uVar8 = *(ulong *)(local_28 + (long)_totalFrameCount);

  uVar3 = 0;

  if (uVar8 != 0) {

    uVar3 = uVar1 / uVar8;

  }

  local_58 = uVar1 - uVar3 * uVar8;

  local_59 = 0;

  if (local_40 == 0) {

    local_60 = 1;

  }

  else if ((*(byte *)(local_28 + (long)_loopEnd) & 1) == 0) {

    local_68 = 0.0;

    if ((*(byte *)(local_28 + (long)_bufferMiss) & 1) == 0) {

      dVar9 = (double)_objc_msgSend_duration(local_38,local_98);

      *(double *)(local_28 + (long)_time) = *(double *)(local_28 + (long)_time) + dVar9;

      local_68 = (double)_objc_msgSend_animatedImageDurationAtIndex_

                                   (local_40,local_98,*(undefined8 *)(local_28 + (long)_curIndex));

      if (*(double *)(local_28 + (long)_time) < local_68) {

        local_60 = 1;

        goto LAB_0009ff10;

      }

      *(double *)(local_28 + (long)_time) = *(double *)(local_28 + (long)_time) - local_68;

      lVar7 = local_58;

      if (local_58 == 0) {

        *(long *)(local_28 + (long)_curLoop) = *(long *)(local_28 + (long)_curLoop) + 1;

        lVar7 = *(ulong *)(local_28 + (long)_curLoop) - *(ulong *)(local_28 + (long)_totalLoop);

        if ((*(ulong *)(local_28 + (long)_totalLoop) <= *(ulong *)(local_28 + (long)_curLoop)) &&

           (lVar7 = 0, *(long *)(local_28 + (long)_totalLoop) != 0)) {

          *(undefined1 *)(local_28 + (long)_loopEnd) = 1;

          _objc_msgSend_stopAnimating(local_28,local_98);

          _objc_msgSend_layer(local_28,local_98);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          _objc_msgSend_setNeedsDisplay(uVar4,local_98);

          (*(code *)PTR__objc_release_00110458)(uVar4);

          local_60 = 1;

          goto LAB_0009ff10;

        }

      }

      in_d1 = (double)_objc_msgSend_animatedImageDurationAtIndex_(lVar7,local_40,local_98,local_58);

      local_68 = in_d1;

      if (in_d1 < *(double *)(local_28 + (long)_time)) {

        *(double *)(local_28 + (long)_time) = in_d1;

      }

    }

    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_28 + (long)_lock),0xffffffffffffffff);

    uVar4 = local_48;

    _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_98,local_58);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKeyedSubscript_(uVar4,local_98);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    lVar7 = local_50;

    local_50 = lVar6;

    (*(code *)PTR__objc_release_00110458)(lVar7);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    uVar4 = local_48;

    if (local_50 == 0) {

      *(undefined1 *)(local_28 + (long)_bufferMiss) = 1;

    }

    else {

      if ((ulong)(long)(int)*(undefined8 *)(local_28 + (long)_incrBufferCount) <

          *(ulong *)(local_28 + (long)_totalFrameCount)) {

        _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_98,local_58);

        uVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_msgSend_removeObjectForKey_(uVar4,local_98);

        (*(code *)PTR__objc_release_00110458)(uVar5);

      }

      _objc_msgSend_willChangeValueForKey_(local_28,local_98);

      *(long *)(local_28 + (long)_curIndex) = local_58;

      _objc_msgSend_didChangeValueForKey_(local_28,local_98,&cf_currentAnimatedImageIndex);

      lVar7 = local_50;

      _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_98);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      if (lVar7 == lVar6) {

        local_e8 = 0;

      }

      else {

        local_e8 = local_50;

      }

      _objc_storeStrong(local_28 + (long)_curFrame,local_e8);

      (*(code *)PTR__objc_release_00110458)(lVar6);

      if ((*(byte *)(local_28 + (long)_curImageHasContentsRect) & 1) != 0) {

        puVar2 = (undefined8 *)(local_28 + (long)_curContentsRect);

        local_88 = _objc_msgSend_animatedImageContentsRectAtIndex_

                             (local_40,local_98,*(undefined8 *)(local_28 + (long)_curIndex));

        puVar2[1] = in_d1;

        *puVar2 = local_88;

        puVar2[3] = in_d3;

        puVar2[2] = in_d2;

        puVar2 = (undefined8 *)(local_28 + (long)_curContentsRect);

        dStack_80 = in_d1;

        _objc_msgSend_setContentsRect_forImage_

                  (*puVar2,puVar2[1],puVar2[2],puVar2[3],local_28,local_98,

                   *(undefined8 *)(local_28 + (long)_curFrame));

      }

      uVar1 = *(long *)(local_28 + (long)_curIndex) + 1;

      uVar8 = *(ulong *)(local_28 + (long)_totalFrameCount);

      uVar3 = 0;

      if (uVar8 != 0) {

        uVar3 = uVar1 / uVar8;

      }

      local_58 = uVar1 - uVar3 * uVar8;

      *(undefined1 *)(local_28 + (long)_bufferMiss) = 0;

      lVar7 = _objc_msgSend_count(local_48,local_98);

      if (lVar7 == *(long *)(local_28 + (long)_totalFrameCount)) {

        local_59 = 1;

      }

    }

    _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_28 + (long)_lock));

    if ((*(byte *)(local_28 + (long)_bufferMiss) & 1) == 0) {

      _objc_msgSend_layer(local_28,local_98);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setNeedsDisplay(uVar4,local_98);

      (*(code *)PTR__objc_release_00110458)(uVar4);

    }

    if (((local_59 & 1) == 0) &&

       (lVar7 = _objc_msgSend_operationCount

                          (*(undefined8 *)(local_28 + (long)_requestQueue),local_98), lVar7 == 0)) {

      local_90 = _objc_opt_new(&objc::class_t::_YYAnimatedImageViewFetchOperation);

      _objc_msgSend_setView_(local_90,local_98,local_28);

      _objc_msgSend_setNextIndex_(local_90,local_98,local_58);

      _objc_msgSend_setCurImage_(local_90,local_98,local_40);

      _objc_msgSend_addOperation_(*(undefined8 *)(local_28 + (long)_requestQueue),local_98,local_90)

      ;

      _objc_storeStrong(&local_90,0);

    }

    local_60 = 0;

  }

  else {

    _objc_msgSend_stopAnimating(local_28,local_98);

    local_60 = 1;

  }

LAB_0009ff10:

  _objc_storeStrong(&local_50);

  _objc_storeStrong(&local_48,0);

  _objc_storeStrong(&local_40,0);

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d1] animatedImageDurationAtIndex: @0x6a19c ----
// CALLERS: step:, _objc_msgSend$animatedImageDurationAtIndex:
// CALLEES: frameDurationAtIndex:


/* Function Stack Size: 0x18 bytes */



double WCMYBImage::animatedImageDurationAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  double local_18;

  

  local_18 = (double)_objc_msgSend_frameDurationAtIndex_

                               (*(undefined8 *)(param_1 + (long)_decoder),param_2,param_3);

  if (local_18 < 0.010999999940395355) {

    local_18 = 0.10000000149011612;

  }

  return local_18;

}






// ---- [d1] animatedImageDurationAtIndex: @0x8f200 ----
// CALLERS: step:, _objc_msgSend$animatedImageDurationAtIndex:
// CALLEES: frameDurations


/* Function Stack Size: 0x18 bytes */



double WCMYYSpriteSheetImage::animatedImageDurationAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 local_48;

  undefined8 local_18;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_frameDurations));

  if (param_3 < uVar1) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(param_1 + (long)_frameDurations),local_48,param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_18 = (double)_objc_msgSend_doubleValue(uVar2,local_48);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  else {

    local_18 = 0.0;

  }

  return local_18;

}






// ---- [d1] animatedImageContentsRectAtIndex: @0x8f2ac ----
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






// ---- [d1] animatedImageDurationAtIndex: @0x90acc ----
// CALLERS: step:, _objc_msgSend$animatedImageDurationAtIndex:
// CALLEES: frameDurationAtIndex:


/* Function Stack Size: 0x18 bytes */



double WCMYYImage::animatedImageDurationAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  double local_18;

  

  local_18 = (double)_objc_msgSend_frameDurationAtIndex_

                               (*(undefined8 *)(param_1 + (long)_decoder),param_2,param_3);

  if (local_18 < 0.010999999940395355) {

    local_18 = 0.10000000149011612;

  }

  return local_18;

}






// ---- [d1] duration @0x933d0 ----
// CALLERS: ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2, endSeeking, frameDurationAtIndex:, addImage:duration:, addImageWithData:duration:, addImageWithFile:duration:, encodeImage:type:quality:, encodeImageWithDecoder:type:quality:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYYImageFrame::duration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x30);

}






// ---- [d1] animatedImageDurationAtIndex: @0x9c6f8 ----
// CALLERS: step:, _objc_msgSend$animatedImageDurationAtIndex:
// CALLEES: frameDurations


/* Function Stack Size: 0x18 bytes */



double WCMYYFrameImage::animatedImageDurationAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ulong uVar1;

  undefined8 local_50;

  undefined8 local_38;

  unsigned_long_long local_30;

  SEL local_28;

  ID local_20;

  double local_18;

  

  local_30 = param_3;

  local_28 = param_2;

  local_20 = param_1;

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_frameDurations));

  if (param_3 < uVar1) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(local_20 + (long)_frameDurations),local_50,local_30);

    local_38 = _objc_retainAutoreleasedReturnValue();

    local_18 = (double)_objc_msgSend_doubleValue(local_38,local_50);

    _objc_storeStrong(&local_38,0);

  }

  else {

    local_18 = 0.0;

  }

  return local_18;

}






// ---- [d1] setView: @0x9d500 ----
// CALLERS: step:, _objc_msgSend$setView:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void _YYAnimatedImageViewFetchOperation::setView_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeWeak(param_1 + (long)_view,param_3);

  return;

}






// ---- [d1] setNextIndex: @0x9d560 ----
// CALLERS: step:, _objc_msgSend$setNextIndex:
// CALLEES: nextIndex


/* Function Stack Size: 0x18 bytes */



void _YYAnimatedImageViewFetchOperation::setNextIndex_

               (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  *(unsigned_long_long *)(param_1 + (long)_nextIndex) = param_3;

  return;

}






// ---- [d1] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d1] setCurImage: @0x9d5b0 ----
// CALLERS: step:, _objc_msgSend$setCurImage:
// CALLEES: curImage


/* Function Stack Size: 0x18 bytes */



void _YYAnimatedImageViewFetchOperation::setCurImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_curImage,param_3);

  return;

}






// ---- [d1] stopAnimating @0x9eff0 ----
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






// ---- [d1] setContentsRect:forImage: @0x9ffd8 ----
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






// ---- [d1] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d2] frameDurationAtIndex: @0x93c1c ----
// CALLERS: animatedImageDurationAtIndex:, animatedImageDurationAtIndex:, encodeImageWithDecoder:type:quality:, _objc_msgSend$frameDurationAtIndex:
// CALLEES: duration


/* Function Stack Size: 0x18 bytes */



double WCMYYImageDecoder::frameDurationAtIndex_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 local_40;

  undefined8 local_30;

  

  local_30 = 0.0;

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x68),0xffffffffffffffff);

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + 0x70),local_40);

  if (param_3 < uVar1) {

    _objc_msgSend_objectAtIndexedSubscript_(*(undefined8 *)(param_1 + 0x70),local_40,param_3);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    local_30 = (double)_objc_msgSend_duration(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

  }

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x68));

  return local_30;

}






// ---- [d2] frameDurations @0x8f3a4 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageDurationAtIndex:, .cxx_destruct, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:, animatedImageDurationAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::frameDurations(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_frameDurations);

}






// ---- [d2] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d2] nextIndex @0x9d53c ----
// CALLERS: main, setNextIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long _YYAnimatedImageViewFetchOperation::nextIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_nextIndex);

}






// ---- [d2] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d2] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d2] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d3] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}





