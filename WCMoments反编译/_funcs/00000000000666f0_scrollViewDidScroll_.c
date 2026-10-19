// scrollViewDidScroll: @0x666f0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::scrollViewDidScroll_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double in_d2;
  ulong local_1a0;
  ulong local_198;
  undefined8 local_180;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  double local_d8;
  double local_c8;
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
  dVar7 = (double)_objc_msgSend_contentOffset(local_c0,local_180);
  local_d8 = dVar7;
  local_f8 = _objc_msgSend_bounds(local_c0,local_180);
  local_c8 = dVar7 / in_d2;
  local_100 = (long)(local_c8 + 0.5);
  _memset(auStack_148,0,0x40);
  _objc_msgSend_toolViewHandlers(local_b0,local_180);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_198 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_180,auStack_148,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar6 = *local_138;
    local_1a0 = 0;
    do {
      do {
        if (*local_138 - lVar6 != 0) {
          _objc_enumerationMutation(*local_138 - lVar6,uVar3);
        }
        local_108 = *(undefined8 *)(local_140 + local_1a0 * 8);
        uVar4 = _objc_opt_respondsToSelector(local_108,"wcm_yb_offsetXChanged:");
        if ((uVar4 & 1) != 0) {
          _objc_msgSend_wcm_yb_offsetXChanged_(local_c8,local_108,local_180);
        }
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_180,auStack_148,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar4 = _objc_msgSend_isDecelerating(local_c0,local_180);
  if (((uVar4 & 1) != 0) || (uVar4 = _objc_msgSend_isDragging(local_c0,local_180), (uVar4 & 1) != 0)
     ) {
    lVar6 = local_100;
    bVar1 = true;
    if (-1 < local_100) {
      _objc_msgSend_dataMediator(local_b0,local_180);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      lVar5 = _objc_msgSend_numberOfCells(uVar3,local_180);
      bVar1 = lVar5 + -1 < lVar6;
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    if (!bVar1) {
      _objc_msgSend_rotationHandler(local_b0,local_180);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar2 = _objc_msgSend_isRotating(uVar3,local_180);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (((uVar2 & 1) == 0) && (local_100 != *(long *)(local_b0 + (long)_currentPage))) {
        *(long *)(local_b0 + (long)_currentPage) = local_100;
        _objc_msgSend_pageNumberChanged(local_b0,local_180);
      }
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

