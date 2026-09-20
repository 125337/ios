// FUN_0053523c @ 0053523c

void FUN_0053523c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *local_1b8;
  undefined *local_1b0;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  ulong local_e0;
  undefined4 local_d8;
  undefined *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = (undefined *)0x0;
  _objc_storeStrong(&local_c8,param_3);
  puVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = 1;
    local_b0 = puVar2;
  }
  else {
    uVar3 = local_b8;
    FUN_00535bb0(local_b8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_c8;
    local_e0 = uVar3;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_d8 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      _memset(auStack_130,0,0x40);
      puVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      if (local_1b0 != (undefined *)0x0) {
        lVar4 = *local_120;
        local_1b8 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,puVar2);
            }
            lVar5 = *(long *)(local_128 + (long)local_1b8 * 8);
            local_f0 = lVar5;
            FUN_0052e538();
            _objc_retainAutoreleasedReturnValue();
            local_138 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
              local_d8 = 3;
            }
            else {
              uVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_containsObject__0269cbb8,local_138);
              if ((uVar3 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_138);
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
                local_d8 = 0;
              }
              else {
                local_d8 = 3;
              }
            }
            _objc_storeStrong(&local_138,0);
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1b8 = (undefined *)0x0;
        } while (local_1b0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_d8 = 1;
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

