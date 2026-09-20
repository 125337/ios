// FUN_000e91c8 @ 000e91c8

void FUN_000e91c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  double local_d8;
  long local_d0;
  undefined4 local_c8;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else {
    local_d0 = 0;
    dVar5 = -1.7976931348623157e+308;
    local_d8 = -1.7976931348623157e+308;
    _memset(auStack_120,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != 0) {
      lVar3 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_118 + local_188 * 8);
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
            _CGRectGetMaxX();
            if ((local_d0 == 0) || (local_d8 < dVar5)) {
              _objc_storeStrong(&local_d0,local_e0);
              local_d8 = dVar5;
            }
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    lVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar3;
    local_c8 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

