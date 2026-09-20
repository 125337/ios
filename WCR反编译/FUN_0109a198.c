// FUN_0109a198 @ 0109a198

void FUN_0109a198(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_150;
  ulong local_148;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf____);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar4 = *local_108;
      local_150 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_110 + local_150 * 8);
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_d8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          uVar5 = local_120;
          FUN_0107bd28();
          puVar2 = local_c8;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          _objc_storeStrong(&local_120,0);
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_bc = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

