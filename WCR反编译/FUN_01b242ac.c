// FUN_01b242ac @ 01b242ac

void FUN_01b242ac(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  long lVar7;
  ulong local_170;
  ulong local_168;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar3 = local_c0;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    uVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar3);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar4;
    _memset(auStack_120,0,0x40);
    uVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar6 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,uVar3);
          }
          lVar7 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar7;
          FUN_01b1fc40();
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
          }
          _objc_storeStrong(&local_128,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_c4 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
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

