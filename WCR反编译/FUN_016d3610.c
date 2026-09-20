// FUN_016d3610 @ 016d3610

void FUN_016d3610(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a0;
  ulong local_198;
  ulong local_158;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  ulong local_d0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar6 = local_b0;
  local_d1 = 0;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar6 & 1) == 0) {
    local_158 = 0;
  }
  else {
    local_158 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_158;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_158;
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  pcVar3 = &cf_WCRefineMessageRepositoryViewController;
  _NSClassFromString();
  local_e0 = pcVar3;
  _memset(auStack_128,0,0x40);
  uVar6 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewControllers_0269e348);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  local_198 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar5 = *local_118;
    local_1a0 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar4);
        }
        uVar6 = *(ulong *)(local_120 + local_1a0 * 8);
        local_e8 = uVar6;
        if ((local_e0 != (cfstringStruct *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,local_e0),
           (uVar6 & 1) != 0)) {
          uVar6 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_popToViewController_animated__0269e4f8,local_e8,1);
          _objc_unsafeClaimAutoreleasedReturnValue(uVar6);
          bVar1 = true;
          goto LAB_016d39d8;
        }
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  bVar1 = false;
LAB_016d39d8:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (!bVar1) {
    uVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_popViewControllerAnimated__0269ede0,1);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar6);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

