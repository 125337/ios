// handleRenameConfirm: @ 0194dcc8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonGroupManageViewController::handleRenameConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingRenameGroupId_026b99b8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromPendingAlert_026b9968);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_renameGroupId_toName__026a10a8,
             local_30[0],IVar3);
  pcVar1 = &cf___TT;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar1 = &cf__TT1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

