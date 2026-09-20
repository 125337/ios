// reloadCurrentWork @ 01cc2314

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgHTMLLivePreviewView::reloadCurrentWork(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  uint local_fc;
  long local_f0;
  long local_e8;
  ID local_88;
  byte local_7d;
  uint local_7c;
  long local_78;
  byte local_69;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 local_41;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_38;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_runtime_026c3508);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
  local_41 = 0;
  bVar2 = true;
  uVar1 = ((ulong)puVar3 & 1) != 0;
  if ((bool)uVar1) {
    IVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar8 == 0;
    local_41 = uVar1;
    local_40 = IVar8;
    (*(code *)PTR__objc_release_02578630)(IVar8);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildWebView_026c34f8);
  }
  local_50 = 0;
  local_58 = 0;
  puVar3 = local_38;
  _WCRefineProfileBgHTMLWorkDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_50;
  local_68 = local_58;
  _WCRefineProfileBgPreviewResolveDayNight();
  _objc_storeStrong(&local_50,local_60);
  _objc_storeStrong(&local_58,local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_69 = 0;
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_69 = IVar7 == 2;
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if (((local_69 & 1) == 0) ||
     (lVar9 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar9 == 0)) {
    lVar9 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar9 == 0) {
      local_f0 = local_58;
    }
    else {
      local_f0 = local_50;
    }
    local_e8 = local_f0;
  }
  else {
    local_e8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  puVar3 = local_38;
  if (local_e8 == 0) {
    local_7c = 1;
  }
  else {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_loadedWorkId_026c3528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    local_7d = (byte)puVar3;
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar8;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    local_fc = 0;
    if ((local_7d & 1) != 0) {
      IVar6 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_fc = 0;
      if (IVar6 != 0) {
        IVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_78);
        local_fc = (uint)IVar6;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLoadedWorkId__026c3530,local_38);
    bVar2 = (local_fc & 1) == 0;
    if (bVar2) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      lVar9 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_fileURLWithPath_isDirectory__026a8f30,lVar9,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_loadFileURL_allowingReadAccessTo_026a1cf8,puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyCurrentHeightFit_026c3518);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyLayoutInvalidated_026c3520);
    }
    local_7c = (uint)!bVar2;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

