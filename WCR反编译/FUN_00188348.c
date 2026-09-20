// FUN_00188348 @ 00188348

void FUN_00188348(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined4 local_198;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_1;
  local_130 = param_1;
  _memset(auStack_188,0,0x40);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_220 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_220 != 0) {
    lVar4 = *local_178;
    local_228 = 0;
    do {
      do {
        if (*local_178 - lVar4 != 0) {
          _objc_enumerationMutation(*local_178 - lVar4,uVar2);
        }
        uVar1 = *(ulong *)(local_180 + local_228 * 8);
        puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        local_148 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) != 0) {
          _objc_storeStrong(&local_140,local_148);
          local_198 = 2;
          goto LAB_001885e0;
        }
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_228 = 0;
    } while (local_220 != 0);
  }
  local_198 = 0;
LAB_001885e0:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_140;
  puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_140;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar1;
    _memset(auStack_1e8,0,0x40);
    uVar2 = local_1a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_2a0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a0 != 0) {
      lVar4 = *local_1d8;
      local_2a8 = 0;
      do {
        do {
          if (*local_1d8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar4,uVar2);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + local_2a8 * 8);
          FUN_0018888c(local_1a8);
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_2a8 = 0;
      } while (local_2a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_1a0,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

