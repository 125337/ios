// FUN_0087e34c @ 0087e34c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0087e34c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint local_324;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_270;
  ulong local_268;
  long local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  long local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  ulong local_158;
  byte local_14d;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
  }
  else if ((DAT_028cd8a8 & 1) == 0) {
    DAT_028cd8a8 = 1;
    uVar1 = local_130;
    FUN_0087ed34();
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar1;
    if (uVar1 == 0) {
      DAT_028cd8a8 = 0;
      local_134 = 1;
    }
    else {
      local_14d = (byte)local_130;
      FUN_0087f240();
      uVar1 = local_140;
      FUN_0087f5a4();
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar1;
      _memset(auStack_1a0,0,0x40);
      uVar1 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_268 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      if (local_268 != 0) {
        lVar5 = *local_190;
        local_270 = 0;
        do {
          do {
            if (*local_190 - lVar5 != 0) {
              _objc_enumerationMutation(*local_190 - lVar5,uVar1);
            }
            uVar8 = *(ulong *)(local_198 + local_270 * 8);
            local_160 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar8;
            FUN_0087fb64();
            _objc_retainAutoreleasedReturnValue();
            local_1a8 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar2 = local_1a8;
            FUN_0088011c();
            if ((uVar2 & 1) == 0) {
              local_134 = 3;
            }
            else {
              uVar2 = local_160;
              FUN_008802e8(local_160,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_1b0 = uVar2;
              if (uVar2 == 0) {
                local_134 = 3;
              }
              else {
                uVar2 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_isEqualToString__0269ccc8,&cf_phone);
                if ((uVar2 & 1) == 0) {
                  uVar2 = local_1b0;
                  FUN_0087f5a4();
                  _objc_retainAutoreleasedReturnValue();
                  local_1b8 = uVar2;
                  _memset(auStack_200,0,0x40);
                  uVar2 = local_1b8;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_2e0 = uVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                             auStack_128,0x10);
                  if (local_2e0 != 0) {
                    lVar6 = *local_1f0;
                    local_2e8 = 0;
                    do {
                      do {
                        if (*local_1f0 - lVar6 != 0) {
                          _objc_enumerationMutation(*local_1f0 - lVar6,uVar2);
                        }
                        lVar7 = *(long *)(local_1f8 + local_2e8 * 8);
                        local_1c0 = lVar7;
                        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_text_0269ce68);
                        _objc_retainAutoreleasedReturnValue();
                        lVar3 = lVar7;
                        FUN_008825d8();
                        _objc_retainAutoreleasedReturnValue();
                        local_208 = lVar3;
                        (*(code *)PTR__objc_release_02578630)(lVar7);
                        lVar7 = local_208;
                        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0);
                        lVar3 = local_208;
                        local_324 = 1;
                        if (lVar7 != 0) {
                          uVar8 = local_160;
                          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_text_0269ce68);
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar8;
                          FUN_008825d8();
                          _objc_retainAutoreleasedReturnValue();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (lVar3,PTR_s_isEqualToString__0269ccc8);
                          local_324 = (uint)lVar3;
                          (*(code *)PTR__objc_release_02578630)(uVar4);
                          (*(code *)PTR__objc_release_02578630)(uVar8);
                        }
                        if ((local_324 & 1) == 0) {
                          FUN_00882804(local_1c0,local_1a8,local_14d & 1);
                          local_134 = 0;
                        }
                        else {
                          local_134 = 5;
                        }
                        _objc_storeStrong(&local_208,0);
                        local_2e8 = local_2e8 + 1;
                      } while (local_2e8 < local_2e0);
                      local_2e0 = uVar2;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                                 auStack_128,0x10);
                      local_2e8 = 0;
                    } while (local_2e0 != 0);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                  _objc_storeStrong(&local_1b8,0);
                  local_134 = 0;
                }
                else {
                  FUN_008812b4(local_140,local_160,local_14d & 1);
                  local_134 = 3;
                }
              }
              _objc_storeStrong(&local_1b0,0);
            }
            _objc_storeStrong(&local_1a8,0);
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_270 = 0;
        } while (local_268 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_14d & 1) == 0) {
        FUN_00882c9c(local_140,0);
      }
      DAT_028cd8a8 = 0;
      _objc_storeStrong(&local_158,0);
      local_134 = 0;
    }
    _objc_storeStrong(&local_140,0);
  }
  else {
    local_134 = 1;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

