// jumpToPreviousSearchMatch @ 0196a4cc

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::jumpToPreviousSearchMatch(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (IVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshSearchMatches_026b9d30);
  }
  else {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    IVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = (IVar4 - 1) + IVar6;
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar2 = 0;
    if (IVar6 != 0) {
      lVar2 = lVar1 / (long)IVar6;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setSearchMatchIndex__026b9e10,lVar1 - lVar2 * IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_wcr_updateCurrentSearchHighlight_026ba0d0,IVar3,IVar4);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_scrollToSearchMatchAtIndex_anima_026ba0c0,IVar3,1);
  }
  return;
}

