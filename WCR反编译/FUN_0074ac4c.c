// FUN_0074ac4c @ 0074ac4c

void FUN_0074ac4c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  double local_128;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_2;
  _objc_storeStrong(&local_b8);
  local_c0 = param_2;
  _memset(auStack_108,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_158 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar3 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_160 * 8);
        uVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_objectForKeyedSubscript__0269d098,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_120[0] = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_128 = param_1;
        if (param_1 <= 0.0) {
          uVar1 = local_120[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          local_128 = param_1;
        }
        if ((local_128 <= 0.0) ||
           (local_128 = *(double *)(param_2 + 0x20) - local_128, param_1 = local_128,
           120.0 < local_128)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_removeObjectForKey__0269d700,local_c8);
          param_1 = local_128;
        }
        _objc_storeStrong(local_120,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  FUN_0074a1dc(local_b8,0x80,&PTR___NSConcreteGlobalBlock_0257f728);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

