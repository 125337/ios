// confirmFolderPick @ 01f7bfb8

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::confirmFolderPick(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_finishFolderPickWithDirector_026c9a58);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

