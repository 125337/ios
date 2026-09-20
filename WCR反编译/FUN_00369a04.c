// FUN_00369a04 @ 00369a04

void FUN_00369a04(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_1d8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_190;
  long local_150;
  byte local_141;
  long local_140;
  byte local_131;
  long local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b0;
  FUN_003612b8(local_b0,&cf_m_mainFrameLogicController);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_wcrGrouping_onLogicHideSession_;
  local_c0 = uVar1;
  _NSSelectorFromString();
  pcVar3 = &cf_hideSession_;
  local_c8 = pcVar2;
  _NSSelectorFromString();
  local_d1 = 0;
  local_d0 = pcVar3;
  _memset(auStack_120,0,0x40);
  if (local_b8 == 0) {
    local_190 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_190 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = local_190;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1a8 != 0) {
    lVar5 = *local_110;
    local_1b0 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,local_190);
        }
        lVar6 = *(long *)(local_118 + local_1b0 * 8);
        local_e0 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        local_131 = 0;
        local_141 = 0;
        local_1d8 = lVar6;
        if (lVar6 == 0) {
          local_1d8 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = local_1d8;
          FUN_00366324();
          _objc_retainAutoreleasedReturnValue();
          local_140 = local_1d8;
        }
        local_141 = lVar6 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_1d8;
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        (*(code *)PTR__objc_release_02578630)(lVar6);
        lVar6 = local_128;
        lVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        FUN_003668c8();
        _objc_retainAutoreleasedReturnValue();
        local_150 = lVar6;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (local_150 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setSession__0269d2e0,local_150);
          uVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_respondsToSelector__026ca818,local_c8);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_respondsToSelector__026ca818,local_d0);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_d0,local_150);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_c8,local_150);
          }
          FUN_003a6ea0(local_128);
          local_d1 = 1;
        }
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_128,0);
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                 0x10);
      local_1b0 = 0;
    } while (local_1a8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_190);
  if ((local_d1 & 1) != 0) {
    FUN_003736ec(local_b0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

