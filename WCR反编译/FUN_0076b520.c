// FUN_0076b520 @ 0076b520

byte FUN_0076b520(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
    goto LAB_0076bbf0;
  }
  _WCRefine_getSponsorMsgImgVC();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_d0;
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_c8 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = uVar4;
    if (local_b8 - uVar4 == 0) {
      local_a9 = 1;
      local_c8 = 1;
    }
    else {
      uVar2 = local_b8;
      FUN_0076bfe8(local_b8 - uVar4,local_b8,uVar4);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_e0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar2 & 1) == 0) {
LAB_0076ba34:
          uVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_e0;
          puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          local_130 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar2 = local_130;
          if ((uVar4 & 1) == 0) {
LAB_0076bb64:
            local_a9 = 0;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((uVar2 & 1) == 0) || (local_e0 != local_130)) goto LAB_0076bb64;
            local_a9 = 1;
          }
          local_c8 = 1;
          _objc_storeStrong(&local_130,0);
        }
        else {
          uVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar4 & 1) == 0) {
            _memset(auStack_128,0,0x40);
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_1d0 != 0) {
              lVar3 = *local_118;
              local_1d8 = 0;
              do {
                do {
                  if (*local_118 - lVar3 != 0) {
                    _objc_enumerationMutation(*local_118 - lVar3,uVar2);
                  }
                  uVar4 = *(ulong *)(local_120 + local_1d8 * 8);
                  local_e8 = uVar4;
                  if ((uVar4 - local_d8 == 0) ||
                     (FUN_0076bfe8(uVar4 - local_d8,uVar4,local_d8), (uVar4 & 1) != 0)) {
                    local_a9 = 1;
                    local_c8 = 1;
                    goto LAB_0076ba10;
                  }
                  local_1d8 = local_1d8 + 1;
                } while (local_1d8 < local_1d0);
                local_1d0 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                           auStack_a8,0x10);
                local_1d8 = 0;
              } while (local_1d0 != 0);
            }
            local_c8 = 0;
LAB_0076ba10:
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if (local_c8 == 0) goto LAB_0076ba34;
          }
          else {
            local_a9 = 1;
            local_c8 = 1;
          }
        }
        _objc_storeStrong(&local_e0,0);
      }
      else {
        local_a9 = 1;
        local_c8 = 1;
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_d0,0);
LAB_0076bbf0:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

