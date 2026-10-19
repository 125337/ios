// ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke @0xa0598

void ___55__WCMYYAnimatedImageView_setCurrentAnimatedImageIndex___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  
  _dispatch_semaphore_wait
            (*(dispatch_semaphore_t *)
              (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_lock),0xffffffffffffffff);
  _objc_msgSend_cancelAllOperations
            (*(undefined8 *)
              (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_requestQueue),local_50);
  _objc_msgSend_removeAllObjects
            (*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_buffer),
             local_50);
  _objc_msgSend_willChangeValueForKey_(*(undefined8 *)(param_5 + 0x20),local_50);
  *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curIndex) =
       *(undefined8 *)(param_5 + 0x28);
  _objc_msgSend_didChangeValueForKey_
            (*(undefined8 *)(param_5 + 0x20),local_50,&cf_currentAnimatedImageIndex);
  _objc_msgSend_animatedImageFrameAtIndex_
            (*(undefined8 *)
              (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curAnimatedImage),local_50
             ,*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curIndex));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curFrame);
  uVar3 = *puVar1;
  *puVar1 = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((*(byte *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curImageHasContentsRect)
      & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curContentsRect);
    uVar2 = _objc_msgSend_animatedImageContentsRectAtIndex_
                      (*(undefined8 *)
                        (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curAnimatedImage
                        ),local_50,
                       *(undefined8 *)
                        (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_curIndex));
    puVar1[1] = param_2;
    *puVar1 = uVar2;
    puVar1[3] = param_4;
    puVar1[2] = param_3;
  }
  *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_time) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_loopEnd) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_bufferMiss) = 0;
  _objc_msgSend_layer(*(undefined8 *)(param_5 + 0x20),local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNeedsDisplay(uVar2,local_50);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)
              (*(long *)(param_5 + 0x20) + (long)WCMYYAnimatedImageView::_lock));
  return;
}

