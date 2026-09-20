// FUN_014f6ea0 @ 014f6ea0

ulong FUN_014f6ea0(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double local_1b0;
  ulong local_180;
  ulong local_178;
  ulong local_138;
  ulong local_130;
  undefined *local_128;
  ulong local_120;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  long local_c8;
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    local_c8 = 0;
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    local_1b0 = param_1;
    if (local_178 != 0) {
      lVar4 = *local_100;
      local_180 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar1);
          }
          lVar5 = *(long *)(local_108 + local_180 * 8);
          local_d0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_integerValue_026ca750);
          if (local_c8 < lVar5) {
            local_c8 = lVar5;
          }
          local_180 = local_180 + 1;
          local_118 = lVar5;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_180 = 0;
        local_1b0 = param_1;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)();
    if (local_c8 < 1) {
      local_b0 = 0;
      local_bc = 1;
    }
    else {
      FUN_014dead4(local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDateComponents_026ce788;
      local_120 = uVar1;
      _objc_alloc_init();
      local_128 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setYear__026a52a0,local_c8 / 10000);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_setMonth__026a52b0,(local_c8 / 100) % 100);
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setDay__026a52b8,local_c8 % 100);
      uVar1 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_dateFromComponents__026a52c8,local_128);
      _objc_retainAutoreleasedReturnValue();
      local_130 = uVar1;
      if (uVar1 == 0) {
        local_b0 = 0;
      }
      else {
        local_138 = 0;
        while (local_130 != 0 && local_138 < 0x1000) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_timeIntervalSince1970_0269cfc8);
          if (local_1b0 <= 0.0) {
            local_1b0 = 0.0;
          }
          uVar3 = (ulong)(uint)(int)local_1b0;
          FUN_014ee1e0();
          uVar1 = local_b8;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((uVar1 & 1) == 0) break;
          local_138 = local_138 + 1;
          uVar3 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_dateByAddingUnit_value_toDate_op_0269cfc0,0x10,
                     0xffffffffffffffff,local_130,0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_130;
          local_130 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        local_b0 = local_138;
      }
      local_bc = 1;
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

