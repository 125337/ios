// FUN_002055d8 @ 002055d8

void FUN_002055d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
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
    _memset(auStack_108,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar4 = *local_f8;
      local_140 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_100 + local_140 * 8);
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar1 = local_c8;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar1;
            local_bc = 1;
            goto LAB_0020582c;
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    local_bc = 0;
LAB_0020582c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      local_b0 = 0;
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

