// handleOpenProfileAction @ 01850514

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendHistoryViewController::handleOpenProfileAction(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingHistoryItem_026b6918);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingHistoryItem__026b68f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_openProfileForHistoryItem_trigge_026b68f8,local_28,0);
  _objc_storeStrong(&local_28,0);
  return;
}

