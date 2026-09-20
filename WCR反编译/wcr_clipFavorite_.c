// wcr_clipFavorite: @ 0094f2d0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryPanelController::wcr_clipFavorite_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingActionItem_026aaa68);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hideActionMenu_026aaa70);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_favoriteItem__026aaa78,local_30[0]);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

