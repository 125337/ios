// FUN_00827160 @ 00827160

void FUN_00827160(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_248;
  ulong local_240;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
  }
  else {
    _memset(auStack_180,0,0x40);
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f8 != 0) {
      lVar3 = *local_170;
      local_200 = 0;
      do {
        do {
          if (*local_170 - lVar3 != 0) {
            _objc_enumerationMutation(*local_170 - lVar3,uVar1);
          }
          local_140 = *(undefined8 *)(local_178 + local_200 * 8);
          FUN_00830c88(local_140);
          local_200 = local_200 + 1;
        } while (local_200 < local_1f8);
        local_1f8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10
                  );
        local_200 = 0;
      } while (local_1f8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_1d8,0,0x40);
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_240 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar3 = *local_1c8;
      local_248 = 0;
      do {
        do {
          if (*local_1c8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_1d0 + local_248 * 8);
          puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
          local_198 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) != 0) {
            FUN_00830c88(local_198);
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,
                   0x10);
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_134 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

