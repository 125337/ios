// FUN_015d3554 @ 015d3554

void FUN_015d3554(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2c8;
  ulong local_2c0;
  ulong local_298;
  ulong local_260;
  ulong local_258;
  ulong local_230;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  byte local_1c9;
  ulong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  byte local_1a1;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  ulong local_150;
  byte local_145 [5];
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  uVar1 = local_138;
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
  if ((uVar1 & 1) == 0) {
    local_145[0] = 0;
    uVar1 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_138,local_145);
    if (((uVar1 & 1) == 0) || ((local_145[0] & 1) == 0)) {
      local_145[1] = 1;
      local_145[2] = 0;
      local_145[3] = 0;
      local_145[4] = 0;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_138,0);
      _objc_retainAutoreleasedReturnValue();
      local_230 = uVar1;
      if (uVar1 == 0) {
        local_230 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = local_230;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _memset(auStack_198,0,0x40);
      uVar1 = local_150;
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      if (local_258 != 0) {
        lVar4 = *local_188;
        local_260 = 0;
        do {
          do {
            if (*local_188 - lVar4 != 0) {
              _objc_enumerationMutation(*local_188 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_190 + local_260 * 8);
            local_158 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasPrefix__0269d320,&cf__);
            if (((uVar5 & 1) == 0) &&
               (uVar5 = local_158,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_158,PTR_s_isEqualToString__0269ccc8,&cf__NN_), (uVar5 & 1) == 0)) {
              uVar5 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_stringByAppendingPathComponent__026cab30,local_158);
              _objc_retainAutoreleasedReturnValue();
              local_1a1 = 0;
              uVar2 = *(ulong *)(param_1 + 0x28);
              local_1a0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar5,&local_1a1);
              if (((uVar2 & 1) == 0) || ((local_1a1 & 1) == 0)) {
                local_145[1] = 3;
                local_145[2] = 0;
                local_145[3] = 0;
                local_145[4] = 0;
              }
              else {
                uVar3 = *(undefined8 *)(param_1 + 0x20);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_158);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = *(ulong *)(param_1 + 0x28);
                local_1b0 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_fileExistsAtPath__026ca630,uVar3);
                if ((uVar5 & 1) == 0) {
                  local_1b8 = 0;
                  local_1c0 = 0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (*(undefined8 *)(param_1 + 0x28),
                             PTR_s_moveItemAtPath_toPath_error__0269f940,local_1a0,local_1b0,
                             &local_1c0);
                  _objc_storeStrong(&local_1b8,local_1c0);
                  _objc_storeStrong(&local_1b8,0);
                  local_145[1] = 0;
                  local_145[2] = 0;
                  local_145[3] = 0;
                  local_145[4] = 0;
                }
                else {
                  local_145[1] = 3;
                  local_145[2] = 0;
                  local_145[3] = 0;
                  local_145[4] = 0;
                }
                _objc_storeStrong(&local_1b0,0);
              }
              _objc_storeStrong(&local_1a0,0);
            }
            local_260 = local_260 + 1;
          } while (local_260 < local_258);
          local_258 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_260 = 0;
        } while (local_258 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_138,0);
      _objc_retainAutoreleasedReturnValue();
      local_298 = uVar1;
      if (uVar1 == 0) {
        local_298 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = local_298;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_1c9 = 1;
      _memset(auStack_218,0,0x40);
      uVar1 = local_1c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,0x10)
      ;
      if (local_2c0 != 0) {
        lVar4 = *local_208;
        local_2c8 = 0;
        do {
          do {
            if (*local_208 - lVar4 != 0) {
              _objc_enumerationMutation(*local_208 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_210 + local_2c8 * 8);
            local_1d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasPrefix__0269d320,&cf__);
            if ((uVar5 & 1) == 0) {
              local_1c9 = 0;
              local_145[1] = 8;
              local_145[2] = 0;
              local_145[3] = 0;
              local_145[4] = 0;
              goto LAB_015d3b8c;
            }
            local_2c8 = local_2c8 + 1;
          } while (local_2c8 < local_2c0);
          local_2c0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128,
                     0x10);
          local_2c8 = 0;
        } while (local_2c0 != 0);
      }
      local_145[1] = 0;
      local_145[2] = 0;
      local_145[3] = 0;
      local_145[4] = 0;
LAB_015d3b8c:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_removeItemAtPath_error__0269f910,local_138,
                   0);
      }
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_150,0);
      local_145[1] = 0;
      local_145[2] = 0;
      local_145[3] = 0;
      local_145[4] = 0;
    }
  }
  else {
    local_145[1] = 1;
    local_145[2] = 0;
    local_145[3] = 0;
    local_145[4] = 0;
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

