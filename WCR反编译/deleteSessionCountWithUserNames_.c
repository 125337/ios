// deleteSessionCountWithUserNames: @ 00169abc

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineClearSessionHook::deleteSessionCountWithUserNames_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_190;
  ulong local_188;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  unsigned_long_long local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  ID local_e0;
  ID local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  unsigned_long_long local_b0;
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
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mainFrameViewController_0269f7f0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_valueForKey__0269d128,&cf_m_mainFrameLogicController);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_e0;
    local_e0 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar3 = &cf_onLogicDeleteSessionByUsername_;
    _NSSelectorFromString();
    pcVar4 = &cf_deleteSessionByUsername_;
    local_100 = pcVar3;
    _NSSelectorFromString();
    local_110 = 0;
    local_108 = pcVar4;
    _memset(auStack_158,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar6 = *local_148;
      local_190 = 0;
      do {
        do {
          if (*local_148 - lVar6 != 0) {
            _objc_enumerationMutation(*local_148 - lVar6,uVar1);
          }
          lVar7 = *(long *)(local_150 + local_190 * 8);
          local_118 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 != 0) {
            if ((local_d8 == 0) ||
               (IVar5 = local_d8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_d8,PTR_s_respondsToSelector__026ca818,local_100), (IVar5 & 1) == 0))
            {
              if ((local_e0 != 0) &&
                 (IVar5 = local_e0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_e0,PTR_s_respondsToSelector__026ca818,local_108), (IVar5 & 1) != 0
                 )) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_108,local_118);
                local_110 = local_110 + 1;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_100,local_118);
              local_110 = local_110 + 1;
            }
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b0 = local_110;
    local_cc = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

