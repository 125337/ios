// FUN_00315510 @ 00315510

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00315510(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint local_1d0;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_178;
  ulong local_140;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_d9 = 0;
  lVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (lVar5 == 0) {
    local_178 = (undefined *)0x0;
  }
  else {
    local_178 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_178;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_178;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  _memset(auStack_128,0,0x40);
  uVar6 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sublayers_026a07b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  local_1a8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_1a8 != 0) {
    lVar5 = *local_118;
    local_1b0 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_120 + local_1b0 * 8);
        local_e8 = uVar6;
        FUN_0032200c();
        if ((uVar6 & 1) != 0) {
          bVar2 = false;
          bVar1 = false;
          local_1d0 = 0;
          if (local_c0 != (undefined *)0x0) {
            local_130 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_c0;
            bVar2 = true;
            local_1d0 = 0;
            if (local_130 != 0) {
              local_140 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_name_0269d828);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
              local_1d0 = (uint)puVar4;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_140);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          if ((local_1d0 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeFromSuperlayer_026ca7f8);
          }
        }
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_1b0 = 0;
    } while (local_1a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

