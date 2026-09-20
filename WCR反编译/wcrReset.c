// wcrReset @ 017d1f1c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrReset(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrSessionID_026b5090);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_clearSessionOptionsForID__026b5170);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrReloadTable_026b5088);
  return;
}

