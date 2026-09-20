// scrollToInlineHTMLSearchMatchAtIndex: @ 01efedd0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::scrollToInlineHTMLSearchMatchAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 local_40;
  undefined8 local_30;
  
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  if (-1 < (long)param_3) {
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = true;
    if (param_3 < IVar4) {
      local_40 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar3 = local_40 == 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar3) {
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlSearchMatchRanges_026c8130);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateInlineHTMLSearchCountLabel_026c8140);
  }
  return;
}

