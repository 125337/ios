// FUN_00507da8 @ 00507da8

void FUN_00507da8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_268;
  ulong local_260;
  ulong local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  ulong local_160;
  uint local_158;
  ulong local_148;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_148;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UISearchBar_026ce298;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISearchBar_026ce298,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_148;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = uVar2;
      _memset(auStack_1a8,0,0x40);
      uVar2 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_260 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_260 != 0) {
        lVar4 = *local_198;
        local_268 = 0;
        do {
          do {
            if (*local_198 - lVar4 != 0) {
              _objc_enumerationMutation(*local_198 - lVar4,uVar2);
            }
            local_168 = *(undefined8 *)(local_1a0 + local_268 * 8);
            uVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_wcrefine_findSearchFieldInView__026a4630,local_168);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = uVar3;
            }
            local_158 = (uint)(uVar3 != 0);
            _objc_storeStrong(&local_1b0,0);
            if (local_158 != 0) goto LAB_005080fc;
            local_268 = local_268 + 1;
          } while (local_268 < local_260);
          local_260 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_268 = 0;
        } while (local_260 != 0);
      }
      local_158 = 0;
LAB_005080fc:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_158 == 0) {
        local_158 = 0;
      }
      _objc_storeStrong(&local_160,0);
      if (local_158 != 0) goto LAB_0050837c;
    }
    _memset(auStack_1f8,0,0x40);
    uVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_2b8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2b8 != 0) {
      lVar4 = *local_1e8;
      local_2c0 = 0;
      do {
        do {
          if (*local_1e8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar4,uVar2);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + local_2c0 * 8);
          uVar3 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_wcrefine_findSearchFieldInView__026a4630,local_1b8);
          _objc_retainAutoreleasedReturnValue();
          local_200 = uVar3;
          if (uVar3 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar3;
          }
          local_158 = (uint)(uVar3 != 0);
          _objc_storeStrong(&local_200,0);
          if (local_158 != 0) goto LAB_0050834c;
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        local_2c0 = 0;
      } while (local_2b8 != 0);
    }
    local_158 = 0;
LAB_0050834c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_158 == 0) {
      local_130 = 0;
      local_158 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = uVar3;
    local_158 = 1;
  }
LAB_0050837c:
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

