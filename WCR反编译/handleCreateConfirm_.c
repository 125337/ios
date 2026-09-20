// handleCreateConfirm: @ 0194b958

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineEmoticonGroupManageViewController::handleCreateConfirm_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromPendingAlert_026b9968);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_30[0] = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_createGroupNamed__026a0f90,IVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_38 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    IVar3 = local_30[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_length_0269cca0);
    pcVar1 = &cf_eQR_Ty;
    if (IVar3 != 0) {
      pcVar1 = &cf_R_1Y_TySY;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__R_R_);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

