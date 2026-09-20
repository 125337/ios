// FUN_016a6c38 @ 016a6c38

void FUN_016a6c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028e3dd8)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_30 = uVar1;
  FUN_016d0f4c(local_18,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_applyLongPressOrderToMenuItems__026a9ac0,
             local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

