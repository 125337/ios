// FUN_00350eb4 @ 00350eb4

void FUN_00350eb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1e0;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  byte local_139;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  int local_ec;
  undefined *local_e8;
  int local_dc;
  undefined *local_d8;
  long local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = param_1;
  if ((local_b8 == 0) ||
     (lVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     lVar3 == 0)) {
    local_c4 = 1;
  }
  else {
    lVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_c4 = 1;
    }
    else {
      local_dc = 1;
      local_ec = 7;
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1c0 = puVar1;
      if ((long)local_ec < (long)puVar1) {
        local_1c0 = (undefined *)(long)local_ec;
      }
      local_100 = local_1c0;
      local_e8 = local_1c0;
      if ((long)local_dc < (long)local_1c0) {
        local_1c8 = local_1c0;
      }
      else {
        local_1c8 = (undefined *)(long)local_dc;
      }
      local_108 = local_1c8;
      local_d8 = local_1c8;
      local_118 = local_1c8;
      local_120 = (undefined *)((3 - *(long *)(param_1 + 0x30)) * (long)local_1c8);
      local_1d0 = local_120;
      if ((long)local_120 <= (long)local_1c8) {
        local_1d0 = local_1c8;
      }
      local_128 = local_1d0;
      local_110 = local_1d0;
      puVar2 = *(undefined **)(param_1 + 0x20);
      local_f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mutableCopy_0269d8a0);
      local_139 = 0;
      local_1e0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1e0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_138 = local_1e0;
      }
      local_139 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_1e0;
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_indexOfObject__0269e870,*(undefined8 *)(param_1 + 0x28));
      local_148 = puVar2;
      if (puVar2 == (undefined *)0x7fffffffffffffff) {
        puVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_containsObject__0269cbb8,local_d0);
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = local_130,
           (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0),
           (long)puVar2 < (long)local_110)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_d0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_setObject_atIndexedSubscript__0269e970,local_d0,puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar1;
      _memset(auStack_1a0,0,0x40);
      puVar2 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      if (local_208 != (undefined *)0x0) {
        lVar3 = *local_190;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_190 - lVar3 != 0) {
              _objc_enumerationMutation(*local_190 - lVar3,puVar2);
            }
            uVar4 = *(ulong *)(local_198 + (long)local_210 * 8);
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_160 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((((uVar4 & 1) != 0) &&
                (uVar4 = local_160,
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0), uVar4 != 0))
               && (puVar1 = local_158,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_containsObject__0269cbb8,local_160),
                  ((ulong)puVar1 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_160);
              puVar1 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
              if ((long)local_110 <= (long)puVar1) {
                local_c4 = 2;
                goto LAB_003514d0;
              }
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      local_c4 = 0;
LAB_003514d0:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_0034945c();
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_130,0);
      local_c4 = 0;
    }
    _objc_storeStrong(&local_d0,0);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

