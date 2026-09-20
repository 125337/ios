// openCloudBackupSettings @ 01ca19d0

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::openCloudBackupSettings(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  if (IVar1 != 0) {
    puVar2 = PTR_WCRefineCloudBackupSettingsViewController_026cf4d8;
    _objc_alloc_init();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_PushViewController_animated__0269cd40,puVar2,1);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

