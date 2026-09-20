// FUN_008bb29c @ 008bb29c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008bb29c(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_258;
  ulong local_208;
  ulong local_200;
  ulong local_1c0;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  byte local_101;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  char *local_d8;
  uint local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar5 = local_b8;
  FUN_008bcf38();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar5;
  if (uVar5 == 0) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    uVar5 = local_c0;
    local_d8 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = uVar5;
    for (local_e8 = 0; local_e0 != 0 && local_e8 < 8; local_e8 = local_e8 + 1) {
      if ((local_d8 != (char *)0x0) &&
         (uVar5 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,local_d8),
         (uVar5 & 1) != 0)) {
        uVar5 = local_e0;
        FUN_008bd480();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = uVar5;
        if (uVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
        }
        local_d0 = (uint)(uVar5 != 0);
        _objc_storeStrong(&local_f0,0);
        if (local_d0 != 0) goto LAB_008bba04;
      }
      uVar5 = local_e0;
      local_101 = 0;
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar5 & 1) == 0) {
        local_1c0 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        local_100 = local_1c0;
      }
      else {
        local_1c0 = local_e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_1c0;
      if ((local_101 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      _memset(auStack_150,0,0x40);
      uVar5 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_200 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      if (local_200 != 0) {
        lVar4 = *local_140;
        local_208 = 0;
        do {
          do {
            if (*local_140 - lVar4 != 0) {
              _objc_enumerationMutation(*local_140 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_148 + local_208 * 8);
            local_110 = uVar5;
            if ((local_d8 != (char *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_d8),
               (uVar5 & 1) != 0)) {
              uVar5 = local_110;
              FUN_008bd480();
              _objc_retainAutoreleasedReturnValue();
              local_158 = uVar5;
              if (uVar5 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar5;
              }
              local_d0 = (uint)(uVar5 != 0);
              _objc_storeStrong(&local_158,0);
              if (local_d0 != 0) goto LAB_008bb874;
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      local_d0 = 0;
LAB_008bb874:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_d0 == 0) {
        uVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        local_258 = uVar5;
        if (uVar5 == 0) {
          local_160 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          local_258 = local_160;
        }
        _objc_storeStrong(&local_e0,local_258);
        if (uVar5 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_160);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_d0 = 0;
      }
      _objc_storeStrong(&local_f8,0);
      if (local_d0 != 0) goto LAB_008bba04;
    }
    local_b0 = 0;
    local_d0 = 1;
LAB_008bba04:
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

