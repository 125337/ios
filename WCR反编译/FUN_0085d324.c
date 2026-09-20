// FUN_0085d324 @ 0085d324

void FUN_0085d324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *local_208;
  undefined *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  ulong local_80;
  long local_78;
  byte local_70;
  byte local_6f;
  undefined **local_68;
  byte local_59;
  long local_58;
  undefined4 local_50;
  byte local_39;
  ulong local_38;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  local_39 = param_7;
  if ((local_30 == 0) ||
     (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_28 = (undefined *)0x0;
    local_50 = 1;
  }
  else {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_tag_026cab98);
    if (lVar3 == 0x24f6dc) {
      lVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_58;
      local_58 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
    lVar3 = local_30;
    local_59 = lVar4 == 0x24f6dc;
    ppuVar5 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_0085f0b0;
    local_90 = &DAT_02580920;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_38;
    local_88 = lVar3;
    local_70 = local_59 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_58;
    local_80 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar3;
    local_6f = local_39 & 1;
    _objc_retainBlock();
    puVar7 = DAT_028cd070;
    local_68 = ppuVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar7;
    puVar6 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((((ulong)puVar7 & 1) != 0) && (iVar1 = (DAT_028cd0d0 & 1) - (local_39 & 1), iVar1 != 0)) {
      FUN_0085fe10(iVar1);
      _objc_storeStrong(&local_b0,0);
    }
    puVar7 = local_b0;
    puVar6 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
    if (((ulong)puVar7 & 1) == 0) {
      if ((local_59 & 1) != 0) {
        FUN_0085a484((local_39 ^ 1) & 1);
      }
      puVar7 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
      _objc_alloc_init();
      local_b8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setAllowsInlineMediaPlayback__026a8ee8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setMediaTypesRequiringUserAction_026a8ef0,0);
      puVar7 = PTR_WCRefineProfileBgHTMLRuntime_026ce9d8;
      _objc_alloc_init();
      uVar8 = DAT_028cd050;
      local_c0 = puVar7;
      _WCRefineProfileBgSafePathComponent();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setWorkId__026a8ec8);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_attachToConfiguration__026a8ef8,local_b8)
      ;
      puVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_userContentController_026a1da8);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 0;
      local_208 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        local_208 = PTR__OBJC_CLASS___WKUserContentController_026ce500;
        _objc_alloc_init();
        local_d0 = local_208;
      }
      local_d1 = puVar7 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_208;
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_retain_02578638)();
      puVar7 = local_c8;
      local_e0 = &
                 cf_vars_document_createElement__style___s_textContent__html_body_margin_0_padding_0_width_100__background_transparent___data_wcr_action___data_wcr__cursor_pointer____document_documentElement_appendChild_s__
      ;
      puVar6 = PTR__OBJC_CLASS___WKUserScript_026ce508;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_initWithSource_injectionTime_for_026a1dc8,local_e0,1,1);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addUserScript__026a1dd0,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar7 = local_c8;
      puVar6 = PTR__OBJC_CLASS___WKUserScript_026ce508;
      _objc_alloc();
      puVar9 = puVar6;
      FUN_008606f0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_initWithSource_injectionTime_for_026a1dc8,puVar9,0,0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addUserScript__026a1dd0,puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar7 = local_c8;
      if ((local_39 & 1) != 0) {
        puVar6 = PTR__OBJC_CLASS___WKUserScript_026ce508;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_initWithSource_injectionTime_for_026a1dc8,
                   &
                   cf_document_querySelectorAll__video_audio___forEach_function_el__el_muted_true_el_volume_0___
                   ,1,0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addUserScript__026a1dd0,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      puVar7 = PTR_WCRefineProfileBgHTMLBridge_026ce9e0;
      _objc_alloc_init();
      local_e8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setProfileCardView__026a8ed8,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_addScriptMessageHandler_name__026a8f00,local_e8,&cf_wcrProfile);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_setUserContentController__026a1db0,local_c8);
      puVar6 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar6,PTR_s_initWithFrame_configuration__026a1ce0,
                 local_b8);
      puVar7 = local_b0;
      local_b0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOpaque__026ca9f8,0);
      puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scrollView_0269dcc0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNavigationDelegate__026a8f08,local_e8)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUIDelegate__026a8ee0,local_e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setActiveWebView__026a8ed0,local_b0);
      _objc_storeStrong(&DAT_028cd070,local_b0);
      uVar10 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      uVar2 = DAT_028cd078;
      DAT_028cd078 = uVar10;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      DAT_028cd0d0 = local_39 & 1;
      _objc_storeStrong(&DAT_028cd080,local_e8);
      _objc_storeStrong(&DAT_028cd088,local_c0);
      FUN_00860254(local_b0,local_38);
      (*(code *)local_68[2])(local_68,local_b0);
      puVar7 = local_b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar7;
      local_50 = 1;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
    }
    else {
      (*(code *)local_68[2])(local_68,local_b0);
      uVar2 = DAT_028cd078;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd078,PTR_s_isEqualToString__0269ccc8,local_38);
      if ((uVar2 & 1) == 0) {
        FUN_008601f8();
        uVar10 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
        uVar2 = DAT_028cd078;
        DAT_028cd078 = uVar10;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        FUN_00860254(local_b0,local_38);
      }
      else if (((DAT_028cd0d0 & 1) != (local_39 & 1)) && ((local_39 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_evaluateJavaScript_completionHan_026a12f0,
                   &
                   cf_document_querySelectorAll__video_audio___forEach_function_el__try_el_muted_true_el_volume_0_catch_e_____
                   ,0);
      }
      puVar7 = local_b0;
      DAT_028cd0d0 = local_39 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar7;
      local_50 = 1;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

