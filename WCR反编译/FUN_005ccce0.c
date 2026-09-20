// FUN_005ccce0 @ 005ccce0

void FUN_005ccce0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong local_180;
  ulong local_178;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_005c78e0();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_c0);
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar3 = *local_118;
      local_180 = 0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,uVar1);
          }
          lVar4 = *(long *)(local_120 + local_180 * 8);
          local_e8 = lVar4;
          FUN_005c78e0();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
          }
          _objc_storeStrong(&local_130,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

