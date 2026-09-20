// FUN_003b392c @ 003b392c

void FUN_003b392c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar4 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) == 0) {
    local_b4 = 1;
  }
  else {
    _memset(auStack_100,0,0x40);
    uVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_130 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_130 != 0) {
      lVar3 = *local_f0;
      local_138 = 0;
      do {
        do {
          if (*local_f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_f8 + local_138 * 8);
          local_c0 = uVar4;
          FUN_003b2b98();
          if ((uVar4 & 1) == 0) {
            uVar4 = local_c0;
            FUN_003b3bd0();
            if (((uVar4 & 1) == 0) && (uVar4 = local_c0, FUN_003b28b0(), (uVar4 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
            }
            else {
              FUN_003b392c(local_c0);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
          }
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

