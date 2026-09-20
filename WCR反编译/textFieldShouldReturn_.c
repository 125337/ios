// textFieldShouldReturn: @ 01efdbc4

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoListWebSettingsViewController::textFieldShouldReturn_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar3 = local_30;
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_htmlSearchField_026c8040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  IVar2 = local_30;
  if (IVar3 == IVar1) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_refreshInlineHTMLSearchMatches_026c8118);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_jumpToNextInlineHTMLSearchMatch_026c8080)
      ;
    }
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_htmlReplaceField_026c8058);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == IVar3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_replaceCurrentInlineHTMLSearchMa_026c8088);
    }
  }
  local_11 = 1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

