// setGridHidden:animated: @0xbdc44

/* Function Stack Size: 0x18 bytes */

void WCMTOCropOverlayView::setGridHidden_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  ulong local_270;
  ulong local_268;
  ulong local_230;
  ulong local_228;
  undefined8 local_220;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  byte local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  undefined1 local_13a;
  byte local_139;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_139 = (byte)param_3;
  local_13a = (undefined1)param_4;
  *(byte *)(param_1 + (long)_gridHidden) = local_139 & 1;
  local_138 = param_2;
  local_130 = param_1;
  if ((param_4 & 1) == 0) {
    _memset(auStack_188,0,0x40);
    _objc_msgSend_horizontalGridLines(local_130,local_220);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar1,local_220,auStack_188,auStack_a8,0x10);
    if (local_228 != 0) {
      lVar2 = *local_178;
      local_230 = 0;
      do {
        do {
          if (*local_178 - lVar2 != 0) {
            _objc_enumerationMutation(*local_178 - lVar2,uVar1);
          }
          local_148 = *(undefined8 *)(local_180 + local_230 * 8);
          fVar3 = 0.0;
          if ((local_139 & 1) == 0) {
            fVar3 = 1.0;
          }
          _objc_msgSend_setAlpha_(local_139 & 1,(double)fVar3,local_148,local_220);
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar1,local_220,auStack_188,auStack_a8,0x10);
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _memset(auStack_1d0,0,0x40);
    _objc_msgSend_verticalGridLines(local_130,local_220);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_268 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar1,local_220,auStack_1d0,auStack_128,0x10);
    if (local_268 != 0) {
      lVar2 = *local_1c0;
      local_270 = 0;
      do {
        do {
          if (*local_1c0 - lVar2 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar2,uVar1);
          }
          local_190 = *(undefined8 *)(local_1c8 + local_270 * 8);
          fVar3 = 0.0;
          if ((local_139 & 1) == 0) {
            fVar3 = 1.0;
          }
          _objc_msgSend_setAlpha_(local_139 & 1,(double)fVar3,local_190,local_220);
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar1,local_220,auStack_1d0,auStack_128,0x10);
        local_270 = 0;
      } while (local_268 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    fVar3 = 0.35;
    if ((param_3 & 1) == 0) {
      fVar3 = 0.2;
    }
    local_200 = PTR___NSConcreteStackBlock_001104f0;
    local_1f8 = 0xc2000000;
    local_1f4 = 0;
    local_1f0 = ___47__WCMTOCropOverlayView_setGridHidden_animated___block_invoke;
    local_1e8 = &___block_descriptor_41_e8_32s_e5_v8__0l;
    local_1e0 = (*(code *)PTR__objc_retain_00110460)(param_1);
    local_1d8 = local_139 & 1;
    _objc_msgSend_animateWithDuration_animations_
              ((double)fVar3,&_OBJC_CLASS___UIView,local_220,&local_200);
    _objc_storeStrong(&local_1e0,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

