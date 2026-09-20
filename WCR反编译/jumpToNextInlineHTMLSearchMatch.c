// jumpToNextInlineHTMLSearchMatch @ 01eff08c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::jumpToNextInlineHTMLSearchMatch
               (ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchIndex_026c8148);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = 0;
    if (IVar4 != 0) {
      lVar1 = (long)(IVar2 + 1) / (long)IVar4;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setHtmlSearchMatchIndex__026c8128,(IVar2 + 1) - lVar1 * IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchIndex_026c8148);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_scrollToInlineHTMLSearchMatchAtI_026c8150,IVar2);
  }
  return;
}

