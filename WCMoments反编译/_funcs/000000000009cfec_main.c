// main @0x9cfec

/* Function Stack Size: 0x10 bytes */

void _YYAnimatedImageViewFetchOperation::main(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_b8;
  ulong local_88;
  undefined8 local_80;
  long local_70;
  long local_68;
  byte local_59;
  long local_58;
  int local_4c;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  int local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_28 = _objc_loadWeakRetained(param_1 + (long)_view);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar2 = _objc_msgSend_isCancelled(local_18,local_80);
    if ((uVar2 & 1) == 0) {
      *(long *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount) =
           *(long *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount) + 1;
      if (*(long *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount) == 0) {
        _objc_msgSend_calcMaxBufferCount(local_28,local_80);
      }
      if (*(long *)(local_28 + WCMYYAnimatedImageView::_maxBufferCount) <
          *(long *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount)) {
        *(undefined8 *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount) =
             *(undefined8 *)(local_28 + WCMYYAnimatedImageView::_maxBufferCount);
      }
      local_38 = *(ulong *)(local_18 + (long)_nextIndex);
      if (*(long *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount) < 1) {
        local_88 = 1;
      }
      else {
        local_88 = *(ulong *)(local_28 + WCMYYAnimatedImageView::_incrBufferCount);
      }
      local_40 = local_88;
      local_48 = *(ulong *)(local_28 + WCMYYAnimatedImageView::_totalFrameCount);
      _objc_storeStrong(&local_28,0);
      for (local_4c = 0; (ulong)(long)local_4c < local_40; local_4c = local_4c + 1) {
        uVar3 = _objc_autoreleasePoolPush((long)local_4c - local_40);
        lVar5 = local_38 - local_48;
        if (local_48 <= local_38) {
          local_38 = 0;
        }
        uVar2 = _objc_msgSend_isCancelled(lVar5,local_18,local_80);
        if ((uVar2 & 1) == 0) {
          local_58 = _objc_loadWeakRetained(local_18 + (long)_view);
          if (local_58 == 0) {
            local_2c = 2;
          }
          else {
            _dispatch_semaphore_wait
                      (*(dispatch_semaphore_t *)(local_58 + WCMYYAnimatedImageView::_lock),
                       0xffffffffffffffff);
            uVar7 = *(undefined8 *)(local_58 + WCMYYAnimatedImageView::_buffer);
            _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_80,local_38);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_objectForKeyedSubscript_(uVar7,local_80);
            lVar5 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)();
            (*(code *)PTR__objc_release_00110458)(uVar4);
            local_59 = lVar5 == 0;
            _dispatch_semaphore_signal
                      (*(dispatch_semaphore_t *)(local_58 + WCMYYAnimatedImageView::_lock));
            if ((local_59 & 1) != 0) {
              _objc_msgSend_animatedImageFrameAtIndex_
                        (*(undefined8 *)(local_18 + (long)_curImage),local_80,local_38);
              local_68 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_wcm_yy_imageByDecoded(local_68,local_80);
              lVar6 = _objc_retainAutoreleasedReturnValue();
              lVar5 = local_68;
              local_68 = lVar6;
              (*(code *)PTR__objc_release_00110458)(lVar5);
              uVar2 = _objc_msgSend_isCancelled(local_18,local_80);
              if ((uVar2 & 1) == 0) {
                _dispatch_semaphore_wait
                          (*(dispatch_semaphore_t *)(local_58 + WCMYYAnimatedImageView::_lock),
                           0xffffffffffffffff);
                bVar1 = local_68 == 0;
                if (bVar1) {
                  _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_80);
                  local_b8 = _objc_retainAutoreleasedReturnValue();
                  local_70 = local_b8;
                }
                else {
                  local_b8 = local_68;
                }
                uVar7 = *(undefined8 *)(local_58 + WCMYYAnimatedImageView::_buffer);
                _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_80,local_38);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_setObject_forKeyedSubscript_(uVar7,local_80,local_b8);
                (*(code *)PTR__objc_release_00110458)(uVar4);
                if (bVar1) {
                  (*(code *)PTR__objc_release_00110458)(local_70);
                }
                _dispatch_semaphore_signal
                          (*(dispatch_semaphore_t *)(local_58 + WCMYYAnimatedImageView::_lock));
                _objc_storeStrong(&local_58,0);
                local_2c = 0;
              }
              else {
                local_2c = 2;
              }
              _objc_storeStrong(&local_68,0);
              if (local_2c != 0) goto LAB_0009d464;
            }
            local_2c = 0;
          }
LAB_0009d464:
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_2c = 2;
        }
        _objc_autoreleasePoolPop(uVar3);
        if (local_2c != 0) break;
        local_38 = local_38 + 1;
      }
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

