// htmlEditorTextDidChangeScheduleWork @ 01f0a834

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::htmlEditorTextDidChangeScheduleWork
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_autoSaveInlineHTML_026c8180,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_refreshInlineHTMLSearchMatches_026c8118,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0,&cf___N);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd6666666666666,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_applyInlineHTMLHighlightPreservi_026c7fa8,0);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchPanelVisible_026c80f8);
  bVar1 = false;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchField_026c8040);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar4 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02332e48,param_1,PTR_s_performSelector_withObject_after_026a4990,
               PTR_s_refreshInlineHTMLSearchMatches_026c8118,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d00,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_autoSaveInlineHTML_026c8180,0);
  return;
}

