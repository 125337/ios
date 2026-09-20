// copyContent @ 0196f3f0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::copyContent(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool local_39;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_38 = (undefined *)0x0;
  local_39 = false;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_readTextContent_026b9f60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    puVar6 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    bVar1 = false;
    if (puVar6 != (undefined *)0x0) {
      puVar3 = local_28;
      local_20 = puVar7;
      local_18 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar7 + (long)puVar6 <= puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (!bVar1) {
      puVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      local_38 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    else {
      puVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editor_026b9fa0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      local_38 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_39 = bVar1;
  }
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eSY6Rve_gQ_);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = &cf__Y6R_NQ_;
    if (!local_39) {
      pcVar2 = &cf__Y6RhQQ_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

