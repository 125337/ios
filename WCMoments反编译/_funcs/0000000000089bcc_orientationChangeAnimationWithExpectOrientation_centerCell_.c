// orientationChangeAnimationWithExpectOrientation:centerCell: @0x89bcc

/* Function Stack Size: 0x20 bytes */

void WCMYBIBScreenRotationHandler::orientationChangeAnimationWithExpectOrientation_centerCell_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_148;
  ulong local_140;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined8 local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c8,param_4);
  uVar1 = _objc_opt_respondsToSelector
                    (local_c8,"wcm_yb_orientationChangeAnimationWithExpectOrientation:");
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_wcm_yb_orientationChangeAnimationWithExpectOrientation_
              (local_c8,local_118,local_c0);
    _objc_msgSend_layoutIfNeeded(local_c8,local_118);
  }
  _memset(auStack_110,0,0x40);
  uVar2 = _objc_loadWeakRetained(local_b0 + 8);
  _objc_msgSend_toolViewHandlers(uVar2,local_118);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_118,auStack_110,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar3);
        }
        local_d0 = *(undefined8 *)(local_108 + local_148 * 8);
        uVar1 = _objc_opt_respondsToSelector
                          (local_d0,"wcm_yb_orientationChangeAnimationWithExpectOrientation:");
        if ((uVar1 & 1) != 0) {
          _objc_msgSend_wcm_yb_orientationChangeAnimationWithExpectOrientation_
                    (local_d0,local_118,local_c0);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_118,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

