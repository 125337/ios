// cancelActiveFileOperation @ 019966f4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::cancelActiveFileOperation(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_activeOperationToken_026ba618);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveOperationToken__026ba5e0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeOperationToast_026ba600);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveOperationToast__026ba5e8,0);
  pcVar2 = &cf_privateHideToast;
  _NSSelectorFromString();
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performSelector__026ca7b8,pcVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

