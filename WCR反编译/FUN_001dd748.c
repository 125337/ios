// FUN_001dd748 @ 001dd748

void FUN_001dd748(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong local_628;
  ulong local_620;
  ulong local_5e8;
  ulong local_5e0;
  ulong local_598;
  ulong local_590;
  ulong local_548;
  ulong local_540;
  ulong local_508;
  ulong local_500;
  undefined1 auStack_450 [8];
  long local_448;
  long *local_440;
  undefined8 local_410;
  undefined1 auStack_408 [8];
  long local_400;
  long *local_3f8;
  ulong local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  undefined8 local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  ulong local_2f0;
  undefined *local_2e8;
  ulong local_2e0;
  ulong local_2d8;
  ulong local_2d0;
  undefined4 local_2c8;
  long local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_2b0 = 0;
  _objc_storeStrong(&local_2b0,param_1);
  plVar2 = &local_2b8;
  local_2b8 = 0;
  _objc_storeStrong(plVar2,param_2);
  uVar1 = (uint)plVar2;
  FUN_001d3fac();
  if (((uVar1 & 1) == 0) || (local_2b8 == 0)) {
    local_2c8 = 1;
  }
  else {
    uVar3 = local_2b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      _objc_setAssociatedObject(local_2b8,DAT_026dfaa0,0,1);
      local_2c8 = 1;
    }
    else {
      uVar3 = local_2b0;
      FUN_001dfb54(local_2b0,local_2b8);
      lVar7 = local_2b8;
      uVar9 = DAT_026dfaa0;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_2d0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar3
                );
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar7,uVar9,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar3 = local_2b0;
      FUN_001dff6c(local_2b0,local_2b8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_2b0;
      local_2d8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_count_0269cfe0);
      FUN_001e0964(uVar3,uVar5,local_2b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_2e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = puVar4;
      _memset(auStack_330,0,0x40);
      uVar3 = local_2e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_500 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_a8,0x10);
      if (local_500 != 0) {
        lVar7 = *local_320;
        local_508 = 0;
        do {
          do {
            if (*local_320 - lVar7 != 0) {
              _objc_enumerationMutation(*local_320 - lVar7,uVar3);
            }
            local_2f0 = *(ulong *)(local_328 + local_508 * 8);
            _memset(auStack_378,0,0x40);
            uVar5 = local_2f0;
            (*(code *)PTR__objc_retain_02578638)();
            local_540 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_128
                       ,0x10);
            if (local_540 != 0) {
              lVar8 = *local_368;
              local_548 = 0;
              do {
                do {
                  if (*local_368 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_368 - lVar8,uVar5);
                  }
                  local_338 = *(undefined8 *)(local_370 + local_548 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2e8,PTR_s_addObject__0269d180,local_338);
                  local_548 = local_548 + 1;
                } while (local_548 < local_540);
                local_540 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                           auStack_128,0x10);
                local_548 = 0;
              } while (local_540 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_508 = local_508 + 1;
          } while (local_508 < local_500);
          local_500 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_a8,
                     0x10);
          local_508 = 0;
        } while (local_500 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _memset(auStack_3c0,0,0x40);
      uVar3 = local_2b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_590 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,auStack_1a8,0x10)
      ;
      if (local_590 != 0) {
        lVar7 = *local_3b0;
        local_598 = 0;
        do {
          do {
            if (*local_3b0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_3b0 - lVar7,uVar3);
            }
            local_380 = *(undefined8 *)(local_3b8 + local_598 * 8);
            puVar4 = local_2e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2e8,PTR_s_containsObject__0269cbb8,local_380);
            if (((ulong)puVar4 & 1) == 0) {
              FUN_001de6c8(local_380);
            }
            local_598 = local_598 + 1;
          } while (local_598 < local_590);
          local_590 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3c0,auStack_1a8,
                     0x10);
          local_598 = 0;
        } while (local_590 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _memset(auStack_408,0,0x40);
      uVar3 = local_2e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_5e0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_408,auStack_228,0x10)
      ;
      if (local_5e0 != 0) {
        lVar7 = *local_3f8;
        local_5e8 = 0;
        do {
          do {
            if (*local_3f8 - lVar7 != 0) {
              _objc_enumerationMutation(*local_3f8 - lVar7,uVar3);
            }
            local_3c8 = *(ulong *)(local_400 + local_5e8 * 8);
            _memset(auStack_450,0,0x40);
            uVar5 = local_3c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_620 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,auStack_2a8
                       ,0x10);
            if (local_620 != 0) {
              lVar8 = *local_440;
              local_628 = 0;
              do {
                do {
                  if (*local_440 - lVar8 != 0) {
                    _objc_enumerationMutation(*local_440 - lVar8,uVar5);
                  }
                  uVar9 = *(undefined8 *)(local_448 + local_628 * 8);
                  uVar6 = local_3c8;
                  local_410 = uVar9;
                  FUN_001e13dc(uVar9,local_3c8,local_2b8);
                  FUN_001e1c30(local_410,uVar9,uVar6);
                  if (uVar6 != 0) {
                    FUN_001d031c(local_410);
                  }
                  local_628 = local_628 + 1;
                } while (local_628 < local_620);
                local_620 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_450,
                           auStack_2a8,0x10);
                local_628 = 0;
              } while (local_620 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_5e8 = local_5e8 + 1;
          } while (local_5e8 < local_5e0);
          local_5e0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_408,auStack_228,
                     0x10);
          local_5e8 = 0;
        } while (local_5e0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_2e8);
      _objc_storeStrong(&local_2e0,0);
      _objc_storeStrong(&local_2d8,0);
      local_2c8 = 0;
    }
  }
  _objc_storeStrong(&local_2b8);
  _objc_storeStrong(&local_2b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

