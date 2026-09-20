// FUN_016afc90 @ 016afc90

void FUN_016afc90(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  long local_128 [3];
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
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_100;
      local_168 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar1);
          }
          local_d0 = *(undefined8 *)(local_108 + local_168 * 8);
          lVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          FUN_016b03b4();
          _objc_retainAutoreleasedReturnValue();
          local_128[0] = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar3);
          lVar4 = local_128[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_length_0269cca0);
          lVar3 = local_128[0];
          bVar2 = lVar4 != 0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = lVar3;
          }
          local_c4 = (uint)bVar2;
          _objc_storeStrong(bVar2,local_128,0);
          if (local_c4 != 0) goto LAB_016aff84;
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_c4 = 0;
LAB_016aff84:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

