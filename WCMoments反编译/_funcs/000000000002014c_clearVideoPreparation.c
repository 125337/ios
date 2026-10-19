// clearVideoPreparation @0x2014c

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::clearVideoPreparation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_138;
  ulong local_130;
  undefined8 local_118;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  _objc_msgSend_preparingAssets(local_b0,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_allValues(uVar1,local_118);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_130 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_118,auStack_100,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar3 = *local_f0;
    local_138 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_138 * 8);
        _objc_msgSend_cancelLoading(local_c0,local_118);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_118,auStack_100,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_preparingAssets(local_b0,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllObjects(uVar1,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_preparedItems(local_b0,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllObjects(uVar1,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_probeTimes(local_b0,local_118);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAllObjects(uVar1,local_118);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

