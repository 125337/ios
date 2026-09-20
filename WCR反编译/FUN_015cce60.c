// FUN_015cce60 @ 015cce60

void FUN_015cce60(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_158;
  ulong local_150;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  uint local_c8;
  byte local_c1;
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
  lVar4 = local_b8;
  local_c1 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if ((lVar4 == 0) ||
     (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else if (((local_c1 & 1) == 0) || (uVar2 = local_c0, FUN_015cc93c(), (uVar2 & 1) == 0)) {
    lVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098,local_c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_c8 = 1;
    local_b0 = lVar4;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    FUN_015d41ec();
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar4 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_158 * 8);
          lVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_objectForKeyedSubscript__0269d098,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          lVar1 = local_118;
          if (lVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = lVar1;
          }
          local_c8 = (uint)(lVar3 != 0);
          _objc_storeStrong(&local_118,0);
          if (local_c8 != 0) goto LAB_015cd0d4;
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c8 = 0;
LAB_015cd0d4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c8 == 0) {
      local_b0 = 0;
      local_c8 = 1;
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

