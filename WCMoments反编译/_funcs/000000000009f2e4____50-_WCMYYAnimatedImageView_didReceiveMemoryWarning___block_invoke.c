// ___50-[WCMYYAnimatedImageView_didReceiveMemoryWarning:]_block_invoke @0x9f2e4

void ___50__WCMYYAnimatedImageView_didReceiveMemoryWarning___block_invoke(long param_1)

{
  ulong uVar1;
  u_int32_t uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_148;
  ulong local_140;
  undefined8 local_130;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_1;
  local_b0 = param_1;
  uVar2 = _arc4random();
  *(long *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_incrBufferCount) =
       (long)(int)(-0x3c - uVar2 % 0x78);
  uVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_curIndex) + 1;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_totalFrameCount);
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar4 / uVar6;
  }
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_130,uVar4 - uVar1 * uVar6);
  local_c0 = _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_wait
            (*(dispatch_semaphore_t *)
              (*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_lock),0xffffffffffffffff);
  _objc_msgSend_allKeys
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_buffer),
             local_130);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  _memset(auStack_110,0,0x40);
  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_c8);
  local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_130,auStack_110,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar5 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,uVar3);
        }
        local_d0 = *(undefined8 *)(local_108 + local_148 * 8);
        uVar4 = _objc_msgSend_isEqualToNumber_(local_d0,local_130,local_c0);
        if ((uVar4 & 1) == 0) {
          _objc_msgSend_removeObjectForKey_
                    (*(undefined8 *)
                      (*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_buffer),local_130,
                     local_d0);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_130,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)
              (*(long *)(param_1 + 0x20) + (long)WCMYYAnimatedImageView::_lock));
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

