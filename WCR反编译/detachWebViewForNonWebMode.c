// detachWebViewForNonWebMode @ 01e7fb1c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::detachWebViewForNonWebMode(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint local_104;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  
  puVar5 = &DAT_028e4808;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_loadWeakRetained();
  puVar6 = local_28;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar5 == puVar6) {
    _objc_storeWeak(0,&DAT_028e4808,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebHostedOnTable__026c6f78,0);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebSnapshotSignature__026c70b8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAttemptedWebSnapshotSignature_026c70c0,0);
  puVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  bVar3 = false;
  bVar4 = false;
  local_38 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    local_40 = DAT_028e47d0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar3 = local_40 != local_50;
    bVar4 = true;
    if (bVar3) {
      local_60 = &DAT_028e4808;
      _objc_loadWeakRetained();
      bVar4 = local_60 == local_28;
    }
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar4) {
    _objc_storeStrong(&local_38,DAT_028e47d0);
  }
  if (local_38 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detachWebEdgeLongPressIfOwned_026c7028);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_evaluateJavaScript_completionHan_026a12f0,
               &
               cf_try_document_querySelectorAll__audio_video___forEach_function_m__try_m_pause____catch_e_______catch_e___
               ,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_38,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    bVar2 = false;
    local_104 = 1;
    if (puVar5 != puVar6) {
      local_70 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_104 = 1;
      if (local_70 != local_28) {
        local_80 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        puVar7 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        puVar8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isKindOfClass__0269cd68,puVar7);
        local_104 = (uint)puVar8;
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if ((local_104 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
    }
  }
  puVar5 = &DAT_028e4800;
  _objc_loadWeakRetained();
  puVar6 = local_28;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar5 == puVar6) {
    puVar5 = DAT_028e47d0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d0,PTR_s_configuration_026a1de8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeWeak(&DAT_028e4800,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWebView__026a8f28);
  _objc_storeStrong(&local_38,0);
  return;
}

