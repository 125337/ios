// session:matchesCustomTab:username: @ 01520904

/* Function Stack Size: 0x28 bytes */

bool WCRefineTelegramGroupingStore::session_matchesCustomTab_username_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  int local_dc;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  uVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (((uVar6 == 0) ||
      (IVar1 = local_b8,
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasVisiblePrivateFriendTab_026b0280),
      (IVar1 & 1) == 0)) ||
     (puVar2 = PTR_WCRefinePrivateFriendManager_026ce160,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_isSelectedUsername__026afed0,
                local_d8), ((ulong)puVar2 & 1) == 0)) {
    uVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      _memset(auStack_130,0,0x40);
      IVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_linkedGroupsForTab__026a2bc8,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_170 != 0) {
        lVar5 = *local_120;
        local_178 = 0;
        do {
          do {
            if (*local_120 - lVar5 != 0) {
              _objc_enumerationMutation(*local_120 - lVar5,IVar1);
            }
            uVar6 = *(ulong *)(local_128 + local_178 * 8);
            local_f0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_kind_026a27e8);
            if (uVar6 == 0) {
              uVar6 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_members_0269ea98);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((uVar3 & 1) != 0) {
                local_a9 = 1;
                local_dc = 1;
                goto LAB_01520e78;
              }
            }
            else {
              uVar6 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_kind_026a27e8);
              if ((uVar6 == 3) &&
                 (uVar6 = local_f0,
                 (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90), uVar6 == 2))
              {
                uVar6 = local_d8;
                FUN_01520f2c(0,local_d8,local_c8);
                if ((uVar6 & 1) != 0) {
                  local_a9 = 1;
                  local_dc = 1;
                  goto LAB_01520e78;
                }
              }
              else {
                uVar6 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90);
                if (uVar6 == 0x20) {
                  uVar6 = local_c8;
                  FUN_0152119c(0,local_c8,&cf_m_bIsTop);
                  if ((uVar6 & 1) != 0) {
                    local_a9 = 1;
                    local_dc = 1;
                    goto LAB_01520e78;
                  }
                }
                else {
                  uVar6 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90);
                  if (uVar6 == 0x40) {
                    puVar2 = local_e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e8,PTR_s_shouldCollectNativeSessionInUnre_026a2e40,local_c8);
                    if (((ulong)puVar2 & 1) != 0) {
                      local_a9 = 1;
                      local_dc = 1;
                      goto LAB_01520e78;
                    }
                  }
                  else {
                    uVar6 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90);
                    if (uVar6 == 0x80) {
                      IVar4 = local_b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_b8,PTR_s_sessionHasAtMeHint_username__026b0288,local_c8,
                                 local_d8);
                      if ((IVar4 & 1) != 0) {
                        local_a9 = 1;
                        local_dc = 1;
                        goto LAB_01520e78;
                      }
                    }
                    else {
                      puVar2 = local_e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e8,PTR_s_groupScopeForNativeSession__026a2c60,local_c8);
                      uVar6 = local_f0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90);
                      if (((ulong)puVar2 & uVar6 & 0x1f) != 0) {
                        local_a9 = 1;
                        local_dc = 1;
                        goto LAB_01520e78;
                      }
                    }
                  }
                }
              }
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      local_dc = 0;
LAB_01520e78:
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_dc == 0) {
        local_a9 = 0;
        local_dc = 1;
      }
      _objc_storeStrong(&local_e8,0);
    }
    else {
      local_a9 = 1;
      local_dc = 1;
    }
  }
  else {
    local_a9 = 0;
    local_dc = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

