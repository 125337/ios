// confirmClearHistory @ 01ea1208

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHistoryViewController::confirmClearHistory(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setClearHistoryAlert__026c7470,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineToDoStore_026cf6a0,PTR_s_clearHistoryItems_026c7478);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadHistory_026c7438);
  return;
}

