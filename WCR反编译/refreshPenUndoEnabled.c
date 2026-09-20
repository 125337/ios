// refreshPenUndoEnabled @ 01651338

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::refreshPenUndoEnabled(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_148;
  ulong local_140;
  ID local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_c0 = IVar1;
  _memset(auStack_108,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_floatingOverlays_026b1e00);
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar1;
  if (IVar1 == 0) {
    local_128 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_140 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar3 = *local_f8;
    local_148 = 0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,local_128);
        }
        uVar4 = *(ulong *)(local_100 + local_148 * 8);
        local_c8 = uVar4;
        FUN_0164f268();
        if ((uVar4 & 1) != 0) {
          local_c0 = local_c0 + 1;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_128);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_penUndoButton_026b2100);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_penUndoButton_026b2100);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar5 = 0x3ff0000000000000;
  if ((IVar2 & 1) == 0) {
    uVar5 = 0x3fd6666666666666;
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_penUndoButton_026b2100);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

