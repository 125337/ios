// confirmBatchDelete @ 01c779e0

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::confirmBatchDelete(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedFiles_026c2690);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbof);
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    local_28 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecRd9_z);
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFiles_026c2690);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      _objc_setAssociatedObject(local_18,DAT_028c6890,local_30,1);
      pcVar2 = local_28;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_nxRd_Nv);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_ybRd);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOperationAlert__026c2708);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_operationAlert_026c2710);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_operationAlert_026c2710);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_operationAlert_026c2710);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

