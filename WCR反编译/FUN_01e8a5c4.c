// FUN_01e8a5c4 @ 01e8a5c4

void FUN_01e8a5c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  dispatch_time_t dVar7;
  double dVar8;
  ulong local_e8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 local_88;
  undefined1 local_79;
  double local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  int local_58;
  undefined1 local_51;
  ulong local_50;
  ulong local_48;
  long local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar3 = param_2 + 0x30;
  local_40 = param_2;
  _objc_loadWeakRetained();
  local_51 = 0;
  bVar2 = true;
  uVar1 = uVar3 != 0;
  local_48 = uVar3;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != *(ulong *)(param_2 + 0x20);
    local_51 = uVar1;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  uVar3 = local_30;
  if (bVar2) {
    local_58 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_children);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(local_e8);
    uVar5 = local_60;
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_60;
    local_70 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_79 = true;
    if ((((local_38 == 0) && (local_79 = true, local_60 != 0)) && (local_79 = false, local_68 == 0))
       && (local_79 = false, local_70 == 0)) {
      local_79 = param_1 <= 1.0;
    }
    local_78 = param_1;
    if ((bool)local_79 == false) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setConsecutiveBlankWebProbeCount_026c72a0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_ensureHostedWebFrontmost_026c7018);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_setNeedsLayout_0269deb8);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_2 + 0x20),PTR_s_evaluateJavaScript_completionHan_026a12f0,
                 &
                 cf_try_voiddocument_documentElement_offsetHeight_window_dispatchEvent_newEvent__resize_____catch_e___
                 ,0);
      local_58 = 1;
    }
    else {
      uVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_blankWebProbeConfirmationSchedul_026c72b0);
      uVar3 = local_48;
      if ((uVar5 & 1) == 0) {
        uVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_consecutiveBlankWebProbeCount_026c72b8)
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_setConsecutiveBlankWebProbeCount_026c72a0,uVar5 + 1);
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_consecutiveBlankWebProbeCount_026c72b8)
        ;
        if ((long)uVar3 < 2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setBlankWebProbeConfirmationSche_026c72a8,1);
          dVar7 = _dispatch_time(0,350000000);
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_48;
          local_b0 = PTR___NSConcreteStackBlock_02578660;
          local_a8 = 0xc2000000;
          local_a4 = 0;
          local_a0 = FUN_01e8ad54;
          local_98 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = uVar3;
          uVar6 = *(undefined8 *)(param_2 + 0x28);
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = uVar6;
          _dispatch_after(dVar7,puVar4,&local_b0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_58 = 1;
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_90,0);
        }
        else {
          _CACurrentMediaTime(uVar3 - 2);
          dVar8 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastBlankWebRecoveryTime_026c72c0);
          if ((dVar8 <= 0.0) ||
             (dVar8 = param_1,
             (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastBlankWebRecoveryTime_026c72c0)
             , 5.0 <= param_1 - dVar8)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,local_48,PTR_s_setLastBlankWebRecoveryTime__026c72c8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_setConsecutiveBlankWebProbeCount_026c72a0,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_setBlankWebProbeConfirmationSche_026c72a8,0);
            _objc_storeStrong(&DAT_028e47d8);
            _objc_storeStrong(&DAT_028e47e0,0);
            _objc_storeStrong(&DAT_028e47f8,0);
            _objc_storeStrong(&DAT_028e47e8,0);
            _objc_storeStrong(&DAT_028e47f0,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_renderWebView_026c7010);
            local_58 = 0;
          }
          else {
            local_58 = 1;
          }
        }
      }
      else {
        local_58 = 1;
      }
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48,0);
  if (local_58 == 0) {
    local_58 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

