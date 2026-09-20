// FUN_0200cfdc @ 0200cfdc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0200cfdc(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong *local_1d0;
  ulong local_1a8;
  ulong local_1a0;
  ulong *local_168;
  bool local_149;
  ulong *local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  ulong *local_f0;
  int local_e8;
  byte local_e1;
  ulong *local_e0;
  byte local_d1;
  ulong *local_d0;
  ulong *local_c8;
  byte local_b9;
  ulong local_b8;
  ulong *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(local_168,param_1);
  local_d1 = 0;
  local_e1 = 0;
  local_b9 = param_2;
  if ((param_2 & 1) == 0) {
    FUN_0219cbf4();
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_168;
  }
  else {
    FUN_0219cb2c();
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_168;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_168;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar3 = local_c8;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_e8 = 1;
  }
  else {
    puVar3 = (ulong *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    _memset(auStack_138,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar4 = *local_128;
      local_1a8 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,uVar2);
          }
          lVar5 = *(long *)(local_130 + local_1a8 * 8);
          local_f8 = lVar5;
          FUN_0209fb50();
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
            local_e8 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
            puVar3 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
            puVar6 = (undefined1 *)((long)puVar3 + -7);
            if (puVar3 < (ulong *)((long)&MACH_HEADER.cputype + 3)) {
              local_e8 = 0;
            }
            else {
              puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_e8 = 2;
            }
          }
          _objc_storeStrong(puVar6,&local_140,0);
          if ((local_e8 != 0) && (local_e8 != 3)) goto LAB_0200d398;
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    local_e8 = 0;
LAB_0200d398:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    if (puVar3 == (ulong *)0x0) {
      local_1d0 = local_c8;
    }
    else {
      local_1d0 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
      local_148 = local_1d0;
    }
    local_149 = puVar3 != (ulong *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1d0;
    if (local_149) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    local_e8 = 1;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

