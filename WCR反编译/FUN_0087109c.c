// FUN_0087109c @ 0087109c

void FUN_0087109c(undefined8 param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_198;
  ulong local_190;
  uint local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  byte local_d1;
  ulong local_d0 [3];
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    FUN_00871048();
    if (((ulong)puVar1 & 1) == 0) {
      local_b4 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      if (((ulong)puVar2 & 1) == 0) {
        local_b4 = 1;
      }
      else {
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_d0[0] = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_isEqualToString__0269ccc8,&cf__UITAMICAdaptorView);
        local_140 = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_d0[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0[0],PTR_s_isEqualToString__0269ccc8,&cf_MMBarButton);
          local_140 = 1;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_d0[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0[0],PTR_s_containsString__0269d0b0,&cf_MainFrameLeftBarView);
            local_140 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_d0[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0[0],PTR_s_containsString__0269d0b0,&cf_RightTopMenu);
              local_140 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_d0[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d0[0],PTR_s_containsString__0269d0b0,&cf_NavigationBarButton);
                local_140 = (uint)uVar3;
              }
            }
          }
        }
        uVar3 = local_b0;
        local_d1 = (byte)local_140 & 1;
        if ((local_140 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((uVar3 & 1) != 0) && (uVar3 = local_b0, FUN_008715a0(), (uVar3 & 1) != 0)) &&
             (uVar3 = local_b0, FUN_00871894(), (uVar3 & 1) != 0)) {
            local_d1 = 1;
          }
        }
        if ((local_d1 & 1) != 0) {
          FUN_00872320(local_b0,&cf_refresh);
        }
        _memset(auStack_120,0,0x40);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_190 != 0) {
          lVar4 = *local_110;
          local_198 = 0;
          do {
            do {
              if (*local_110 - lVar4 != 0) {
                _objc_enumerationMutation(*local_110 - lVar4,uVar3);
              }
              local_e0 = *(undefined8 *)(local_118 + local_198 * 8);
              FUN_0087109c(local_e0);
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_198 = 0;
          } while (local_190 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(local_d0,0);
        local_b4 = 0;
      }
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

