// wcr_reloadList @ 01bed3ac

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_reloadList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  
  puVar1 = PTR_WCRefineMomentsDraftManager_026ce740;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setDrafts__026ae620);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_reloadScheduledTasks_026c0ab8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_syncStyleHeader_026c0ac0);
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_updateEmptyState_026b0390);
  return;
}

