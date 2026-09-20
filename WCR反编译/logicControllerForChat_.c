// logicControllerForChat: @ 00ffce98

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::logicControllerForChat_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *local_3d8;
  undefined *local_3d0;
  ulong local_398;
  ulong local_390;
  ulong local_328;
  ulong local_320;
  ID local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  ID local_1f8;
  uint local_1ec;
  ID local_1e8;
  long local_1e0;
  ID local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_1b8;
  local_1d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_walkPastOverlaysFrom__026ad8a0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = 0;
  local_1d8 = IVar2;
  do {
    lVar6 = local_1e0;
    if (local_1d8 != 0) {
      local_1e0 = local_1e0 + 1;
    }
    if (local_1d8 == 0 || 0xb < lVar6) goto LAB_00ffd38c;
    IVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_logicFromChatViewController_matc_026ad8b8,local_1d8,local_1c8);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = IVar2;
    if (IVar2 == 0) {
      IVar2 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = IVar2;
      if (IVar2 == 0) {
LAB_00ffd204:
        IVar3 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        IVar2 = local_1b8;
        if (IVar3 == 0) {
          IVar2 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (IVar2 == 0) {
            local_1ec = 5;
            goto LAB_00ffd34c;
          }
          IVar3 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_1d8;
          local_1d8 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
        else {
          IVar4 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_presentingViewController_026a0db0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_walkPastOverlaysFrom__026ad8a0);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_1d8;
          local_1d8 = IVar2;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        local_1ec = 0;
      }
      else {
        _memset(auStack_240,0,0x40);
        IVar2 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_320 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,0x10
                  );
        if (local_320 != 0) {
          lVar6 = *local_230;
          local_328 = 0;
          do {
            do {
              if (*local_230 - lVar6 != 0) {
                _objc_enumerationMutation(*local_230 - lVar6,IVar3);
              }
              local_200 = *(undefined8 *)(local_238 + local_328 * 8);
              IVar4 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_logicFromChatViewController_matc_026ad8b8,local_200,
                         local_1c8);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = local_1e8;
              local_1e8 = IVar4;
              (*(code *)PTR__objc_release_02578630)(IVar2);
              IVar2 = local_1e8;
              if (local_1e8 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = IVar2;
                local_1ec = 1;
                goto LAB_00ffd1e0;
              }
              local_328 = local_328 + 1;
            } while (local_328 < local_320);
            local_320 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                       0x10);
            local_328 = 0;
          } while (local_320 != 0);
        }
        local_1ec = 0;
LAB_00ffd1e0:
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if (local_1ec == 0) goto LAB_00ffd204;
      }
LAB_00ffd34c:
      _objc_storeStrong(&local_1f8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1ec = 1;
      local_1b0 = IVar2;
    }
    _objc_storeStrong(&local_1e8,0);
  } while (local_1ec == 0);
  uVar5 = local_1ec - 5;
  if (uVar5 == 0) {
LAB_00ffd38c:
    _memset(auStack_288,0,0x40);
    IVar2 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_candidateChatHosts_026ad8b0);
    _objc_retainAutoreleasedReturnValue();
    local_390 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_390 != 0) {
      lVar6 = *local_278;
      local_398 = 0;
      do {
        do {
          if (*local_278 - lVar6 != 0) {
            _objc_enumerationMutation(*local_278 - lVar6,IVar2);
          }
          local_248 = *(undefined8 *)(local_280 + local_398 * 8);
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_298 = 0;
          local_290 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_collectViewControllersFrom_into__026ad898,local_248,puVar1,
                     &local_298);
          _memset(auStack_2e0,0,0x40);
          puVar1 = local_290;
          (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_reverseObjectEnumerator_0269d220);
          _objc_retainAutoreleasedReturnValue();
          local_3d0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3d0 != (undefined *)0x0) {
            lVar7 = *local_2d0;
            local_3d8 = (undefined *)0x0;
            do {
              do {
                if (*local_2d0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_2d0 - lVar7,puVar1);
                }
                local_2a0 = *(undefined8 *)(local_2d8 + (long)local_3d8 * 8);
                IVar3 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_logicFromChatViewController_matc_026ad8b8,local_2a0,
                           local_1c8);
                _objc_retainAutoreleasedReturnValue();
                local_2e8 = IVar3;
                if (IVar3 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b0 = IVar3;
                }
                local_1ec = (uint)(IVar3 != 0);
                _objc_storeStrong(&local_2e8,0);
                if (local_1ec != 0) goto LAB_00ffd654;
                local_3d8 = local_3d8 + 1;
              } while (local_3d8 < local_3d0);
              local_3d0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,
                         auStack_1a8,0x10);
              local_3d8 = (undefined *)0x0;
            } while (local_3d0 != (undefined *)0x0);
          }
          local_1ec = 0;
LAB_00ffd654:
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if (local_1ec == 0) {
            local_1ec = 0;
          }
          _objc_storeStrong(&local_290,0);
          if (local_1ec != 0) goto LAB_00ffd6fc;
          local_398 = local_398 + 1;
        } while (local_398 < local_390);
        local_390 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,
                   0x10);
        local_398 = 0;
      } while (local_390 != 0);
    }
    local_1ec = 0;
LAB_00ffd6fc:
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uVar5 = local_1ec;
    if (local_1ec == 0) {
      local_1b0 = 0;
      uVar5 = 1;
      local_1ec = 1;
    }
  }
  _objc_storeStrong(uVar5,&local_1d8);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

