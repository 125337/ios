// interval @ 00521228

/* Function Stack Size: 0x10 bytes */

long_long WCRefineMomentsAutoRefreshManager::interval(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long_long lVar6;
  long_long local_258;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1f0;
  undefined *local_1a8;
  uint local_164;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long_long local_100;
  long_long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d9 = 0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = (uint)puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_164 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_164 = (uint)puVar2;
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)();
  if ((local_164 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_c0;
    local_1a8 = puVar3;
    if ((long)puVar3 < 1) {
      local_1a8 = (undefined *)((long)&segment_command_00000020.vmaddr + 4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1a8);
    uVar1 = (uint)puVar4;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_00520b10();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_c0;
    local_1f0 = puVar3;
    if ((long)puVar3 < 1) {
      local_1f0 = (undefined *)((long)&segment_command_00000020.vmaddr + 4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_1f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  local_f8 = 0x7fffffffffffffff;
  _memset(auStack_140,0,0x40);
  puVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_220 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
  if (local_220 != (undefined *)0x0) {
    lVar5 = *local_130;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar5 != 0) {
          _objc_enumerationMutation(*local_130 - lVar5,puVar2);
        }
        lVar6 = *(long_long *)(local_138 + (long)local_228 * 8);
        local_100 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_integerValue_026ca750);
        if ((0 < (long)lVar6) && ((long)lVar6 < (long)local_f8)) {
          local_f8 = lVar6;
        }
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_f8 == 0x7fffffffffffffff) {
    local_258 = 0x3c;
  }
  else {
    local_258 = local_f8;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_258;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

