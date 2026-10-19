// didEnterBackground: @0x9f594

/* Function Stack Size: 0x18 bytes */

void WCMYYAnimatedImageView::didEnterBackground_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_b0 + (long)_requestQueue),local_138);
  uVar3 = *(long *)(local_b0 + (long)_curIndex) + 1;
  uVar5 = *(ulong *)(local_b0 + (long)_totalFrameCount);
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = uVar3 / uVar5;
  }
  _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_138,uVar3 - uVar1 * uVar5);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_b0 + (long)_lock),0xffffffffffffffff);
  _objc_msgSend_allKeys(*(undefined8 *)(local_b0 + (long)_buffer),local_138);
  local_d0 = _objc_retainAutoreleasedReturnValue();
  _memset(auStack_118,0,0x40);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_d0);
  local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_138,auStack_118,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_108;
    local_148 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_148 * 8);
        uVar3 = _objc_msgSend_isEqualToNumber_(local_d8,local_138,local_c8);
        if ((uVar3 & 1) == 0) {
          _objc_msgSend_removeObjectForKey_
                    (*(undefined8 *)(local_b0 + (long)_buffer),local_138,local_d8);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_138,auStack_118,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_b0 + (long)_lock));
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

