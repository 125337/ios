// isUsernameInSidebarList: @ 015fd6fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRQuickChatRuntime::isUsernameInSidebarList_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ID IVar4;
  ID IVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_190;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  long local_110;
  undefined1 *local_108;
  undefined *local_100;
  ID local_f8;
  undefined1 *local_f0;
  char *local_e8;
  byte local_d9;
  undefined1 *local_d8;
  int local_cc;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_quickChatDisplayMode_026b16c8);
    local_d9 = puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    pcVar2 = "MMNewSessionMgr";
    _objc_getClass();
    FUN_015f9a60();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar2;
    FUN_015f9c44(pcVar2);
    puVar3 = local_d8;
    FUN_015fbd78(local_d8,local_e8,1);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b8;
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_temporarilyHiddenUsernames_026b1630);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f8 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar6 = local_f0;
    FUN_015fd124(local_f0,local_d8,local_e8,local_f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_f0;
    local_f0 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_quickChatRemovedUsernames_026b1608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_d9 & 1) == 0) {
      local_190 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_quickChatRecentLimit_026b1708);
    }
    else {
      local_190 = (undefined1 *)0x0;
    }
    local_108 = local_190;
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_quickChatSeparateSessions_026b13b8);
    if (((ulong)puVar3 & 1) != 0) {
      local_108 = (undefined1 *)0x0;
    }
    local_110 = 0;
    _memset(auStack_158,0,0x40);
    puVar3 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_1b0 != (undefined1 *)0x0) {
      lVar8 = *local_148;
      local_1b8 = (undefined1 *)0x0;
      do {
        do {
          if (*local_148 - lVar8 != 0) {
            _objc_enumerationMutation(*local_148 - lVar8,puVar3);
          }
          uVar9 = *(ulong *)(local_150 + (long)local_1b8 * 8);
          local_118 = uVar9;
          if ((0 < (long)local_108) && ((long)local_108 <= local_110)) {
            local_cc = 2;
            goto LAB_015fdc5c;
          }
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_length_0269cca0);
          if ((((uVar9 != 0) &&
               (IVar4 = local_f8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f8,PTR_s_containsObject__0269cbb8,local_118), (IVar4 & 1) == 0)) &&
              (puVar1 = local_100,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_containsObject__0269cbb8,local_118),
              ((ulong)puVar1 & 1) == 0)) &&
             (((local_d9 & 1) != 0 ||
              (pcVar2 = local_e8, FUN_015fa900(local_e8,local_118), ((ulong)pcVar2 & 1) == 0)))) {
            uVar9 = local_118;
            FUN_015fab58();
            _objc_retainAutoreleasedReturnValue();
            local_160 = uVar9;
            FUN_015fac64();
            uVar7 = local_118;
            FUN_015fada0(local_118,local_160,(byte)uVar9 & 1,local_d8);
            if ((uVar7 & 1) == 0) {
              local_cc = 3;
            }
            else {
              local_110 = local_110 + 1;
              uVar9 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_isEqualToString__0269ccc8,local_c8);
              if ((uVar9 & 1) == 0) {
                local_cc = 0;
              }
              else {
                FUN_015fd674();
                local_a9 = 1;
                local_cc = 1;
              }
            }
            _objc_storeStrong(&local_160,0);
            if ((local_cc != 0) && (local_cc != 3)) goto LAB_015fdc5c;
          }
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_1b8 = (undefined1 *)0x0;
      } while (local_1b0 != (undefined1 *)0x0);
    }
    local_cc = 0;
LAB_015fdc5c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_cc == 0) || (local_cc == 2)) {
      FUN_015fd674(0);
      local_a9 = 0;
      local_cc = 1;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

