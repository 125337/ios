// FUN_0074c198 @ 0074c198

void FUN_0074c198(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_108;
      local_170 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_110 + local_170 * 8);
          local_d8 = uVar5;
          FUN_00743f78();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
          if ((uVar5 == 0) || (uVar5 = local_120, FUN_00744988(), (uVar5 & 1) != 0)) {
            local_c8 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
            local_c8 = 0;
          }
          _objc_storeStrong(&local_120,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_c8 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

