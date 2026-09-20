// FUN_005c982c @ 005c982c

void FUN_005c982c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_005ca258();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = 1;
    local_b0 = puVar1;
  }
  else {
    FUN_005ca7b0();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = param_1;
    FUN_005ca91c();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
    puVar1 = local_d8;
    if (param_1 == (undefined *)0x0) {
      if ((local_d0 == (undefined *)0x0) ||
         (puVar1 = local_d0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d0,PTR_s_respondsToSelector__026ca818,
                    PTR_s_getDicWithUserNameForAllTag_026a5b10), ((ulong)puVar1 & 1) == 0)) {
        puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = 1;
        local_b0 = puVar1;
      }
      else {
        puVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getDicWithUserNameForAllTag_026a5b10);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
          (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_c8 = 1;
          local_b0 = puVar1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_e0;
          local_e8 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_f0 = puVar1;
          _memset(auStack_138,0,0x40);
          puVar1 = local_f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1f0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          if (local_1f0 != (undefined *)0x0) {
            lVar5 = *local_128;
            local_1f8 = (undefined *)0x0;
            do {
              do {
                if (*local_128 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_128 - lVar5,puVar1);
                }
                local_f8 = *(ulong *)(local_130 + (long)local_1f8 * 8);
                puVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
                local_140 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
                _objc_retainAutoreleasedReturnValue();
                local_148 = puVar3;
                FUN_005cae90(local_f8,puVar3,0);
                puVar2 = local_148;
                FUN_005cbae8(local_148,local_b8);
                if (((ulong)puVar2 & 1) == 0) {
                  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
                  _objc_retainAutoreleasedReturnValue();
                  local_150 = puVar2;
                  FUN_005cae90(local_140,puVar2,0);
                  puVar2 = local_150;
                  FUN_005cbae8(local_150,local_b8);
                  if (((ulong)puVar2 & 1) != 0) {
                    uVar4 = local_f8;
                    FUN_005c78e0();
                    _objc_retainAutoreleasedReturnValue();
                    local_158 = uVar4;
                    FUN_005ca0b4();
                    if ((uVar4 & 1) == 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e8,PTR_s_addObject__0269d180,local_158);
                    }
                    _objc_storeStrong(&local_158,0);
                  }
                  _objc_storeStrong(&local_150,0);
                  local_c8 = 0;
                }
                else {
                  FUN_005cbe20(local_140,local_e8,0);
                  local_c8 = 3;
                }
                _objc_storeStrong(&local_148);
                _objc_storeStrong(&local_140,0);
                local_1f8 = local_1f8 + 1;
              } while (local_1f8 < local_1f0);
              local_1f0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                         auStack_a8,0x10);
              local_1f8 = (undefined *)0x0;
            } while (local_1f0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
          puVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_c8 = 1;
          _objc_storeStrong(&local_f0);
          _objc_storeStrong(&local_e8,0);
        }
        _objc_storeStrong(&local_e0,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar1;
      local_c8 = 1;
    }
    _objc_storeStrong(&local_d8);
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

