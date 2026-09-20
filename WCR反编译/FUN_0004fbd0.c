// FUN_0004fbd0 @ 0004fbd0

ulong FUN_0004fbd0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_170;
  ulong local_168;
  ulong local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
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
      lVar3 = *local_100;
      local_170 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar1);
          }
          local_d0 = *(undefined8 *)(local_108 + local_170 * 8);
          uVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_128[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
          uVar4 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) {
LAB_0004fe04:
            local_c4 = 0;
          }
          else {
            uVar2 = local_128[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_unsignedLongLongValue_0269d6b8)
            ;
            if (uVar2 == 0) {
              uVar4 = 0;
              goto LAB_0004fe04;
            }
            uVar4 = 1;
            local_c4 = 1;
            local_b0 = uVar2;
          }
          _objc_storeStrong(uVar4,local_128,0);
          if (local_c4 != 0) goto LAB_0004fe9c;
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
LAB_0004fe9c:
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

