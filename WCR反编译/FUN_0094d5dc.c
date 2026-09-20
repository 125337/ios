// FUN_0094d5dc @ 0094d5dc

void FUN_0094d5dc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint local_1ac;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_00957358();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_b9 = (byte)puVar2;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_ba = (byte)puVar2;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_bb = (byte)puVar3;
  if ((((local_b9 & 1) == 0) && ((local_ba & 1) == 0)) && (((ulong)puVar3 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_c0 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    _memset(auStack_110,0,0x40);
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar5 = *local_100;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,puVar1);
          }
          uVar6 = *(ulong *)(local_108 + (long)local_190 * 8);
          local_d0 = uVar6;
          if ((((local_b9 & 1) == 0) || (FUN_009464dc(), (uVar6 & 1) != 0)) &&
             (((local_ba & 1) == 0 || (uVar6 = local_d0, FUN_0095e0ec(), (uVar6 & 1) != 0)))) {
            local_1ac = 0;
            if ((local_bb & 1) != 0) {
              uVar6 = local_d0;
              FUN_009463a8();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1ac = (uint)uVar4 ^ 1;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            if ((local_1ac & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
            }
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    local_c0 = 1;
    local_b0 = puVar1;
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

