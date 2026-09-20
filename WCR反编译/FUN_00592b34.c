// FUN_00592b34 @ 00592b34

void FUN_00592b34(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *local_1c8;
  ulong local_178;
  ulong local_170;
  bool local_129;
  undefined *local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = (undefined *)0x0;
    local_c8 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar3 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_110 + local_178 * 8);
          local_d8 = lVar4;
          FUN_00593474();
          _objc_retainAutoreleasedReturnValue();
          local_120 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if ((lVar4 == 0) ||
             (puVar1 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_d0,PTR_s_containsObject__0269cbb8,local_120), ((ulong)puVar1 & 1) != 0
             )) {
            local_c8 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
            local_c8 = 0;
          }
          _objc_storeStrong(&local_120,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_1c8 = (undefined *)0x0;
    }
    else {
      local_1c8 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
      local_128 = local_1c8;
    }
    local_129 = puVar1 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1c8;
    if (local_129) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
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

