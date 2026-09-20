// openManagement @ 017902e4

/* Function Stack Size: 0x10 bytes */

void WCPluginsViewControllerBehavior::openManagement(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefinePluginContainerSettingsViewController_026cefd8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginContainerSettingsViewController_026cefd8,PTR_s_new_0269d288);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushController__026b46d8,puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

