// FUN_00418ed4 @ 00418ed4

byte FUN_00418ed4(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  double local_e0;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    FUN_00419bcc();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_d8;
    local_e0 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar3;
    _memset(auStack_130,0,0x40);
    uVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar5 = *local_120;
      local_1a0 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,uVar3);
          }
          local_f0 = *(undefined8 *)(local_128 + local_1a0 * 8);
          uVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          param_1 = local_e0 - param_1;
          if (300.0 < param_1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_removeObjectForKey__0269d700,local_f0);
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    local_a9 = uVar3 == 0;
    if ((bool)local_a9) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_c0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_d0 = 1;
    _objc_storeStrong(&local_e8);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

