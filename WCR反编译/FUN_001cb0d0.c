// FUN_001cb0d0 @ 001cb0d0

void FUN_001cb0d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong local_260;
  ulong local_258;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*DAT_028c8e68)(param_1,param_2);
  uVar1 = local_130;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 != 0) {
    _memset(auStack_198,0,0x40);
    uVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_218 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_218 != 0) {
      lVar4 = *local_188;
      local_220 = 0;
      do {
        do {
          if (*local_188 - lVar4 != 0) {
            _objc_enumerationMutation(*local_188 - lVar4,uVar1);
          }
          local_158 = *(ulong *)(local_190 + local_220 * 8);
          _memset(auStack_1e0,0,0x40);
          uVar2 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_258 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_258 != 0) {
            lVar5 = *local_1d0;
            local_260 = 0;
            do {
              do {
                if (*local_1d0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1d0 - lVar5,uVar2);
                }
                uVar6 = *(ulong *)(local_1d8 + local_260 * 8);
                puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                local_1a0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar6 & 1) != 0) {
                  FUN_0021bf24(local_1a0);
                }
                local_260 = local_260 + 1;
              } while (local_260 < local_258);
              local_258 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                         auStack_128,0x10);
              local_260 = 0;
            } while (local_258 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_220 = 0;
      } while (local_218 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

