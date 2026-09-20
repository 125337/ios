// resetPoints @ 01d512c8

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::resetPoints(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  ulong local_248;
  ulong local_240;
  ulong local_1f0;
  ulong local_1e8;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _memset(auStack_180,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pointViews_026c4800);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1e8 != 0) {
    lVar2 = *local_170;
    local_1f0 = 0;
    do {
      do {
        if (*local_170 - lVar2 != 0) {
          _objc_enumerationMutation(*local_170 - lVar2,IVar1);
        }
        local_140 = *(undefined8 *)(local_178 + local_1f0 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_removeFromSuperview_026ca800);
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pointViews_026c4800);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _memset(auStack_1c8,0,0x40);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pointViews2_026c4818);
  _objc_retainAutoreleasedReturnValue();
  local_240 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_240 != 0) {
    lVar2 = *local_1b8;
    local_248 = 0;
    do {
      do {
        if (*local_1b8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar2,IVar1);
        }
        local_188 = *(undefined8 *)(local_1c0 + local_248 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_removeFromSuperview_026ca800);
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_128,0x10)
      ;
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pointViews2_026c4818);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_points2_026c4690);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setIsAligned__026c4828,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_setSelectedPointIndex__026c4808,0xffffffffffffffff);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_updatePointCount_026c47c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_updateAlignStatus_026c4830);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_redrawCanvas_026c47d8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

