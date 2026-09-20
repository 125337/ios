// FUN_01ae8cbc @ 01ae8cbc

void FUN_01ae8cbc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2e0;
  ulong local_2d8;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  ulong local_270;
  ulong local_268;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  int local_1bc;
  undefined *local_1b8;
  int local_1ac;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_144;
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  local_140 = param_1;
  if (local_138 == 0) {
    local_144 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar2;
    _memset(auStack_1a0,0,0x40);
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_268 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_268 != 0) {
      lVar4 = *local_190;
      local_270 = 0;
      do {
        do {
          if (*local_190 - lVar4 != 0) {
            _objc_enumerationMutation(*local_190 - lVar4,uVar3);
          }
          local_160 = *(undefined8 *)(local_198 + local_270 * 8);
          uVar5 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_containsObject__0269cbb8,local_160);
          if (((uVar5 & 1) != 0) &&
             (puVar1 = local_158,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_158,PTR_s_containsObject__0269cbb8,local_160),
             ((ulong)puVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_160);
          }
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_270 = 0;
      } while (local_268 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_1ac = 1;
    local_1bc = 7;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_2a8 = puVar2;
    if ((long)local_1bc < (long)puVar2) {
      local_2a8 = (undefined *)(long)local_1bc;
    }
    local_1d0 = local_2a8;
    local_1b8 = local_2a8;
    if ((long)local_1ac < (long)local_2a8) {
      local_2b0 = local_2a8;
    }
    else {
      local_2b0 = (undefined *)(long)local_1ac;
    }
    local_1d8 = local_2b0;
    local_1a8 = local_2b0;
    local_1e8 = local_2b0;
    local_1f0 = (undefined *)((3 - *(long *)(param_1 + 0x30)) * (long)local_2b0);
    local_2b8 = local_1f0;
    if ((long)local_1f0 <= (long)local_2b0) {
      local_2b8 = local_2b0;
    }
    local_1f8 = local_2b8;
    local_1e0 = local_2b8;
    local_1c8 = puVar2;
    _memset(auStack_240,0,0x40);
    uVar3 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,0x10);
    if (local_2d8 != 0) {
      lVar4 = *local_230;
      local_2e0 = 0;
      do {
        do {
          if (*local_230 - lVar4 != 0) {
            _objc_enumerationMutation(*local_230 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_238 + local_2e0 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_200 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((((uVar5 & 1) != 0) &&
              (uVar5 = local_200,
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0), uVar5 != 0))
             && (puVar1 = local_158,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_containsObject__0269cbb8,local_200),
                ((ulong)puVar1 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_200);
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_200);
            puVar1 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
            if ((long)local_1e0 <= (long)puVar1) {
              local_144 = 4;
              goto LAB_01ae9284;
            }
          }
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < local_2d8);
        local_2d8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128,
                   0x10);
        local_2e0 = 0;
      } while (local_2d8 != 0);
    }
    local_144 = 0;
LAB_01ae9284:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

