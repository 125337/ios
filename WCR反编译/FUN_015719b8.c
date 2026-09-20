// FUN_015719b8 @ 015719b8

byte FUN_015719b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_190;
  ulong local_188;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar4 = local_b8;
    FUN_01566074(local_b8,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar4;
    FUN_01566074(uVar4,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_d8 = uVar3;
    if (uVar3 - 0x1a == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fN_ec_lS);
      local_a9 = 1;
      local_c4 = 1;
    }
    else {
      uVar4 = local_b8;
      FUN_015731c4(uVar3 - 0x1a);
      if (((uVar4 & 1) == 0) && (local_d8 != 1)) {
        local_d9 = true;
        if ((((local_d8 != 3) && (local_d9 = true, local_d8 != 5)) &&
            (local_d9 = true, local_d8 != 6)) &&
           ((local_d9 = true, local_d8 != 0x18 && (local_d9 = true, local_d8 != 0x2a)))) {
          local_d9 = local_d8 == 0x2b;
        }
        uVar4 = local_d0;
        FUN_01566074(local_d0,&cf_mediaList);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 0;
        local_e8 = uVar4;
        _memset(auStack_138,0,0x40);
        uVar4 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_188 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        if (local_188 != 0) {
          lVar2 = *local_128;
          local_190 = 0;
          do {
            do {
              if (*local_128 - lVar2 != 0) {
                _objc_enumerationMutation(*local_128 - lVar2,uVar4);
              }
              uVar3 = *(ulong *)(local_130 + local_190 * 8);
              local_f8 = uVar3;
              FUN_01573a0c();
              if ((uVar3 & 1) == 0) {
                uVar3 = local_f8;
                FUN_01566074(local_f8,&cf_type);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar3);
                if ((uVar1 == 2) || (uVar1 == 5)) {
                  local_e9 = 1;
                  local_c4 = 2;
                  goto LAB_01571da4;
                }
              }
              local_190 = local_190 + 1;
            } while (local_190 < local_188);
            local_188 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            local_190 = 0;
          } while (local_188 != 0);
        }
        local_c4 = 0;
LAB_01571da4:
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if ((((local_e9 & 1) == 0) && (uVar4 = local_d8 - 0xf, uVar4 != 0)) ||
           (uVar4 = (ulong)local_d9, (local_d9 & 1) != 0)) {
          uVar3 = local_b8;
          FUN_015733c4(uVar4,local_b8,local_c0);
          local_a9 = (byte)uVar3;
        }
        else {
          uVar4 = local_b8;
          FUN_01573b44(local_b8,local_c0);
          local_a9 = (byte)uVar4;
        }
        local_a9 = local_a9 & 1;
        local_c4 = 1;
        _objc_storeStrong(&local_e8,0);
      }
      else {
        uVar4 = local_b8;
        FUN_015733c4(local_b8,local_c0);
        local_a9 = (byte)uVar4 & 1;
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

