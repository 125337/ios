// FUN_016bd1ac @ 016bd1ac

void FUN_016bd1ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_applyLongPressOrderToMenuItems__026a9ac0,
             local_18);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

