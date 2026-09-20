// FUN_00eafa58 @ 00eafa58

long FUN_00eafa58(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  uint local_c4;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_100;
      local_170 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar1);
          }
          local_d0 = *(undefined8 *)(local_108 + local_170 * 8);
          lVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar3;
          FUN_00eb1660();
          bVar2 = lVar3 != 0;
          if (bVar2) {
            local_b0 = lVar3;
          }
          local_c4 = (uint)bVar2;
          _objc_storeStrong(bVar2,&local_118,0);
          if (local_c4 != 0) goto LAB_00eafc98;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_c4 = 0;
LAB_00eafc98:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

