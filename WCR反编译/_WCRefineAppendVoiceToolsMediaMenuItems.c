// _WCRefineAppendVoiceToolsMediaMenuItems @ 008dd96c

void _WCRefineAppendVoiceToolsMediaMenuItems(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_008ddae4(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_18;
  FUN_008dde20(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_18;
  FUN_008de1f8(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_applyLongPressOrderToMenuItems__026a9ac0,
             local_20);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

