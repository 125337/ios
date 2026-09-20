// FUN_00f25b38 @ 00f25b38

byte FUN_00f25b38(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  ulong local_1b0;
  ulong local_1a8;
  double local_188;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  double local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar3 = local_b8;
  local_c0 = param_1;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    FUN_00f29208();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_100 = 0x3ff0000000000000;
    local_108 = local_c0;
    if (local_c0 <= 1.0) {
      local_188 = 1.0;
    }
    else {
      local_188 = local_c0;
    }
    local_110 = local_188;
    local_f8 = local_188;
    local_e0 = param_1;
    _memset(auStack_158,0,0x40);
    uVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != 0) {
      lVar7 = *local_148;
      local_1b0 = 0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,uVar5);
          }
          dVar2 = local_e0;
          local_118 = *(undefined8 *)(local_150 + local_1b0 * 8);
          uVar6 = local_d8;
          dVar8 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_118);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          dVar1 = local_f8;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (dVar1 < dVar2 - dVar8) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_removeObjectForKey__0269d700,local_118);
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_c8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    local_a9 = uVar5 == 0;
    if ((bool)local_a9) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_c8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_cc = 1;
    _objc_sync_exit(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

