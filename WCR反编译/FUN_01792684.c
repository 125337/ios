// FUN_01792684 @ 01792684

void FUN_01792684(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_1b0;
  ulong local_178;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  int local_f4;
  ulong local_f0;
  bool local_e1;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  undefined1 auStack_b8 [128];
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar1 = local_c8;
  FUN_01791da8();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e1 = false;
  if (uVar2 == 0) {
    local_178 = local_d0;
  }
  else {
    local_178 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_178;
  }
  local_e1 = uVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_178;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d8;
    local_d8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 != 0) {
    uVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d8;
    local_d8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_c0 = 0;
    local_f4 = 1;
  }
  else {
    uVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringByAppendingString__0269d398,&cf_Config);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_d8;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_substringToIndex__0269d6c0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d8;
    local_108 = 1;
    uVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    local_1b0 = uVar5;
    if (local_108 < uVar5) {
      local_1b0 = local_108;
    }
    local_118 = local_1b0;
    local_110 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,local_1b0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar7;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _memset(auStack_160,0,0x40);
    puVar7 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_b8,0x10);
    if (local_1f0 != (undefined *)0x0) {
      lVar8 = *local_150;
      local_1f8 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar8 != 0) {
            _objc_enumerationMutation(*local_150 - lVar8,puVar7);
          }
          lVar9 = *(long *)(local_158 + (long)local_1f8 * 8);
          local_120 = lVar9;
          _NSClassFromString();
          if (lVar9 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_f4 = 1;
            local_c0 = lVar9;
            goto LAB_01792c20;
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_b8,
                   0x10);
        local_1f8 = (undefined *)0x0;
      } while (local_1f0 != (undefined *)0x0);
    }
    local_f4 = 0;
LAB_01792c20:
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if (local_f4 == 0) {
      local_c0 = 0;
      local_f4 = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

