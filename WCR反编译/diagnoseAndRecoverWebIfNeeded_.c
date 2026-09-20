// diagnoseAndRecoverWebIfNeeded: @ 01e8a0e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoCardView::diagnoseAndRecoverWebIfNeeded_
          (WCRefineToDoCardView *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  double in_d0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  cfstringStruct *local_80;
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  undefined4 local_44;
  undefined1 *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_toDoCardSourceMode_026a8828);
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = DAT_028e47e0;
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,DAT_028e47d8)
    ;
    local_51 = (byte)uVar7;
    local_61 = 0;
    local_71 = 0;
    bVar3 = true;
    if (local_50 != 0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      bVar3 = true;
      local_60 = IVar5;
      if (IVar5 != 0) {
        IVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        bVar3 = IVar5 == 0;
        local_70 = IVar5;
      }
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setConsecutiveBlankWebProbeCount_026c72a0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setBlankWebProbeConfirmationSche_026c72a8,0);
      local_44 = 1;
    }
    else {
      IVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isLoading_026ae188);
      if (((IVar5 & 1) == 0) &&
         (lVar6 = DAT_028e47d8,
         (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_length_0269cca0), lVar6 != 0)) {
        if (((local_51 & 1) != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_alpha_026ca4d8),
           in_d0 < DAT_02323ec0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_50,PTR_s_setAlpha__026ca860);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_hideCachedWebSnapshotAnimated__026c7278,0);
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = &
                   cf__function___try_varb_document_body_d_document_documentElement_return_ready_document_readyState_visibility_document_visibilityState_children_b_b_childElementCount_0_text_b__b_innerText______length_0_width_d_d_scrollWidth_0_height_d_d_scrollHeight_0___catch_e__return_error_String_e_________
        ;
        _objc_initWeak(auStack_88,local_28);
        IVar5 = local_50;
        pcVar1 = local_80;
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_01e8a5c4;
        local_a8 = &DAT_0258c960;
        _objc_copyWeak(auStack_90,auStack_88);
        IVar2 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = IVar2;
        uVar7 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar1,&local_c0);
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_a0,0);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(auStack_88);
        _objc_storeStrong(&local_80,0);
        local_44 = 0;
      }
      else {
        local_44 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

