// step: @0x9f828

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

