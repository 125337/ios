// isLastCardOnCurrentPageAtIndexPath: @ 01b13c3c

/* Function Stack Size: 0x18 bytes */

bool WCRefineKeywordAlertHistoryCardViewController::isLastCardOnCurrentPageAtIndexPath_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_90;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = true;
  if (local_30 != 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayedRecords_026be900);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_11 = false;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_configuredCardsPerPage_026be9a0);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentPage_0269f4e8);
    uVar5 = IVar3 * IVar2;
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_item_026a1890);
    if (uVar4 < uVar5) {
      local_11 = false;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayedRecords_026be900);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (uVar5 + IVar2 < local_90) {
        local_90 = uVar5 + IVar2;
      }
      local_11 = false;
      if (uVar5 < local_90) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_item_026a1890);
        local_11 = uVar4 == local_90 - 1;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

