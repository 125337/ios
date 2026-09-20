// wcr_clipCancelFavorite: @ 0094f388

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryPanelController::wcr_clipCancelFavorite_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID local_38;
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
  IVar1 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRClipboardHistoryStore_026ce680;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRClipboardHistoryStore_026ce680,PTR_s_shared_0269cad0)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadCardData_026aa890);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

