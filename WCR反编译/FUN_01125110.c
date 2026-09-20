// FUN_01125110 @ 01125110

byte FUN_01125110(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_398;
  ulong local_390;
  ulong local_350;
  ulong local_348;
  ulong local_308;
  ulong local_300;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  ulong local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  ulong local_1d8;
  int local_1cc;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  byte local_1a9;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_2);
  uVar2 = local_1b8;
  local_1c8 = param_3;
  if ((local_1b8 == 0) || (5 < param_3)) {
    local_1a9 = 0;
    local_1cc = 1;
    goto LAB_011257ac;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_1b8;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_1b8;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_1c0;
    local_1d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_containsObject__0269cbb8,uVar2);
    if ((uVar4 & 1) == 0) {
      _memset(auStack_220,0,0x40);
      uVar2 = local_1c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_300 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
      if (local_300 != 0) {
        lVar3 = *local_210;
        local_308 = 0;
        do {
          do {
            if (*local_210 - lVar3 != 0) {
              _objc_enumerationMutation(*local_210 - lVar3,uVar2);
            }
            local_1e0 = *(undefined8 *)(local_218 + local_308 * 8);
            uVar4 = local_1d8;
            puVar1 = PTR_s_rangeOfString__0269d838;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_rangeOfString__0269d838,local_1e0)
            ;
            local_230 = uVar4;
            local_228 = puVar1;
            if (uVar4 != 0x7fffffffffffffff) {
              local_1a9 = 1;
              local_1cc = 1;
              goto LAB_011253ac;
            }
            local_308 = local_308 + 1;
          } while (local_308 < local_300);
          local_300 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,
                     0x10);
          local_308 = 0;
        } while (local_300 != 0);
      }
      local_1cc = 0;
LAB_011253ac:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_1cc == 0) {
        local_1a9 = 0;
        local_1cc = 1;
      }
    }
    else {
      local_1a9 = 1;
      local_1cc = 1;
    }
    _objc_storeStrong(&local_1d8,0);
    goto LAB_011257ac;
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar2 = local_1b8;
  if ((uVar4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_2c0,0,0x40);
      uVar2 = local_1b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_390 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,0x10)
      ;
      if (local_390 != 0) {
        lVar3 = *local_2b0;
        local_398 = 0;
        do {
          do {
            if (*local_2b0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_2b0 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_2b8 + local_398 * 8);
            local_280 = uVar4;
            FUN_01125110(uVar4,local_1c0,local_1c8 + 1);
            if ((uVar4 & 1) != 0) {
              local_1a9 = 1;
              local_1cc = 1;
              goto LAB_01125768;
            }
            local_398 = local_398 + 1;
          } while (local_398 < local_390);
          local_390 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,
                     0x10);
          local_398 = 0;
        } while (local_390 != 0);
      }
      local_1cc = 0;
LAB_01125768:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      goto joined_r0x0112577c;
    }
  }
  else {
    _memset(auStack_278,0,0x40);
    uVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_allValues_0269dae8);
    _objc_retainAutoreleasedReturnValue();
    local_348 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_348 != 0) {
      lVar3 = *local_268;
      local_350 = 0;
      do {
        do {
          if (*local_268 - lVar3 != 0) {
            _objc_enumerationMutation(*local_268 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_270 + local_350 * 8);
          local_238 = uVar4;
          FUN_01125110(uVar4,local_1c0,local_1c8 + 1);
          if ((uVar4 & 1) != 0) {
            local_1a9 = 1;
            local_1cc = 1;
            goto LAB_011255a4;
          }
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,
                   0x10);
        local_350 = 0;
      } while (local_348 != 0);
    }
    local_1cc = 0;
LAB_011255a4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
joined_r0x0112577c:
    if (local_1cc != 0) goto LAB_011257ac;
  }
  local_1a9 = 0;
  local_1cc = 1;
LAB_011257ac:
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_1a9 & 1;
}

