// FUN_0165ffb4 @ 0165ffb4

void FUN_0165ffb4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  uint local_bc;
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
    uVar4 = local_b8;
    _objc_getAssociatedObject(local_b8,DAT_028c6090);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_c8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_c8;
    if ((uVar4 & 1) == 0) {
      _memset(auStack_110,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_148 != 0) {
        lVar3 = *local_100;
        local_150 = 0;
        do {
          do {
            if (*local_100 - lVar3 != 0) {
              _objc_enumerationMutation(*local_100 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_108 + local_150 * 8);
            puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_d0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar4 & 1) != 0) {
              uVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              local_118 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar4;
              }
              local_bc = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_118,0);
              if (local_bc != 0) goto LAB_01660280;
            }
            local_150 = local_150 + 1;
          } while (local_150 < local_148);
          local_148 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                     0x10);
          local_150 = 0;
        } while (local_148 != 0);
      }
      local_bc = 0;
LAB_01660280:
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

