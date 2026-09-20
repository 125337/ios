// FUN_0036c14c @ 0036c14c

void FUN_0036c14c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_3c8;
  undefined *local_3c0;
  ulong local_380;
  ulong local_378;
  ulong local_360;
  ulong local_330;
  ulong local_328;
  ulong local_310;
  ulong local_2f0;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  undefined8 local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  ulong local_200;
  ulong local_1f8;
  undefined *local_1f0;
  ulong local_1e8;
  bool local_1d9;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined4 local_1b4;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  uVar2 = local_1b0;
  FUN_003beb04();
  uVar5 = local_1b0;
  if ((uVar2 & 1) == 0) {
    local_1b4 = 1;
  }
  else {
    local_1c0 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = uVar5;
    while (uVar5 = local_1c8, local_1c8 != 0) {
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar5 & 1) != 0) {
        _objc_storeStrong(&local_1c0,local_1c8);
        break;
      }
      uVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_1c8;
      local_1c8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_1b4 = 2;
    _objc_storeStrong(&local_1c8,0);
    uVar5 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    uVar2 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_1d9 = false;
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_2f0 = 0;
    }
    else {
      local_2f0 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = local_2f0;
    }
    local_1d9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d0 = local_2f0;
    if ((local_1d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar5;
    if (uVar5 == 0) {
      local_1b4 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_1e8;
      local_1f0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_interactivePopGestureRecognizer_026a2f10);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,uVar5);
      }
      _memset(auStack_240,0,0x40);
      uVar5 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_310 = uVar2;
      if (uVar2 == 0) {
        local_310 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_328 = local_310;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_310,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                 0x10);
      if (local_328 != 0) {
        lVar4 = *local_230;
        local_330 = 0;
        do {
          do {
            if (*local_230 - lVar4 != 0) {
              _objc_enumerationMutation(*local_230 - lVar4,local_310);
            }
            uVar5 = *(ulong *)(local_238 + local_330 * 8);
            puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
            local_200 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar5 & 1) != 0) && (local_200 != local_1f8)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,local_200);
            }
            local_330 = local_330 + 1;
          } while (local_330 < local_328);
          local_328 = local_310;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_310,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                     auStack_a8,0x10);
          local_330 = 0;
        } while (local_328 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_310);
      _memset(auStack_288,0,0x40);
      uVar5 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_gestureRecognizers_026ca650);
      _objc_retainAutoreleasedReturnValue();
      local_360 = uVar5;
      if (uVar5 == 0) {
        local_360 = *(ulong *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_378 = local_360;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,
                 0x10);
      if (local_378 != 0) {
        lVar4 = *local_278;
        local_380 = 0;
        do {
          do {
            if (*local_278 - lVar4 != 0) {
              _objc_enumerationMutation(*local_278 - lVar4,local_360);
            }
            uVar5 = *(ulong *)(local_280 + local_380 * 8);
            puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
            local_248 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar5 & 1) != 0) {
              _memset(auStack_2d0,0,0x40);
              puVar3 = local_1f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_3c0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                         auStack_1a8,0x10);
              if (local_3c0 != (undefined *)0x0) {
                lVar6 = *local_2c0;
                local_3c8 = (undefined *)0x0;
                do {
                  do {
                    if (*local_2c0 - lVar6 != 0) {
                      _objc_enumerationMutation(*local_2c0 - lVar6,puVar3);
                    }
                    local_290 = *(undefined8 *)(local_2c8 + (long)local_3c8 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_248,PTR_s_requireGestureRecognizerToFail__026ca810,local_290);
                    local_3c8 = local_3c8 + 1;
                  } while (local_3c8 < local_3c0);
                  local_3c0 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,
                             auStack_1a8,0x10);
                  local_3c8 = (undefined *)0x0;
                } while (local_3c0 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            local_380 = local_380 + 1;
          } while (local_380 < local_378);
          local_378 = local_360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_360,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                     auStack_128,0x10);
          local_380 = 0;
        } while (local_378 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(local_360);
      _objc_storeStrong(&local_1f8);
      _objc_storeStrong(&local_1f0,0);
      local_1b4 = 0;
    }
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c0,0);
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

