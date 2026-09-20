// renderWebView @ 01e8c100

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::renderWebView(ID param_1,SEL param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  double in_d0;
  undefined8 uVar12;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  uint local_594;
  undefined *local_568;
  cfstringStruct *local_558;
  byte local_50c;
  cfstringStruct *local_4a0;
  undefined8 *local_418;
  undefined8 *local_248;
  cfstringStruct *local_240;
  bool local_231;
  undefined *local_230;
  undefined *local_228;
  cfstringStruct *local_220;
  byte local_211;
  undefined8 *local_210;
  byte local_202;
  byte local_201;
  undefined8 *local_200;
  byte local_1f1;
  undefined8 *local_1f0;
  byte local_1e1;
  undefined8 *local_1e0;
  byte local_1d1;
  undefined8 *local_1d0;
  byte local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [55];
  byte local_139;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined4 local_114;
  undefined8 *local_110;
  long local_108;
  double local_100;
  undefined8 uStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_40;
  byte local_31;
  SEL local_30;
  undefined8 *local_28;
  
  local_30 = param_2;
  local_28 = (undefined8 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsScrollView_026c6ea0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_31 = (byte)puVar5;
    if ((DAT_028e47d0 == (undefined *)0x0) || ((DAT_028c69f8 & 1) != (local_31 & 1))) {
      uVar6 = (ulong)((uint)puVar5 & 1);
      FUN_01e72914();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      local_40 = uVar6;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,puVar5,PTR_s_initWithFrame_configuration__026a1ce0,local_40
                );
      puVar4 = DAT_028e47d0;
      DAT_028e47d0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)();
      FUN_01e6cacc();
      DAT_028c69f8 = local_31 & 1;
      _objc_storeStrong(&DAT_028e47d8);
      _objc_storeStrong(&DAT_028e47e8,0);
      _objc_storeStrong(&DAT_028e47f0,0);
      _objc_storeStrong(&local_40,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebView__026a8f28,DAT_028e47d0);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__UIEdgeInsetsZero_02578118;
    uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
    local_80 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
    uStack_68 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
    local_70 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uStack_78;
    local_a0 = local_80;
    uStack_88 = uStack_68;
    local_90 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,uStack_78,local_70,uStack_68);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uStack_b8 = *(undefined8 *)(puVar4 + 8);
    local_c0 = *(undefined8 *)puVar4;
    uStack_a8 = *(undefined8 *)(puVar4 + 0x18);
    local_b0 = *(undefined8 *)(puVar4 + 0x10);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uStack_b8;
    local_e0 = local_c0;
    uStack_c8 = uStack_a8;
    local_d0 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,uStack_b8,local_b0,uStack_a8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uStack_e8 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_f0 = *(double *)PTR__CGPointZero_025782e0;
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uStack_e8;
    local_100 = local_f0;
    in_d0 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,uStack_e8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  local_108 = 0;
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar7;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  do {
    puVar3 = local_110;
    if (local_110 == (undefined8 *)0x0) {
LAB_01e8cce4:
      local_114 = 6;
      _objc_storeStrong(&local_110,0);
      puVar3 = (undefined8 *)&DAT_028e4808;
      _objc_loadWeakRetained();
      local_120 = puVar3;
      if (((local_108 == 0) && (puVar3 != (undefined8 *)0x0)) && (puVar3 != local_28)) {
        _objc_storeStrong(&local_108,puVar3);
      }
      if ((local_108 != 0) && (local_108 - (long)local_28 != 0)) {
        FUN_01e6cacc(local_108 - (long)local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setWebHostedOnTable__026c6f78,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_claimWebMessageHandlerOwnership_026c7000)
      ;
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_configureWebViewTouchRouting_026c6f60);
      local_418 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webTableHostIfEligible_026c6f48);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 0;
      bVar2 = local_418 == (undefined8 *)0x0;
      local_128 = local_418;
      if (bVar2) {
        local_418 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
        _objc_retainAutoreleasedReturnValue();
        local_138 = local_418;
      }
      local_139 = bVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = local_418;
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      puVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_130;
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if ((long)puVar8 - (long)puVar3 != 0) {
        FUN_01e6cacc((long)puVar8 - (long)puVar3);
        puVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _memcpy(auStack_170,PTR__CGAffineTransformIdentity_025782d8,0x30);
        puVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        _memcpy(auStack_1a0,auStack_170,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTransform__026caad0,auStack_1a0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_130;
        puVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addSubview__026ca4c0);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setWebHostedOnTable__026c6f78,local_128 != (undefined8 *)0x0);
      if (local_128 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&DAT_028e4808;
        _objc_loadWeakRetained();
        puVar7 = local_28;
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 == puVar7) {
          _objc_storeWeak(0,&DAT_028e4808,0);
        }
      }
      else {
        _objc_storeWeak(&DAT_028e4808,local_28);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutIfNeeded_026ca790);
      }
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar9 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar9;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar9,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
      if (((ulong)pcVar9 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_hideCachedWebSnapshotAnimated__026c7278,0);
        pcVar9 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_toDoCardWebURL_026c6dd0);
        _objc_retainAutoreleasedReturnValue();
        local_558 = pcVar9;
        if (pcVar9 == (cfstringStruct *)0x0) {
          local_558 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_220 = local_558;
        (*(code *)PTR__objc_release_02578630)(pcVar9);
        pcVar9 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0);
        local_231 = false;
        if (pcVar9 == (cfstringStruct *)0x0) {
          local_568 = (undefined *)0x0;
        }
        else {
          local_568 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_220);
          _objc_retainAutoreleasedReturnValue();
          local_230 = local_568;
        }
        local_231 = pcVar9 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_228 = local_568;
        if ((local_231 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_230);
        }
        if (local_228 != (undefined *)0x0) {
          pcVar9 = local_1a8;
          FUN_01e73df8(local_1a8,local_228);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = DAT_028e47d8;
          local_240 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_isEqualToString__0269ccc8,pcVar9)
          ;
          if ((uVar6 & 1) == 0) {
            _objc_storeStrong(&DAT_028e47d8,local_240);
            _objc_storeStrong(&DAT_028e47e0,0);
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&DAT_028e47f0,local_240);
            puVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSURLRequest_026ce7e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURLRequest_026ce7e8,PTR_s_requestWithURL__026a16e0,
                       local_228);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_loadRequest__026a1ce8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = DAT_028e47e8;
            DAT_028e47e8 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheduleWebFadeInFallback_026c72f8)
            ;
          }
          else {
            uVar6 = DAT_028e47e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,local_240);
            local_594 = 0;
            bVar2 = (uVar6 & 1) != 0;
            if (bVar2) {
              local_248 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_248;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_594 = (uint)puVar3 ^ 1;
            }
            uVar12 = 0x3ff0000000000000;
            if ((local_594 & 1) == 0) {
              uVar12 = 0;
            }
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar12);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (bVar2) {
              (*(code *)PTR__objc_release_02578630)(local_248);
            }
          }
          _objc_storeStrong(&local_240,0);
        }
        _objc_storeStrong(&local_228);
        _objc_storeStrong(&local_220,0);
      }
      else {
        FUN_01e6df84();
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_1a8;
        local_1b0 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_toDoCardWebHTML_026c6dc8);
        _objc_retainAutoreleasedReturnValue();
        local_4a0 = pcVar10;
        if (pcVar10 == (cfstringStruct *)0x0) {
          local_4a0 = &::cf___;
        }
        FUN_01e72d60();
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = local_4a0;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        pcVar11 = local_1a8;
        FUN_01e737c8(local_1a8,local_1b8,local_1b0);
        _objc_retainAutoreleasedReturnValue();
        pcVar9 = local_1b8;
        local_1c0 = pcVar11;
        FUN_01e72c78();
        _objc_retainAutoreleasedReturnValue();
        FUN_01e73924(pcVar9,pcVar11,local_1b0);
        _objc_retainAutoreleasedReturnValue();
        pcVar10 = local_1b8;
        local_1b8 = pcVar9;
        (*(code *)PTR__objc_release_02578630)(pcVar10);
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        pcVar9 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
        if (pcVar9 != (cfstringStruct *)0x0) {
          uVar6 = DAT_028e47d8;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_length_0269cca0);
          local_1c1 = uVar6 != 0;
          uVar6 = DAT_028e47d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e47d8,PTR_s_isEqualToString__0269ccc8,local_1c0);
          local_1d1 = 0;
          local_1e1 = 0;
          local_1f1 = 0;
          local_201 = 0;
          bVar2 = false;
          if (((uVar6 & 1) != 0) && (bVar2 = false, DAT_028e47e0 == 0)) {
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            local_1d1 = 1;
            local_1d0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar2 = false;
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              local_1e1 = 1;
              local_1e0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_1f1 = 1;
              bVar2 = false;
              local_1f0 = puVar3;
              if (puVar3 != (undefined8 *)0x0) {
                puVar3 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
                _objc_retainAutoreleasedReturnValue();
                local_201 = 1;
                local_200 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar2 = DAT_02324348 <= in_d0;
              }
            }
          }
          if ((local_201 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_200);
          }
          if ((local_1f1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1f0);
          }
          if ((local_1e1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1e0);
          }
          if ((local_1d1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1d0);
          }
          if (bVar2) {
            _objc_storeStrong(&DAT_028e47e0,local_1c0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_showCachedWebSnapshotForSignatur_026c72f0,local_1c0,0);
          uVar6 = DAT_028e47d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e47d8,PTR_s_isEqualToString__0269ccc8,local_1c0);
          if ((uVar6 & 1) == 0) {
            _objc_storeStrong(&DAT_028e47d8,local_1c0);
            _objc_storeStrong(&DAT_028e47e0,0);
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)puVar7 & 1) != 0) {
              bVar1 = local_1c1;
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if ((bVar1 & 1) == 0) {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            else {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            _objc_storeStrong(&DAT_028e47f0,local_1c0);
            puVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = local_1b8;
            pcVar10 = local_1b0;
            FUN_01e73d50();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_loadHTMLString_baseURL__026a1cf0,pcVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = DAT_028e47e8;
            DAT_028e47e8 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(pcVar10);
            (*(code *)PTR__objc_release_02578630)();
            FUN_01e6cacc();
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scheduleWebFadeInFallback_026c72f8)
            ;
          }
          else {
            uVar6 = DAT_028e47e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,local_1c0);
            local_211 = 0;
            local_50c = 0;
            if ((uVar6 & 1) != 0) {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              local_211 = 1;
              local_210 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_50c = (byte)puVar3 ^ 1;
            }
            if ((local_211 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)();
            }
            local_202 = local_50c & 1;
            FUN_01e6cacc();
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (((ulong)puVar7 & 1) == 0) {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            else if ((local_202 & 1) != 0) {
              puVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            puVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
        }
        _objc_storeStrong(&local_1c0);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_1b0,0);
      }
      _objc_storeStrong(&local_1a8);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_108,0);
      return;
    }
    puVar4 = PTR_WCRefineToDoCardView_026ce978;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_storeStrong(&local_108,local_110);
      goto LAB_01e8cce4;
    }
    puVar7 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_110;
    local_110 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  } while( true );
}

