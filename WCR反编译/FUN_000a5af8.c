// FUN_000a5af8 @ 000a5af8

void FUN_000a5af8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_398;
  undefined *local_390;
  ulong local_350;
  ulong local_348;
  ulong local_330;
  ulong local_300;
  ulong local_2f8;
  ulong local_2e0;
  uint local_2ac;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  ulong local_220;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  ulong local_1d0;
  undefined *local_1c8;
  ulong local_1c0;
  undefined4 local_1b4;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2ac = 1;
  if (((ulong)puVar2 & 1) != 0) {
    uVar5 = local_1b0;
    FUN_000a58f4();
    local_2ac = (uint)uVar5 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_2ac & 1) == 0) {
    uVar5 = local_1b0;
    FUN_000a6294();
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = uVar5;
    if (uVar5 == 0) {
      local_1b4 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_1c0;
      local_1c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      FUN_000a2ac8();
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if (local_1d0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_1d0);
      }
      _memset(auStack_218,0,0x40);
      uVar5 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = uVar3;
      if (uVar3 == 0) {
        local_2e0 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_2f8 = local_2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,
                 0x10);
      if (local_2f8 != 0) {
        lVar4 = *local_208;
        local_300 = 0;
        do {
          do {
            if (*local_208 - lVar4 != 0) {
              _objc_enumerationMutation(*local_208 - lVar4,local_2e0);
            }
            uVar5 = *(ulong *)(local_210 + local_300 * 8);
            puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
            local_1d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((((uVar5 & 1) != 0) && (uVar5 = local_1d8, FUN_000a2b9c(), (uVar5 & 1) != 0)) &&
               (puVar1 = local_1c8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1c8,PTR_s_containsObject__0269cbb8,local_1d8),
               ((ulong)puVar1 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_1d8);
            }
            local_300 = local_300 + 1;
          } while (local_300 < local_2f8);
          local_2f8 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,
                     auStack_a8,0x10);
          local_300 = 0;
        } while (local_2f8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_2e0);
      puVar1 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_1b4 = 1;
      }
      else {
        _memset(auStack_260,0,0x40);
        uVar5 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_gestureRecognizers_026ca650);
        _objc_retainAutoreleasedReturnValue();
        local_330 = uVar5;
        if (uVar5 == 0) {
          local_330 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_348 = local_330;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128
                   ,0x10);
        if (local_348 != 0) {
          lVar4 = *local_250;
          local_350 = 0;
          do {
            do {
              if (*local_250 - lVar4 != 0) {
                _objc_enumerationMutation(*local_250 - lVar4,local_330);
              }
              uVar5 = *(ulong *)(local_258 + local_350 * 8);
              puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
              local_220 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar5 & 1) != 0) {
                _memset(auStack_2a8,0,0x40);
                puVar1 = local_1c8;
                (*(code *)PTR__objc_retain_02578638)();
                local_390 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,
                           auStack_1a8,0x10);
                if (local_390 != (undefined *)0x0) {
                  lVar6 = *local_298;
                  local_398 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_298 - lVar6 != 0) {
                        _objc_enumerationMutation(*local_298 - lVar6,puVar1);
                      }
                      local_268 = *(undefined8 *)(local_2a0 + (long)local_398 * 8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_220,PTR_s_requireGestureRecognizerToFail__026ca810,local_268)
                      ;
                      local_398 = local_398 + 1;
                    } while (local_398 < local_390);
                    local_390 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,
                               auStack_1a8,0x10);
                    local_398 = (undefined *)0x0;
                  } while (local_390 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = local_330;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,
                       auStack_128,0x10);
            local_350 = 0;
          } while (local_348 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(local_330);
        local_1b4 = 0;
      }
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_1c8,0);
    }
    _objc_storeStrong(&local_1c0,0);
  }
  else {
    local_1b4 = 1;
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

