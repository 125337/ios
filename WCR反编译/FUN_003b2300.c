// FUN_003b2300 @ 003b2300

byte FUN_003b2300(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  undefined *local_d0;
  int local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (lVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addCharactersInString__0269fcb8,&cf_____);
    uVar1 = local_b8;
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_invertedSet_0269ef60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_120,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_118 + local_170 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isEqualToString__0269ccc8,local_c0);
          if ((uVar5 & 1) != 0) {
            local_a9 = 1;
            local_c4 = 1;
            goto LAB_003b25e4;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_c4 = 0;
LAB_003b25e4:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

