// FUN_016d3aa8 @ 016d3aa8

void FUN_016d3aa8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_258;
  ulong local_228;
  ulong local_220;
  char *local_1e0;
  char *local_1b8;
  char *local_170;
  char *local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  undefined *local_110;
  bool local_101;
  char *local_100;
  char *local_f8;
  bool local_e9;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  FUN_016d2674();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c0 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b0 = puVar3;
  }
  else {
    local_1b8 = "MMServiceCenter";
    _objc_getClass();
    local_e9 = false;
    bVar1 = local_1b8 == (char *)0x0;
    local_d8 = local_1b8;
    if (bVar1) {
      local_1b8 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = local_1b8;
    }
    local_e9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_1b8;
    if ((local_e9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    local_1e0 = local_e0;
    local_101 = false;
    bVar1 = local_e0 == (char *)0x0;
    if (bVar1) {
      local_1e0 = (char *)0x0;
    }
    else {
      pcVar4 = "CMessageMgr";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_getService__0269d170,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_1e0;
    }
    local_101 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1e0;
    if ((local_101 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f8 == (char *)0x0) ||
       (pcVar4 = local_f8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       ((ulong)pcVar4 & 1) == 0)) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = 1;
      local_b0 = puVar3;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar3;
      _memset(auStack_158,0,0x40);
      uVar2 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      if (local_220 != 0) {
        lVar5 = *local_148;
        local_228 = 0;
        do {
          do {
            if (*local_148 - lVar5 != 0) {
              _objc_enumerationMutation(*local_148 - lVar5,uVar2);
            }
            uVar6 = *(ulong *)(local_150 + local_228 * 8);
            local_118 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
            if ((uVar6 & 1) == 0) {
              local_258 = 0;
            }
            else {
              local_258 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_integerValue_026ca750);
            }
            local_160 = local_258;
            if (0 < (long)local_258) {
              pcVar4 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_GetMsg_LocalID__0269d5e8,&cf_filehelper,local_258);
              _objc_retainAutoreleasedReturnValue();
              local_168 = pcVar4;
              FUN_016d45e0();
              _objc_retainAutoreleasedReturnValue();
              local_170 = pcVar4;
              if (pcVar4 != (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,pcVar4);
              }
              _objc_storeStrong(&local_170);
              _objc_storeStrong(&local_168,0);
            }
            local_228 = local_228 + 1;
          } while (local_228 < local_220);
          local_220 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_228 = 0;
        } while (local_220 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_02588250
                );
      puVar3 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_copy_0269d150);
      local_d0 = 1;
      local_b0 = puVar3;
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

