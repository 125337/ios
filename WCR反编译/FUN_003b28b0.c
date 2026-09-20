// FUN_003b28b0 @ 003b28b0

byte FUN_003b28b0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  ulong local_120;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    uVar3 = local_b8;
    FUN_003b2b98();
    if ((uVar3 & 1) == 0) {
      _memset(auStack_108,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_120 = uVar3;
      if (uVar3 == 0) {
        local_120 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_138 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      if (local_138 != 0) {
        lVar2 = *local_f8;
        local_140 = 0;
        do {
          do {
            if (*local_f8 - lVar2 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar2,local_120);
            }
            uVar3 = *(ulong *)(local_100 + local_140 * 8);
            local_c8 = uVar3;
            FUN_003b28b0();
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_bc = 1;
              goto LAB_003b2b10;
            }
            local_140 = local_140 + 1;
          } while (local_140 < local_138);
          local_138 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,
                     auStack_a8,0x10);
          local_140 = 0;
        } while (local_138 != 0);
      }
      local_bc = 0;
LAB_003b2b10:
      (*(code *)PTR__objc_release_02578630)(local_120);
      if (local_bc == 0) {
        local_a9 = 0;
        local_bc = 1;
      }
    }
    else {
      local_a9 = 1;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

