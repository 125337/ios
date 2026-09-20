// FUN_015f6f64 @ 015f6f64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f6f64(undefined8 param_1,undefined8 param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1f0;
  ulong local_1e8;
  uint local_1b4;
  ulong local_1b0;
  byte local_169;
  int local_168;
  byte local_161;
  ulong local_160;
  undefined4 local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  byte local_105;
  int local_104;
  long local_100;
  undefined *local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined *local_e0;
  char *local_d8;
  byte local_c9;
  byte *local_c8;
  int *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b0;
  local_c8 = param_4;
  local_c0 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatDisplayMode_026b16c8);
  local_c9 = uVar2 == 1;
  pcVar3 = "MMNewSessionMgr";
  _objc_getClass();
  FUN_015f9a60();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = pcVar3;
  FUN_015f9c44(pcVar3);
  puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatRemovedUsernames_026b1608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_c9 & 1) == 0) {
    local_1b0 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatRecentLimit_026b1708);
  }
  else {
    local_1b0 = 0;
  }
  local_e8 = local_1b0;
  uVar6 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatSeparateSessions_026b13b8);
  uVar2 = local_b0;
  pcVar3 = local_d8;
  if ((uVar6 & 1) != 0) {
    local_e8 = 0;
  }
  local_1b4 = 1;
  if ((long)local_e8 < 1) {
    uVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatSeparateSessions_026b13b8);
    local_1b4 = (uint)uVar6;
  }
  FUN_015fbd78(uVar2,pcVar3,local_1b4 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar2;
  FUN_015fd124(uVar2,local_b0,local_d8,local_b8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_f0;
  local_f0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_100 = 0;
  local_104 = 0;
  local_105 = 0;
  local_f8 = puVar4;
  _memset(auStack_150,0,0x40);
  uVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
  if (local_1e8 != 0) {
    lVar5 = *local_140;
    local_1f0 = 0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,uVar2);
        }
        uVar6 = *(ulong *)(local_148 + local_1f0 * 8);
        local_110 = uVar6;
        if ((0 < (long)local_e8) && ((long)local_e8 <= local_100)) {
          local_154 = 2;
          goto LAB_015f7504;
        }
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
        if ((((uVar6 != 0) &&
             (puVar4 = local_f8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_f8,PTR_s_containsObject__0269cbb8,local_110), ((ulong)puVar4 & 1) == 0
             )) && (uVar6 = local_b8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_b8,PTR_s_containsObject__0269cbb8,local_110), (uVar6 & 1) == 0))
           && ((puVar4 = local_e0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e0,PTR_s_containsObject__0269cbb8,local_110),
               ((ulong)puVar4 & 1) == 0 &&
               (((local_c9 & 1) != 0 ||
                (pcVar3 = local_d8, FUN_015fa900(local_d8,local_110), ((ulong)pcVar3 & 1) == 0))))))
        {
          uVar6 = local_110;
          FUN_015fab58();
          _objc_retainAutoreleasedReturnValue();
          local_160 = uVar6;
          FUN_015fac64();
          local_161 = (byte)uVar6;
          uVar6 = local_110;
          FUN_015fada0(local_110,local_160,local_161 & 1,local_b0);
          if ((uVar6 & 1) == 0) {
            local_154 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_110);
            local_100 = local_100 + 1;
            local_168 = 0;
            local_169 = 0;
            FUN_015fb13c(local_110,local_161 & 1,&local_168,&local_169);
            if (local_168 == 0) {
              local_154 = 3;
            }
            else {
              if ((local_169 & 1) == 0) {
                local_104 = local_104 + local_168;
              }
              else {
                local_105 = 1;
              }
              local_154 = 0;
            }
          }
          _objc_storeStrong(&local_160,0);
        }
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
  local_154 = 0;
LAB_015f7504:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_quickChatBallMutedRedDot_026b17e8);
  if ((uVar2 & 1) == 0) {
    local_105 = 0;
  }
  if (local_c0 != (int *)0x0) {
    *local_c0 = local_104;
  }
  if (local_c8 != (byte *)0x0) {
    bVar1 = 0;
    if (local_104 == 0) {
      bVar1 = local_105;
    }
    *local_c8 = bVar1 & 1;
  }
  FUN_015fd674();
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

