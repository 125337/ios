// cancelActiveSizeCalculation @ 019965c8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::cancelActiveSizeCalculation(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_activeSizeToken_026ba638);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancel_0269d1e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveSizeToken__026ba628);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeSizeToast_026ba648);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveSizeToast__026ba630,0);
  pcVar2 = &cf_privateHideToast;
  _NSSelectorFromString();
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_performSelector__026ca7b8,pcVar2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

