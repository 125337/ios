// tableView:didDeselectRowAtIndexPath: @ 01b36e20

/* Function Stack Size: 0x20 bytes */

void WCRefineKeywordAlertKeywordsViewController::tableView_didDeselectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEditing_026a81d8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateBatchToolbarVisibility_026bef50);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

