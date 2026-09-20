// FUN_01adee20 @ 01adee20

void FUN_01adee20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *local_410;
  undefined *local_408;
  ulong local_3d0;
  ulong local_3c8;
  undefined *local_3a0;
  undefined *local_388;
  undefined *local_380;
  ulong local_340;
  ulong local_338;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  undefined *local_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined *local_248;
  int local_23c;
  undefined *local_238;
  int local_22c;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined4 local_1c4;
  long local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  local_1b0 = param_1;
  _objc_storeStrong(&local_1b8);
  local_1c0 = param_1;
  if (local_1b8 == 0) {
    local_1c4 = 1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1d0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar1;
    _memset(auStack_220,0,0x40);
    uVar3 = local_1b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_338 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
    if (local_338 != 0) {
      lVar4 = *local_210;
      local_340 = 0;
      do {
        do {
          if (*local_210 - lVar4 != 0) {
            _objc_enumerationMutation(*local_210 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_218 + local_340 * 8);
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
          if ((((uVar5 & 1) != 0) &&
              (uVar5 = local_1e0,
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0), uVar5 != 0))
             && (puVar6 = local_1d8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_containsObject__0269cbb8,local_1e0),
                ((ulong)puVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_1e0);
            (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1e0);
          }
          local_340 = local_340 + 1;
        } while (local_340 < local_338);
        local_338 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        local_340 = 0;
      } while (local_338 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_22c = 1;
    local_23c = 7;
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_380 = puVar1;
    if ((long)local_23c < (long)puVar1) {
      local_380 = (undefined *)(long)local_23c;
    }
    local_250 = local_380;
    local_238 = local_380;
    if ((long)local_22c < (long)local_380) {
      local_388 = local_380;
    }
    else {
      local_388 = (undefined *)(long)local_22c;
    }
    local_258 = local_388;
    local_228 = local_388;
    local_268 = local_388;
    lVar4 = param_1 + 0x20;
    local_248 = puVar1;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar6 = (undefined *)((3 - lVar2) * (long)local_228);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    local_3a0 = puVar6;
    if ((long)puVar6 <= (long)local_268) {
      local_3a0 = local_268;
    }
    local_278 = local_3a0;
    local_260 = local_3a0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_270 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_280 = puVar1;
    _memset(auStack_2c8,0,0x40);
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_3c8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_128,0x10);
    if (local_3c8 != 0) {
      lVar4 = *local_2b8;
      local_3d0 = 0;
      do {
        do {
          if (*local_2b8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_2b8 - lVar4,uVar5);
          }
          local_288 = *(undefined8 *)(local_2c0 + local_3d0 * 8);
          puVar6 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_containsObject__0269cbb8,local_288);
          if ((((ulong)puVar6 & 1) != 0) &&
             (puVar6 = local_280,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_280,PTR_s_containsObject__0269cbb8,local_288),
             ((ulong)puVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_addObject__0269d180,local_288);
          }
          local_3d0 = local_3d0 + 1;
        } while (local_3d0 < local_3c8);
        local_3c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_128,
                   0x10);
        local_3d0 = 0;
      } while (local_3c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _memset(auStack_310,0,0x40);
    puVar6 = local_1d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_408 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_1a8,0x10);
    if (local_408 != (undefined *)0x0) {
      lVar4 = *local_300;
      local_410 = (undefined *)0x0;
      do {
        do {
          if (*local_300 - lVar4 != 0) {
            _objc_enumerationMutation(*local_300 - lVar4,puVar6);
          }
          local_2d0 = *(undefined8 *)(local_308 + (long)local_410 * 8);
          puVar1 = local_280;
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_containsObject__0269cbb8,local_2d0);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_addObject__0269d180,local_2d0);
          }
          puVar1 = local_280;
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_count_0269cfe0);
          if ((long)local_260 <= (long)puVar1) {
            local_1c4 = 6;
            goto LAB_01adf5c8;
          }
          local_410 = local_410 + 1;
        } while (local_410 < local_408);
        local_408 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_1a8,
                   0x10);
        local_410 = (undefined *)0x0;
      } while (local_408 != (undefined *)0x0);
    }
    local_1c4 = 0;
LAB_01adf5c8:
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_280);
    _objc_storeStrong(&local_1d8,0);
    _objc_storeStrong(&local_1d0,0);
    local_1c4 = 0;
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

