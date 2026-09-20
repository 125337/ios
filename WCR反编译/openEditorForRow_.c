// openEditorForRow: @ 01ae93d0

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeAvatarStripSettingsViewController::openEditorForRow_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHaptic_026bab98);
  puVar1 = PTR_WCRefineHomeAvatarStripEditorViewController_026cf348;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setRowIndex__026be208,local_28);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_30,0);
  return;
}

