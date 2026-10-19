// pageNumberChanged @0x636dc

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::pageNumberChanged(ID param_1,SEL param_2)

{
  ID IVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_290;
  ulong local_288;
  ulong local_248;
  ulong local_240;
  uint local_1fc;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  byte local_151;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_138 = param_2;
  local_130 = param_1;
  _objc_msgSend_currentData(param_1);
  local_140 = _objc_retainAutoreleasedReturnValue();
  local_148 = 0;
  uVar2 = _objc_opt_respondsToSelector(local_140,"wcm_yb_projectiveView");
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_wcm_yb_projectiveView(local_140,local_1f8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_148;
    local_148 = uVar3;
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _objc_msgSend_setHiddenProjectiveView_(local_130,local_1f8,local_148);
  _objc_msgSend_delegate(local_130,local_1f8);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  local_151 = 0;
  local_1fc = 0;
  if (lVar4 != 0) {
    _objc_msgSend_delegate(local_130,local_1f8);
    local_150 = _objc_retainAutoreleasedReturnValue();
    local_151 = 1;
    local_1fc = _objc_opt_respondsToSelector(local_150,"wcm_yb_imageBrowser:pageChanged:data:");
  }
  if ((local_151 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_150);
  }
  (*(code *)PTR__objc_release_00110458)(lVar4);
  if ((local_1fc & 1) != 0) {
    _objc_msgSend_delegate(local_130,local_1f8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    IVar1 = local_130;
    uVar3 = _objc_msgSend_currentPage(local_130,local_1f8);
    _objc_msgSend_wcm_yb_imageBrowser_pageChanged_data_(uVar5,local_1f8,IVar1,uVar3,local_140);
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _memset(auStack_1a0,0,0x40);
  _objc_msgSend_toolViewHandlers(local_130,local_1f8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,local_1f8,auStack_1a0,auStack_a8,0x10);
  if (local_240 != 0) {
    lVar4 = *local_190;
    local_248 = 0;
    do {
      do {
        if (*local_190 - lVar4 != 0) {
          _objc_enumerationMutation(*local_190 - lVar4,uVar5);
        }
        local_160 = *(undefined8 *)(local_198 + local_248 * 8);
        uVar2 = _objc_opt_respondsToSelector(local_160,"wcm_yb_pageChanged");
        if ((uVar2 & 1) != 0) {
          _objc_msgSend_wcm_yb_pageChanged(local_160,local_1f8);
        }
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar5,local_1f8,auStack_1a0,auStack_a8,0x10);
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_msgSend_collectionView(local_130,local_1f8);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_visibleCells(uVar5,local_1f8);
  local_1a8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _memset(auStack_1f0,0,0x40);
  uVar5 = (*(code *)PTR__objc_retain_00110460)(local_1a8);
  local_288 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,local_1f8,auStack_1f0,auStack_128,0x10);
  if (local_288 != 0) {
    lVar4 = *local_1e0;
    local_290 = 0;
    do {
      do {
        if (*local_1e0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1e0 - lVar4,uVar5);
        }
        local_1b0 = *(undefined8 *)(local_1e8 + local_290 * 8);
        uVar2 = _objc_opt_respondsToSelector(local_1b0,"wcm_yb_pageChanged");
        if ((uVar2 & 1) != 0) {
          _objc_msgSend_wcm_yb_pageChanged(local_1b0,local_1f8);
        }
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar5,local_1f8,auStack_1f0,auStack_128,0x10);
      local_290 = 0;
    } while (local_288 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_storeStrong(&local_1a8);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

