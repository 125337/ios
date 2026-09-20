// FUN_010be3a8 @ 010be3a8

/* WARNING: Type propagation algorithm not settling */

void FUN_010be3a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined4 local_d4;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0 [3];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0[1] = 0;
  local_c0[2] = param_1;
  _objc_storeStrong(local_c0 + 1);
  local_c0[0] = 0;
  _objc_storeStrong(local_c0,param_3);
  uVar2 = local_c0[0];
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d0 = param_1;
  local_c8 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_c0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_allValues_0269dae8);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar3 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar4;
          FUN_010b66f4();
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 == 0) {
            local_d4 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_e0);
            local_d4 = 0;
          }
          _objc_storeStrong(&local_128,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_d4 = 0;
  }
  _objc_storeStrong(local_c0);
  _objc_storeStrong(local_c0 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

