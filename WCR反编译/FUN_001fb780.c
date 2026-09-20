// FUN_001fb780 @ 001fb780

void FUN_001fb780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  ulong local_278;
  ulong local_270;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  double local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  double local_158;
  undefined8 local_150;
  undefined4 local_148;
  ulong local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar3 = local_138;
  if (local_138 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      local_150 = 0;
      dVar7 = -1.7976931348623157e+308;
      local_158 = -1.7976931348623157e+308;
      _memset(auStack_1a0,0,0x40);
      uVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_228 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_228 != 0) {
        lVar5 = *local_190;
        local_230 = 0;
        do {
          do {
            if (*local_190 - lVar5 != 0) {
              _objc_enumerationMutation(*local_190 - lVar5,uVar3);
            }
            local_160 = *(ulong *)(local_198 + local_230 * 8);
            FUN_001fbc8c(local_160);
            local_1a8 = dVar7;
            if (local_158 < dVar7) {
              local_158 = dVar7;
              _objc_storeStrong(&local_150,local_160);
            }
            _memset(auStack_1f0,0,0x40);
            uVar4 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_270 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_270 != 0) {
              lVar6 = *local_1e0;
              local_278 = 0;
              do {
                do {
                  if (*local_1e0 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar6,uVar4);
                  }
                  local_1b0 = *(undefined8 *)(local_1e8 + local_278 * 8);
                  FUN_001fbc8c(local_1b0);
                  local_1a8 = dVar7;
                  if (local_158 < dVar7) {
                    local_158 = dVar7;
                    _objc_storeStrong(&local_150,local_1b0);
                  }
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_278 = 0;
              } while (local_270 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_230 = 0;
        } while (local_228 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar1 = local_150;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = uVar1;
      local_148 = 1;
      _objc_storeStrong(&local_150,0);
      goto LAB_001fbc2c;
    }
  }
  local_130 = 0;
  local_148 = 1;
LAB_001fbc2c:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

