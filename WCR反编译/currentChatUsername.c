// currentChatUsername @ 00ffc578

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkMediaSender::currentChatUsername(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined *local_3d0;
  undefined *local_3c8;
  ulong local_390;
  ulong local_388;
  ulong local_320;
  ulong local_318;
  ID local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  ID local_1f0;
  uint local_1e4;
  ID local_1e0;
  long local_1d8;
  ID local_1d0;
  undefined *local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_1c0 = param_2;
  local_1b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_1b8;
  local_1c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_walkPastOverlaysFrom__026ad8a0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = 0;
  local_1d0 = IVar3;
  do {
    lVar7 = local_1d8;
    if (local_1d0 != 0) {
      local_1d8 = local_1d8 + 1;
    }
    if (local_1d0 == 0 || 0xb < lVar7) goto LAB_00ffca80;
    IVar4 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_usernameFromChatViewController__026ad8a8,local_1d0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    IVar3 = local_1e0;
    if (IVar4 == 0) {
      IVar3 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = IVar3;
      if (IVar3 == 0) {
LAB_00ffc8f8:
        IVar4 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        IVar3 = local_1b8;
        if (IVar4 == 0) {
          IVar3 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (IVar3 == 0) {
            local_1e4 = 5;
            goto LAB_00ffca40;
          }
          IVar4 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = local_1d0;
          local_1d0 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        else {
          IVar5 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_presentingViewController_026a0db0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_walkPastOverlaysFrom__026ad8a0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_1d0;
          local_1d0 = IVar3;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        local_1e4 = 0;
      }
      else {
        _memset(auStack_238,0,0x40);
        IVar3 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_318 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10
                  );
        if (local_318 != 0) {
          lVar7 = *local_228;
          local_320 = 0;
          do {
            do {
              if (*local_228 - lVar7 != 0) {
                _objc_enumerationMutation(*local_228 - lVar7,IVar4);
              }
              local_1f8 = *(undefined8 *)(local_230 + local_320 * 8);
              IVar5 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_usernameFromChatViewController__026ad8a8,local_1f8);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_1e0;
              local_1e0 = IVar5;
              (*(code *)PTR__objc_release_02578630)(IVar3);
              IVar5 = local_1e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
              IVar3 = local_1e0;
              if (IVar5 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = IVar3;
                local_1e4 = 1;
                goto LAB_00ffc8d4;
              }
              local_320 = local_320 + 1;
            } while (local_320 < local_318);
            local_318 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                       0x10);
            local_320 = 0;
          } while (local_318 != 0);
        }
        local_1e4 = 0;
LAB_00ffc8d4:
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if (local_1e4 == 0) goto LAB_00ffc8f8;
      }
LAB_00ffca40:
      _objc_storeStrong(&local_1f0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = IVar3;
      local_1e4 = 1;
    }
    _objc_storeStrong(&local_1e0,0);
  } while (local_1e4 == 0);
  uVar6 = local_1e4 - 5;
  if (uVar6 == 0) {
LAB_00ffca80:
    _memset(auStack_280,0,0x40);
    IVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_candidateChatHosts_026ad8b0);
    _objc_retainAutoreleasedReturnValue();
    local_388 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_388 != 0) {
      lVar7 = *local_270;
      local_390 = 0;
      do {
        do {
          if (*local_270 - lVar7 != 0) {
            _objc_enumerationMutation(*local_270 - lVar7,IVar3);
          }
          local_240 = *(undefined8 *)(local_278 + local_390 * 8);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_290 = 0;
          local_288 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_collectViewControllersFrom_into__026ad898,local_240,puVar2,
                     &local_290);
          _memset(auStack_2d8,0,0x40);
          puVar2 = local_288;
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_reverseObjectEnumerator_0269d220);
          _objc_retainAutoreleasedReturnValue();
          local_3c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_3c8 != (undefined *)0x0) {
            lVar8 = *local_2c8;
            local_3d0 = (undefined *)0x0;
            do {
              do {
                if (*local_2c8 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_2c8 - lVar8,puVar2);
                }
                local_298 = *(undefined8 *)(local_2d0 + (long)local_3d0 * 8);
                IVar5 = local_1b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_usernameFromChatViewController__026ad8a8,local_298);
                _objc_retainAutoreleasedReturnValue();
                local_2e0 = IVar5;
                (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
                IVar4 = local_2e0;
                bVar1 = IVar5 != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b0 = IVar4;
                }
                local_1e4 = (uint)bVar1;
                _objc_storeStrong(bVar1,&local_2e0,0);
                if (local_1e4 != 0) goto LAB_00ffcd5c;
                local_3d0 = local_3d0 + 1;
              } while (local_3d0 < local_3c8);
              local_3c8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,
                         auStack_1a8,0x10);
              local_3d0 = (undefined *)0x0;
            } while (local_3c8 != (undefined *)0x0);
          }
          local_1e4 = 0;
LAB_00ffcd5c:
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (local_1e4 == 0) {
            local_1e4 = 0;
          }
          _objc_storeStrong(&local_288,0);
          if (local_1e4 != 0) goto LAB_00ffce04;
          local_390 = local_390 + 1;
        } while (local_390 < local_388);
        local_388 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,
                   0x10);
        local_390 = 0;
      } while (local_388 != 0);
    }
    local_1e4 = 0;
LAB_00ffce04:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar6 = local_1e4;
    if (local_1e4 == 0) {
      local_1b0 = 0;
      uVar6 = 1;
      local_1e4 = 1;
    }
  }
  _objc_storeStrong(uVar6,&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

