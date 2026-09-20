// movePendingToEnd @ 0194d498

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonGroupManageViewController::movePendingToEnd(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRenameGroupId_026b99b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_moveGroupIdToEnd__026a1090);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar1 = &cf__n__;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf_elyR;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

