// FUN_00f253b8 @ 00f253b8

byte FUN_00f253b8(double param_1,undefined8 param_2)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0 [3];
  double local_d8;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b8;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    FUN_00f29148();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_d0;
    local_d8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_f0[0] = uVar4;
    _memset(auStack_138,0,0x40);
    uVar4 = local_f0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar6 = *local_128;
      local_188 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,uVar4);
          }
          dVar1 = local_d8;
          local_f8 = *(undefined8 *)(local_130 + local_188 * 8);
          uVar5 = local_d0;
          dVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (180.0 < dVar1 - dVar7) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_removeObjectForKey__0269d700,local_f8);
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    local_a9 = uVar4 == 0;
    if ((bool)local_a9) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_c4 = 1;
    _objc_storeStrong(local_f0);
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

