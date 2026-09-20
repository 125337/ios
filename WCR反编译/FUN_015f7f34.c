// FUN_015f7f34 @ 015f7f34

void FUN_015f7f34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint local_344;
  uint local_300;
  undefined *local_288;
  undefined *local_280;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_5;
  local_b0 = param_5;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_015f8f10;
  local_c8 = &DAT_0257a800;
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = uVar3;
  _dispatch_async(puVar2,&local_e0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  FUN_015f7b6c();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_refreshScopedBadgeCacheWithConfi_026b1638,
             local_e8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_syncSuperFloatWithConfig__026b1658,local_e8);
  puVar2 = PTR_WCRQuickChatRuntime_026ce698;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_setWindow__026b1698)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmed__026b16a0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmSignature__026b16a8,0);
    local_ec = 1;
  }
  else {
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatEnabled_026b1660);
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setWindow__026b1698);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmed__026b16a0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmSignature__026b16a8,0);
      local_ec = 1;
    }
    else {
      lVar4 = *(long *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 == 0) {
        puVar2 = PTR_WCRQuickChatWindow_026cee38;
        _objc_alloc();
        puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_110 = param_1;
        local_108 = param_2;
        local_100 = param_3;
        local_f8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithFrame__026ca6e8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_5 + 0x20),PTR_s_setWindow__026b1698);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmed__026b16a0,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_5 + 0x20),PTR_s_setSidebarWarmSignature__026b16a8,0);
      }
      lVar6 = *(long *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(lVar6);
      if (lVar4 == 0) {
        _memset(auStack_158,0,0x40);
        puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_280 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        if (local_280 != (undefined *)0x0) {
          lVar4 = *local_148;
          local_288 = (undefined *)0x0;
          do {
            do {
              if (*local_148 - lVar4 != 0) {
                _objc_enumerationMutation(*local_148 - lVar4,puVar5);
              }
              uVar10 = *(ulong *)(local_150 + (long)local_288 * 8);
              local_118 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_activationState_026ca490);
              uVar7 = local_118;
              if (uVar10 == 0) {
                puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((uVar7 & 1) != 0) {
                  uVar3 = *(undefined8 *)(param_5 + 0x20);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar3);
                  local_ec = 2;
                  goto LAB_015f8680;
                }
              }
              local_288 = local_288 + 1;
            } while (local_288 < local_280);
            local_280 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8
                       ,0x10);
            local_288 = (undefined *)0x0;
          } while (local_280 != (undefined *)0x0);
        }
        local_ec = 0;
LAB_015f8680:
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatHideOnScreenshot_026b16b0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_applySecureShield__026b16b8,puVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1,param_2,param_3,param_4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatBallSize_026b1310);
      bVar1 = true;
      if (0.0 < param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatBallAlpha_026b1358);
        bVar1 = param_1 <= 0.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatLinkSuperFloat_026b1668);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_5 + 0x20),PTR_s_scheduleEnableWarmup_026b16c0);
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_quickChatLinkSuperFloat_026b1668);
      local_300 = 0;
      if (((ulong)puVar2 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_300 = (uint)uVar3 ^ 1;
        (*(code *)PTR__objc_release_02578630)(uVar8);
      }
      if ((local_300 & 1) == 0) {
        if (bVar1) {
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_5 + 0x20),PTR_s_refreshSessionList_026b1418);
        uVar9 = *(ulong *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_344 = 0;
        if ((uVar10 & 1) == 0) {
          uVar8 = *(undefined8 *)(param_5 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_344 = (uint)uVar3 ^ 1;
          (*(code *)PTR__objc_release_02578630)(uVar8);
        }
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar9);
        if ((local_344 & 1) != 0) {
          uVar3 = *(undefined8 *)(param_5 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_ec = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = *(undefined8 *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_ec = 1;
      }
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

