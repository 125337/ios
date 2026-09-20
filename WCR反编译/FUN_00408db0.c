// FUN_00408db0 @ 00408db0

byte FUN_00408db0(double param_1,undefined8 param_2)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_258;
  ulong local_250;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  double local_160;
  ulong local_158;
  int local_150;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_2);
  uVar3 = local_138;
  FUN_0041288c();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    local_129 = 1;
    local_150 = 1;
  }
  else {
    FUN_00412e04();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_158 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar3 = local_158;
    local_160 = param_1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar3);
    FUN_0041102c(local_160,0x403e000000000000,local_158);
    _memset(auStack_1a8,0,0x40);
    uVar2 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_250 != 0) {
      lVar6 = *local_198;
      local_258 = 0;
      do {
        do {
          if (*local_198 - lVar6 != 0) {
            _objc_enumerationMutation(*local_198 - lVar6,uVar2);
          }
          local_168 = *(undefined8 *)(local_1a0 + local_258 * 8);
          uVar5 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_168);
          _objc_retainAutoreleasedReturnValue();
          dVar1 = local_160;
          local_1b0 = uVar5;
          if ((uVar5 == 0) ||
             (dVar7 = local_160,
             (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_doubleValue_026ca608),
             30.0 <= dVar1 - dVar7)) {
            local_150 = 0;
          }
          else {
            local_129 = 0;
            local_150 = 1;
          }
          _objc_storeStrong(&local_1b0,0);
          if (local_150 != 0) goto LAB_00409184;
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_258 = 0;
      } while (local_250 != 0);
    }
    local_150 = 0;
LAB_00409184:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_150 == 0) {
      _memset(auStack_1f8,0,0x40);
      uVar2 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_2b0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      if (local_2b0 != 0) {
        lVar6 = *local_1e8;
        local_2b8 = 0;
        do {
          do {
            if (*local_1e8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar6,uVar2);
            }
            local_1b8 = *(undefined8 *)(local_1f0 + local_2b8 * 8);
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_1b8);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_2b8 = local_2b8 + 1;
          } while (local_2b8 < local_2b0);
          local_2b0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                     0x10);
          local_2b8 = 0;
        } while (local_2b0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_150 = 0;
    }
    _objc_sync_exit(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_150 == 0) {
      local_129 = 1;
      local_150 = 1;
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_129 & 1;
}

