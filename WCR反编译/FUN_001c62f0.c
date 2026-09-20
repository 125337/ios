// FUN_001c62f0 @ 001c62f0

void FUN_001c62f0(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined4 local_c4;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c8c80)(param_1,param_2);
  FUN_00204478();
  if (((param_1 & 1) != 0) || (FUN_00204514(), (param_1 & 1) != 0)) {
    uVar2 = local_b0;
    FUN_002055d8();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    if (uVar2 == 0) {
      local_c4 = 1;
    }
    else {
      FUN_002045b0();
      uVar1 = (uint)uVar2;
      FUN_00204514();
      if ((uVar1 & 1) != 0) {
        if (DAT_028c9180 == (cfstringStruct *)0x0) {
          pcVar3 = &cf_UIVisualEffectView;
          _NSClassFromString();
          DAT_028c9180 = pcVar3;
        }
        if (DAT_028c9180 != (cfstringStruct *)0x0) {
          _memset(auStack_120,0,0x40);
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_150 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_150 != 0) {
            lVar4 = *local_110;
            local_158 = 0;
            do {
              do {
                if (*local_110 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_110 - lVar4,uVar2);
                }
                uVar5 = *(ulong *)(local_118 + local_158 * 8);
                local_e0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_isKindOfClass__0269cd68,DAT_028c9180);
                if (((uVar5 & 1) != 0) &&
                   (uVar5 = local_e0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isHidden_026ca768),
                   (uVar5 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,1);
                }
                local_158 = local_158 + 1;
              } while (local_158 < local_150);
              local_150 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,
                         auStack_a8,0x10);
              local_158 = 0;
            } while (local_150 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      local_c4 = 0;
    }
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

