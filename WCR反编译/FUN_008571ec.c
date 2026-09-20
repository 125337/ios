// FUN_008571ec @ 008571ec

void FUN_008571ec(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cd4b6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    local_c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_c8;
    if ((uVar1 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != 0) {
        lVar4 = *local_110;
        local_170 = 0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_118 + local_170 * 8);
            puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
            local_e0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            uVar1 = local_e0;
            if ((uVar5 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar1;
              local_bc = 1;
              goto LAB_008574fc;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_bc = 0;
LAB_008574fc:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_bc == 0) {
        local_b0 = 0;
        local_bc = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
      local_bc = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

