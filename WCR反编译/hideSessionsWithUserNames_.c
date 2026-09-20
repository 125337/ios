// hideSessionsWithUserNames: @ 00169444

/* Function Stack Size: 0x18 bytes */

bool WCRefineClearSessionHook::hideSessionsWithUserNames_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  char *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  long lVar8;
  long lVar9;
  ulong local_1c8;
  ulong local_1c0;
  ID local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  long local_130;
  long local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  ID local_e8;
  ID local_e0;
  ID local_d8;
  undefined4 local_cc;
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
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mainFrameViewController_0269f7f0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_b8;
    pcVar3 = "MMNewSessionMgr";
    local_d8 = IVar2;
    _objc_getClass("MMNewSessionMgr");
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_serviceOfClass__0269f7e0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = 0;
    IVar2 = local_d8;
    local_e0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_valueForKey__0269d128,&cf_m_mainFrameLogicController);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_e8;
    local_e8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    pcVar5 = &cf_onLogicHideSession_;
    _NSSelectorFromString();
    pcVar6 = &cf_hideSession_;
    local_108 = pcVar5;
    _NSSelectorFromString();
    pcVar7 = &cf_hideSession_;
    local_110 = pcVar6;
    _NSSelectorFromString();
    pcVar5 = &cf_GetSessionByUserName_;
    local_118 = pcVar7;
    _NSSelectorFromString();
    local_128 = 0;
    local_120 = pcVar5;
    _memset(auStack_170,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar8 = *local_160;
      local_1c8 = 0;
      do {
        do {
          if (*local_160 - lVar8 != 0) {
            _objc_enumerationMutation(*local_160 - lVar8,uVar1);
          }
          lVar9 = *(long *)(local_168 + local_1c8 * 8);
          local_130 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
          if (lVar9 != 0) {
            local_178 = 0;
            if ((local_e0 != 0) &&
               (IVar4 = local_e0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e0,PTR_s_respondsToSelector__026ca818,local_120), (IVar4 & 1) != 0))
            {
              IVar2 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_120,local_130);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = local_178;
              local_178 = IVar2;
              (*(code *)PTR__objc_release_02578630)(IVar4);
            }
            if (local_178 == 0) {
              local_cc = 4;
            }
            else {
              if ((local_d8 == 0) ||
                 (IVar4 = local_d8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_d8,PTR_s_respondsToSelector__026ca818,local_108), (IVar4 & 1) == 0
                 )) {
                if ((local_e8 == 0) ||
                   (IVar4 = local_e8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_e8,PTR_s_respondsToSelector__026ca818,local_110),
                   (IVar4 & 1) == 0)) {
                  if ((local_e0 != 0) &&
                     (IVar4 = local_e0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_e0,PTR_s_respondsToSelector__026ca818,local_118),
                     (IVar4 & 1) != 0)) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_118,local_178);
                    local_128 = local_128 + 1;
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_110,local_178);
                  local_128 = local_128 + 1;
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_108,local_178);
                local_128 = local_128 + 1;
              }
              local_cc = 0;
            }
            _objc_storeStrong(&local_178,0);
          }
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_a9 = local_128 != 0;
    local_cc = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

