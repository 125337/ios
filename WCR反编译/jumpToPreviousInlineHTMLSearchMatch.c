// jumpToPreviousInlineHTMLSearchMatch @ 01eff210

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::jumpToPreviousInlineHTMLSearchMatch
               (ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (IVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
  }
  else {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchIndex_026c8148);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = (IVar3 - 1) + IVar5;
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar2 = 0;
    if (IVar5 != 0) {
      lVar2 = lVar1 / (long)IVar5;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setHtmlSearchMatchIndex__026c8128,lVar1 - lVar2 * IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchIndex_026c8148);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_scrollToInlineHTMLSearchMatchAtI_026c8150,IVar3);
  }
  return;
}

