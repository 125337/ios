// refreshAfterSave @ 0196bff8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::refreshAfterSave(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isCodeStyleKind_026b9ed0);
  if ((param_1 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_kind_026a27e8);
    if (IVar3 == 7) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sourceMode_026b9eb8);
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_renderHTMLPreview_026ba118);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_loadHighlightedSourceWithMode__026ba110,&cf_markup);
      }
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_kind_026a27e8);
      if (IVar3 == 3) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sourceMode_026b9eb8);
        if ((IVar3 & 1) == 0) {
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWebView__026a8f28,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupMediaWebView_026ba120);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_loadHighlightedSourceWithMode__026ba110,&cf_markup);
        }
      }
    }
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filePath_026b9cb0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    FUN_01963934();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_kind_026a27e8);
    if (IVar3 == 10) {
      _objc_storeStrong(0,&local_28,&cf_text);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_loadHighlightedSourceWithMode__026ba110,local_28);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

