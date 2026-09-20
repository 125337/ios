// FUN_002836e8 @ 002836e8

byte FUN_002836e8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  ulong local_120;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar3 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar5 = *local_f0;
    local_160 = 0;
    do {
      do {
        if (*local_f0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_f8 + local_160 * 8);
        local_118[0] = 0;
        local_120 = 0;
        local_c0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_valueForKey__0269d128,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_118[0];
        local_118[0] = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar6 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_valueForKey__0269d128,&cf_itemId);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_120;
        local_120 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_118[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_isEqualToString__0269ccc8,&cf_N_);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = local_120,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_120,PTR_s_isEqualToString__0269ccc8,&cf_wcr_finder_download),
           (uVar4 & 1) == 0)) {
          bVar1 = false;
        }
        else {
          local_a9 = 1;
          bVar1 = true;
        }
        _objc_storeStrong(&local_120);
        _objc_storeStrong(local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_00283a74;
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  bVar2 = false;
LAB_00283a74:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

