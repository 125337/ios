// FUN_00937b00 @ 00937b00

void FUN_00937b00(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_158;
  undefined *local_150;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar1 = local_b8;
  if ((local_c8 == 0) || (local_b8 == (undefined *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    puVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_150 != (undefined *)0x0) {
      lVar3 = *local_110;
      local_158 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,puVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_158 * 8);
          lVar2 = local_c8;
          (**(code **)(local_c8 + 0x10))(local_c8,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,lVar2);
          _objc_storeStrong(&local_128,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_158 = (undefined *)0x0;
      } while (local_150 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

