// openContainerPreview @ 01c8953c

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::openContainerPreview(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _WCRefinePreferredPluginHubViewController();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    FUN_01c7acec(local_18,param_1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

