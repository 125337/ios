// FUN_014b1168 @ 014b1168

void FUN_014b1168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *local_230;
  undefined1 *local_220;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_148;
  undefined1 *local_138;
  undefined1 *local_130;
  long local_128;
  int local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  puVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    _memset(auStack_118,0,0x40);
    puVar3 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_1b8 != (undefined1 *)0x0) {
      lVar8 = *local_108;
      local_1c0 = (undefined1 *)0x0;
      do {
        do {
          if (*local_108 - lVar8 != 0) {
            _objc_enumerationMutation(*local_108 - lVar8,puVar3);
          }
          uVar9 = *(ulong *)(local_110 + (long)local_1c0 * 8);
          local_d8 = uVar9;
          FUN_014b27a4();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(lVar5);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar9);
          puVar2 = local_b8;
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = puVar2;
            local_11c = 1;
            goto LAB_014b1424;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_1c0 = (undefined1 *)0x0;
      } while (local_1b8 != (undefined1 *)0x0);
    }
    local_11c = 0;
LAB_014b1424:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_11c != 0) goto LAB_014b16a8;
  }
  lVar8 = local_c0;
  FUN_014b28d8(local_c0,local_c8,local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_b8;
  local_128 = lVar8;
  if (lVar8 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_11c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      local_220 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_148 = local_220;
    }
    else {
      local_220 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
      local_138 = local_220;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_220;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    local_230 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
    if ((undefined1 *)((long)&MACH_HEADER.magic + 2) <= local_230) {
      local_230 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_insertObject_atIndex__0269eac0,local_128,local_230);
    puVar7 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
    local_11c = 1;
    local_b0 = puVar7;
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_128,0);
LAB_014b16a8:
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

