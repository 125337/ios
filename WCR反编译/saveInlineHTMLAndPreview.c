// saveInlineHTMLAndPreview @ 01f01a18

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::saveInlineHTMLAndPreview(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_c0;
  undefined *local_a0;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveInlineHTMLSilently__026c80e8,0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setHtmlPreviewVisible__026c80d8,(uint)pcVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewWebView_026c7f38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlLineNumberView_026c80a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewButton_026c8028);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  pcVar1 = &cf__;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar1 = &::cf__;
  }
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTitle_forState__026caab8,pcVar1,0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewVisible_026c80d0);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    FUN_01f01544();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_a0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    FUN_01f016dc(pcVar1,local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlPreviewWebView_026c7f38);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &::cf___;
    }
    FUN_01ee5898(local_c0,local_30,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_28;
    FUN_01ee5d58();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_loadHTMLString_baseURL__026a1cf0,local_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(local_c0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

