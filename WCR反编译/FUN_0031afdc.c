// FUN_0031afdc @ 0031afdc

byte FUN_0031afdc(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_260;
  ulong local_258;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  int local_150;
  ulong *local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_138;
  local_138 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_0031b4e4();
  local_140 = puVar1;
  if ((local_138 == 0) || (puVar1 == (ulong *)0x0)) {
    local_129 = 0;
    local_150 = 1;
  }
  else {
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      _memset(auStack_198,0,0x40);
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_210 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_210 != 0) {
        lVar3 = *local_188;
        local_218 = 0;
        do {
          do {
            if (*local_188 - lVar3 != 0) {
              _objc_enumerationMutation(*local_188 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_190 + local_218 * 8);
            local_158 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,local_140);
            if ((uVar4 & 1) != 0) {
              local_129 = 1;
              local_150 = 1;
              goto LAB_0031b430;
            }
            _memset(auStack_1e0,0,0x40);
            uVar4 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_258 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_258 != 0) {
              lVar5 = *local_1d0;
              local_260 = 0;
              do {
                do {
                  if (*local_1d0 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1d0 - lVar5,uVar4);
                  }
                  uVar6 = *(ulong *)(local_1d8 + local_260 * 8);
                  local_1a0 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isKindOfClass__0269cd68,local_140);
                  if ((uVar6 & 1) != 0) {
                    local_129 = 1;
                    local_150 = 1;
                    goto LAB_0031b39c;
                  }
                  local_260 = local_260 + 1;
                } while (local_260 < local_258);
                local_258 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                           auStack_128,0x10);
                local_260 = 0;
              } while (local_258 != 0);
            }
            local_150 = 0;
LAB_0031b39c:
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if (local_150 != 0) goto LAB_0031b430;
            local_218 = local_218 + 1;
          } while (local_218 < local_210);
          local_210 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_218 = 0;
        } while (local_210 != 0);
      }
      local_150 = 0;
LAB_0031b430:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_150 == 0) {
        local_129 = 0;
        local_150 = 1;
      }
    }
    else {
      local_129 = 1;
      local_150 = 1;
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

