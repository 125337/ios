// FUN_0057d18c @ 0057d18c

void FUN_0057d18c(undefined8 param_1)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *local_158;
  void *local_150;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar5 = local_b0;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_c8 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    pvVar2 = _memset(auStack_118,0,0x40);
    FUN_0057bc48();
    _objc_retainAutoreleasedReturnValue();
    local_150 = pvVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != (void *)0x0) {
      lVar5 = *local_108;
      local_158 = (void *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,pvVar2);
          }
          uVar6 = *(ulong *)(local_110 + (long)local_158 * 8);
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
          }
          local_158 = (void *)((long)local_158 + 1);
        } while (local_158 < local_150);
        local_150 = pvVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_158 = (void *)0x0;
      } while (local_150 != (void *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pvVar2);
    FUN_00588e58(local_d0);
    FUN_0058abd8(local_b8);
    _objc_storeStrong(&local_d0,0);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

