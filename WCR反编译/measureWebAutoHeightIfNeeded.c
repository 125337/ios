// measureWebAutoHeightIfNeeded @ 01e8f480

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoCardView::measureWebAutoHeightIfNeeded
          (WCRefineToDoCardView *this,ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  double in_d0;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  uint local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (IVar4 != 0) {
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardSourceMode_026a8828);
    bVar1 = true;
    if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardHeight_026a8948);
      bVar1 = 0.0 < in_d0;
    }
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &
               cf__function___try_if_window___wcrFitApplying__window___wcrFitPending_true_return_1__window___wcrFitByHeight_false_window___wcrMeasureAutoHeight_true_if_window___wcrAutoFitContent_window___wcrAutoFitContent___varb_document_body_varroot_document_getElementById__container____document_querySelector___container_____b__b_firstElementChild___b_varr_root__root_getBoundingClientRect_root_getBoundingClientRect___null_varh_r__r_height_r_height__root__root_scrollHeight_root_scrollHeight_0__window___wcrMeasureAutoHeight_false_window_scrollTo_0_0__returnMath_ceil_h___catch_e__window___wcrMeasureAutoHeight_false_return0_______
    ;
    _objc_initWeak(auStack_40,local_18);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01e8f6d0;
    local_60 = &DAT_0258c8f0;
    _objc_copyWeak(auStack_58,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_evaluateJavaScript_completionHan_026a12f0,pcVar2,&local_78);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

