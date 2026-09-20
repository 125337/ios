// FUN_008d410c @ 008d410c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008d410c(undefined8 param_1,double param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double local_310;
  ulong local_238;
  ulong local_230;
  ulong local_208;
  ulong local_1e8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  double local_f0;
  ulong local_e8;
  int local_dc;
  ulong local_d8 [3];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  local_1e8 = local_b8;
  FUN_008d4b28();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_b8;
  local_c0 = local_1e8;
  if (local_1e8 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_208 = 0;
    }
    else {
      local_208 = local_b8;
    }
    local_1e8 = local_208;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8[0] = local_1e8;
  if (local_1e8 == 0) {
    local_b0 = 0;
    local_dc = 1;
  }
  else {
    local_e8 = 0;
    local_310 = -1.0;
    local_f0 = -1.0;
    _memset(auStack_138,0,0x40);
    uVar3 = local_d8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_230 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_230 != 0) {
      lVar5 = *local_128;
      local_238 = 0;
      do {
        do {
          dVar7 = local_310;
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,uVar3);
            dVar7 = local_310;
          }
          uVar6 = *(ulong *)(local_130 + local_238 * 8);
          puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
          local_f8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_310 = dVar7;
          if (((uVar6 & 1) != 0) &&
             (uVar6 = local_b8, FUN_008d5050(local_b8,local_f8), local_310 = dVar7, (uVar6 & 1) == 0
             )) {
            uVar1 = (uint)local_f8;
            FUN_008d48e4();
            local_310 = dVar7;
            if (((uVar1 & 1) != 0) &&
               (uVar6 = local_f8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f8,PTR_s_isUserInteractionEnabled_026ca770), local_310 = dVar7,
               (uVar6 & 1) != 0)) {
              uVar6 = local_f8;
              FUN_008d5648();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar6;
              FUN_008d54bc();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              uVar6 = local_f8;
              if ((uVar4 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar6;
                local_dc = 1;
                goto LAB_008d47b8;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
              _CGRectGetMaxX();
              dVar8 = dVar7;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
              _CGRectGetWidth();
              local_310 = dVar8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
              _CGRectGetHeight(local_310,param_2);
              if (dVar8 < local_310) {
                local_310 = dVar8;
              }
              param_2 = 24.0;
              if (24.0 <= local_310) {
                param_2 = 44.0;
              }
              if ((24.0 <= local_310 && local_310 <= 44.0) &&
                 (local_310 = dVar7, param_2 = local_f0, local_f0 <= dVar7)) {
                _objc_storeStrong(&local_e8,local_f8);
                param_2 = local_f0;
                local_f0 = dVar7;
              }
            }
          }
          local_238 = local_238 + 1;
        } while (local_238 < local_230);
        local_230 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_238 = 0;
      } while (local_230 != 0);
    }
    local_dc = 0;
LAB_008d47b8:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_e8;
    if (local_dc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

