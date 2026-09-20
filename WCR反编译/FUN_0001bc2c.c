// FUN_0001bc2c @ 0001bc2c

byte FUN_0001bc2c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  ulong local_d8;
  int local_d0;
  undefined8 local_c0;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_IsAtMe_0269d198);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_IsAtMe_0269d198),
     (uVar1 & 1) == 0)) {
    uVar1 = local_b8;
    FUN_0001a4fc(local_b8,&cf_m_nsAtUserList);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      _memset(auStack_128,0,0x40);
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != 0) {
        lVar3 = *local_118;
        local_198 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_120 + local_198 * 8);
            local_e8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_c0);
            if ((((uVar4 & 1) != 0) ||
                (uVar4 = local_e8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_isEqualToString__0269ccc8,&cf_notify_all),
                (uVar4 & 1) != 0)) ||
               (uVar4 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e8,PTR_s_isEqualToString__0269ccc8,&cf__all), (uVar4 & 1) != 0)) {
              local_a9 = 1;
              local_d0 = 1;
              goto LAB_0001c024;
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      local_d0 = 0;
LAB_0001c024:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  else {
    local_a9 = 1;
    local_d0 = 1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

