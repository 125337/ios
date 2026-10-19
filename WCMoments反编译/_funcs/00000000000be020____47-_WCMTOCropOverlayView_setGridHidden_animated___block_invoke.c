// ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke @0xbe020

void ___47__WCMTOCropOverlayView_setGridHidden_animated___block_invoke(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  ulong local_240;
  ulong local_238;
  ulong local_200;
  ulong local_1f8;
  undefined8 local_1e8;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_138 = param_1;
  local_130 = param_1;
  _memset(auStack_180,0,0x40);
  _objc_msgSend_horizontalGridLines(*(undefined8 *)(param_1 + 0x20),local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_1f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar1,local_1e8,auStack_180,auStack_a8,0x10);
  if (local_1f8 != 0) {
    lVar2 = *local_170;
    local_200 = 0;
    do {
      do {
        if (*local_170 - lVar2 != 0) {
          _objc_enumerationMutation(*local_170 - lVar2,uVar1);
        }
        local_140 = *(undefined8 *)(local_178 + local_200 * 8);
        fVar3 = 0.0;
        if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
          fVar3 = 1.0;
        }
        _objc_msgSend_setAlpha_(*(byte *)(param_1 + 0x28) & 1,(double)fVar3,local_140,local_1e8);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar1,local_1e8,auStack_180,auStack_a8,0x10);
      local_200 = 0;
    } while (local_1f8 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _memset(auStack_1c8,0,0x40);
  _objc_msgSend_verticalGridLines(*(undefined8 *)(param_1 + 0x20),local_1e8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_238 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar1,local_1e8,auStack_1c8,auStack_128,0x10);
  if (local_238 != 0) {
    lVar2 = *local_1b8;
    local_240 = 0;
    do {
      do {
        if (*local_1b8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar2,uVar1);
        }
        local_188 = *(undefined8 *)(local_1c0 + local_240 * 8);
        fVar3 = 0.0;
        if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
          fVar3 = 1.0;
        }
        _objc_msgSend_setAlpha_(*(byte *)(param_1 + 0x28) & 1,(double)fVar3,local_188,local_1e8);
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar1,local_1e8,auStack_1c8,auStack_128,0x10);
      local_240 = 0;
    } while (local_238 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

