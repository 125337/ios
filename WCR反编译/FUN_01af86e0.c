// FUN_01af86e0 @ 01af86e0

void FUN_01af86e0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  char *local_f0;
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
    local_c8 = 0;
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_headImageView_0269e2a8);
    if ((uVar2 & 1) != 0) {
      uVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_headImageView_0269e2a8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_c8;
      local_c8 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_c8;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      uVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_headImageView);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_c8;
      local_c8 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    pcVar4 = "MMUILongPressImageView";
    _objc_getClass();
    local_f0 = pcVar4;
    if ((pcVar4 == (char *)0x0) ||
       (uVar6 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isKindOfClass__0269cd68,pcVar4),
       uVar2 = local_c8, (uVar6 & 1) == 0)) {
      uVar2 = local_c8;
      puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar6 = local_c8;
      if ((uVar2 & 1) == 0) {
        _memset(auStack_138,0,0x40);
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1a8 != 0) {
          lVar5 = *local_128;
          local_1b0 = 0;
          do {
            do {
              if (*local_128 - lVar5 != 0) {
                _objc_enumerationMutation(*local_128 - lVar5,uVar2);
              }
              uVar6 = *(ulong *)(local_130 + local_1b0 * 8);
              local_f8 = uVar6;
              if ((local_f0 != (char *)0x0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isKindOfClass__0269cd68,local_f0), uVar1 = local_f8,
                 (uVar6 & 1) != 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar1;
                local_bc = 1;
                goto LAB_01af8b60;
              }
              local_1b0 = local_1b0 + 1;
            } while (local_1b0 < local_1a8);
            local_1a8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            local_1b0 = 0;
          } while (local_1a8 != 0);
        }
        local_bc = 0;
LAB_01af8b60:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_bc == 0) {
          local_b0 = 0;
          local_bc = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar6;
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

