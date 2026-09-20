// jumpToNextSearchMatch @ 0196a2f4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::jumpToNextSearchMatch(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshSearchMatches_026b9d30);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchRanges_026ba070);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = 0;
    if (IVar5 != 0) {
      lVar1 = (long)(IVar3 + 1) / (long)IVar5;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setSearchMatchIndex__026b9e10,(IVar3 + 1) - lVar1 * IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_wcr_updateCurrentSearchHighlight_026ba0d0,IVar2,IVar3);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchMatchIndex_026ba080);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_scrollToSearchMatchAtIndex_anima_026ba0c0,IVar2,1);
  }
  return;
}

