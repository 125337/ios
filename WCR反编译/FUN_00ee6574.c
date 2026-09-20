// FUN_00ee6574 @ 00ee6574

bool FUN_00ee6574(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  local_c8 = 0;
  _memset(auStack_110,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar7 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar7 != 0) {
          _objc_enumerationMutation(*local_100 - lVar7,uVar2);
        }
        local_d0 = *(long *)(local_108 + local_148 * 8);
        uVar4 = local_b0;
        FUN_00eec2c8(local_b0,&cf_isExisted_,local_d0);
        if ((uVar4 & 1) == 0) {
          lVar5 = local_d0;
          FUN_00ee8104();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar5);
          if (lVar6 != 0) {
            local_c0 = local_c0 + 1;
            uVar4 = local_b0;
            FUN_00eec2c8(local_b0,&cf_isSelected_,local_d0);
            if ((uVar4 & 1) != 0) {
              local_c8 = local_c8 + 1;
            }
          }
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  bVar1 = local_c0 != 0;
  bVar3 = local_c0 <= local_c8;
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return bVar1 && bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

