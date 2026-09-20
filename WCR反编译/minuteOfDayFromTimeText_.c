// minuteOfDayFromTimeText: @ 010af4e8

/* Function Stack Size: 0x18 bytes */

long_long WCRefineMessageSyncRule::minuteOfDayFromTimeText_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  ulong local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    if (uVar1 == 2) {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _memset(auStack_130,0,0x40);
      uVar1 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_178 != 0) {
        lVar6 = *local_120;
        local_180 = 0;
        do {
          do {
            if (*local_120 - lVar6 != 0) {
              _objc_enumerationMutation(*local_120 - lVar6,uVar1);
            }
            lVar7 = *(long *)(local_128 + local_180 * 8);
            local_f0 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
            if ((lVar7 == 0) ||
               (lVar7 = local_f0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f0,PTR_s_rangeOfCharacterFromSet__0269db68,local_e8),
               lVar7 != 0x7fffffffffffffff)) {
              local_b0 = 0xffffffffffffffff;
              local_d4 = 1;
              goto LAB_010af7b8;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      local_d4 = 0;
LAB_010af7b8:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d4 == 0) {
        uVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (((((long)uVar4 < 0) || (0x17 < (long)uVar4)) || ((long)uVar5 < 0)) ||
           (0x3b < (long)uVar5)) {
          local_b0 = 0xffffffffffffffff;
          local_d4 = 1;
        }
        else {
          local_b0 = uVar4 * 0x3c + uVar5;
          local_d4 = 1;
        }
      }
      _objc_storeStrong(&local_e8,0);
    }
    else {
      local_b0 = 0xffffffffffffffff;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

