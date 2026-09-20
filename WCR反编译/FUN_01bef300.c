// FUN_01bef300 @ 01bef300

void FUN_01bef300(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong local_180;
  ulong local_178;
  ulong local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  byte local_d1;
  undefined1 *local_d0;
  int local_c4;
  byte *local_c0;
  ulong local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if (local_b8 == 0) {
    if (param_2 != (byte *)0x0) {
      *param_2 = 0;
    }
    puVar1 = *(undefined1 **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    uVar3 = local_b8;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar4 == 0) {
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 != 0) {
        local_d1 = 1;
        uVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sightDraft_026a4d98);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_01bf8034();
        _objc_retainAutoreleasedReturnValue();
        local_130 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_130 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_130);
        }
        _objc_storeStrong(&local_130,0);
      }
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_imageArray_026a54a8);
      _objc_retainAutoreleasedReturnValue();
      local_178 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar6 = *local_110;
        local_180 = 0;
        do {
          do {
            if (*local_110 - lVar6 != 0) {
              _objc_enumerationMutation(*local_110 - lVar6,uVar3);
            }
            lVar7 = *(long *)(local_118 + local_180 * 8);
            local_e0 = lVar7;
            FUN_01bf7d90();
            _objc_retainAutoreleasedReturnValue();
            local_128 = lVar7;
            if (lVar7 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,lVar7);
            }
            puVar5 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
            puVar1 = puVar5 + -9;
            if (puVar5 < (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1)) {
              local_c4 = 0;
            }
            else {
              puVar1 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
              local_c4 = 2;
            }
            _objc_storeStrong(puVar1,&local_128,0);
            if (local_c4 != 0) goto LAB_01bef5e4;
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      local_c4 = 0;
LAB_01bef5e4:
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    puVar1 = local_d0;
    if (local_c0 != (byte *)0x0) {
      *local_c0 = local_d1 & 1;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_c4 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

