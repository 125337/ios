// FUN_016bccd4 @ 016bccd4

void FUN_016bccd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  byte local_74;
  long local_40;
  byte local_35;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_016aa360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_74 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    uVar1 = local_28;
    _WCRefineCanQuickPostChatMessageToMomentsFromCell(local_28,local_18);
    local_74 = (byte)uVar1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_35 = local_74 & 1;
  lVar4 = local_20;
  FUN_016bca74(local_20,local_35,&cf_lp_quick_moments,&cf_lW,&cf_icons_outlined_colorful_moment,
               PTR_s_WCRefine_onLongPressQuickPostToM_026b2ad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  local_40 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_applyLongPressOrderToMenuItems__026a9ac0,
             lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

