// FUN_0040ae9c @ 0040ae9c

void FUN_0040ae9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_360;
  undefined *local_358;
  ulong local_280;
  ulong local_278;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined4 local_17c;
  ulong local_178 [3];
  int local_15c;
  ulong local_158;
  undefined *local_150;
  undefined1 auStack_148 [128];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  uVar11 = local_158;
  FUN_0040bb14(local_158,&cf_messageType);
  local_15c = (int)uVar11;
  uVar11 = local_158;
  FUN_004055cc(local_158,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  local_178[0] = uVar11;
  if ((local_15c == 0x31) && (FUN_0040ca7c(0), uVar11 == 0x39)) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_17c = 1;
    local_150 = puVar1;
    goto LAB_0040b73c;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar2;
  _memset(auStack_1d8,0,0x40);
  uVar11 = local_158;
  FUN_0040cccc(local_158,&cf_structuredTexts);
  _objc_retainAutoreleasedReturnValue();
  local_278 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_278 != 0) {
    lVar10 = *local_1c8;
    local_280 = 0;
    do {
      do {
        if (*local_1c8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar10,uVar11);
        }
        local_198 = *(undefined8 *)(local_1d0 + local_280 * 8);
        FUN_0040d1ec(local_188,local_190,local_198);
        local_280 = local_280 + 1;
      } while (local_280 < local_278);
      local_278 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10)
      ;
      local_280 = 0;
    } while (local_278 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar11);
  uVar11 = (ulong)(local_15c - 0x31U);
  if (local_15c - 0x31U == 0) {
    uVar11 = local_178[0];
    FUN_0040ca7c(0);
    uVar11 = uVar11 - 0x13;
    if (uVar11 != 0) goto LAB_0040b20c;
    puVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_copy_0269d150);
    local_17c = 1;
    local_150 = puVar1;
  }
  else {
LAB_0040b20c:
    uVar3 = local_158;
    FUN_004055cc(uVar11,local_158,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    FUN_0040d3b4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_158;
    local_c8 = uVar11;
    FUN_004055cc(local_158,&cf_displayContent);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_0040d3b4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_158;
    local_c0 = uVar5;
    FUN_004055cc(local_158,&cf_pushContent);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_0040d3b4();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = local_158;
    local_b8 = uVar7;
    FUN_004055cc(local_158,&cf_sessionHint);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    FUN_0040d3b4();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar11);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _memset(auStack_228,0,0x40);
    puVar1 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_358 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_148,0x10);
    if (local_358 != (undefined *)0x0) {
      lVar10 = *local_218;
      local_360 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar10 != 0) {
            _objc_enumerationMutation(*local_218 - lVar10,puVar1);
          }
          local_1e8 = *(undefined8 *)(local_220 + (long)local_360 * 8);
          FUN_0040d1ec(local_188,local_190,local_1e8);
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_148,
                   0x10);
        local_360 = (undefined *)0x0;
      } while (local_358 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_copy_0269d150);
    local_17c = 1;
    local_150 = puVar1;
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_188,0);
LAB_0040b73c:
  _objc_storeStrong(local_178);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

