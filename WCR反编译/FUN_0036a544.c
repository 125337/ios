// FUN_0036a544 @ 0036a544

void FUN_0036a544(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  long local_1c0;
  ulong local_198;
  ulong local_190;
  ulong local_178;
  long local_138;
  long local_128;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
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
  pcVar2 = &cf_wcrGrouping_onLogicDeleteSessionByUsername_;
  local_c0 = uVar1;
  _NSSelectorFromString();
  pcVar3 = &cf_deleteSessionByUsername_;
  local_c8 = pcVar2;
  _NSSelectorFromString();
  local_d0 = pcVar3;
  _memset(auStack_118,0,0x40);
  if (local_b8 == 0) {
    local_178 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_178 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_190 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_190 != 0) {
    lVar4 = *local_108;
    local_198 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,local_178);
        }
        lVar5 = *(long *)(local_110 + local_198 * 8);
        local_d8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = lVar5;
        if (lVar5 == 0) {
          local_128 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_session_0269d000);
          _objc_retainAutoreleasedReturnValue();
          local_138 = local_128;
          FUN_00366324();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = local_138;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_1c0;
        if (lVar5 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_138);
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        (*(code *)PTR__objc_release_02578630)(lVar5);
        lVar5 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          uVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_respondsToSelector__026ca818,local_c8);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_respondsToSelector__026ca818,local_d0);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_d0,local_120);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_c8,local_120);
          }
        }
        _objc_storeStrong(&local_120,0);
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                 0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_178);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

