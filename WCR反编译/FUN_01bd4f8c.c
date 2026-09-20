// FUN_01bd4f8c @ 01bd4f8c

void FUN_01bd4f8c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_160;
  ulong local_158;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01be3e5c();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getAllLabelName_026af4b0);
  if ((param_1 & 1) == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar1;
  }
  else {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_getAllLabelName_026af4b0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_bc = 1;
      local_b0 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar1;
      _memset(auStack_118,0,0x40);
      uVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_158 != 0) {
        lVar4 = *local_108;
        local_160 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar2);
            }
            lVar5 = *(long *)(local_110 + local_160 * 8);
            local_d8 = lVar5;
            FUN_01be33a4();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_120 = lVar3;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(lVar5);
            lVar3 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            if (lVar3 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
            }
            _objc_storeStrong(&local_120,0);
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_bc = 1;
      local_b0 = puVar1;
      _objc_storeStrong(&local_d0,0);
    }
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

