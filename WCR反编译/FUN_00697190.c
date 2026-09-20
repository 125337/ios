// FUN_00697190 @ 00697190

void FUN_00697190(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  char *local_d8;
  uint local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UISearchBar_026ce298;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UISearchBar_026ce298,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar5 = local_b8;
    if ((uVar2 & 1) == 0) {
      pcVar3 = "MMUISearchBar";
      _objc_getClass();
      local_d8 = pcVar3;
      if ((pcVar3 == (char *)0x0) ||
         (uVar5 = local_b8,
         (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,pcVar3),
         uVar2 = local_b8, (uVar5 & 1) == 0)) {
        _memset(auStack_120,0,0x40);
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_180 != 0) {
          lVar4 = *local_110;
          local_188 = 0;
          do {
            do {
              if (*local_110 - lVar4 != 0) {
                _objc_enumerationMutation(*local_110 - lVar4,uVar2);
              }
              uVar5 = *(ulong *)(local_118 + local_188 * 8);
              local_e0 = uVar5;
              FUN_00697190();
              _objc_retainAutoreleasedReturnValue();
              local_128 = uVar5;
              if (uVar5 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar5;
              }
              local_bc = (uint)(uVar5 != 0);
              _objc_storeStrong(&local_128,0);
              if (local_bc != 0) goto LAB_006974d8;
              local_188 = local_188 + 1;
            } while (local_188 < local_180);
            local_180 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_188 = 0;
          } while (local_180 != 0);
        }
        local_bc = 0;
LAB_006974d8:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_bc == 0) {
          local_b0 = 0;
          local_bc = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
        local_bc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar5;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

