// FUN_0005d074 @ 0005d074

byte FUN_0005d074(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar2 == 8) &&
     (lVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_caseInsensitiveCompare__0269db48,&cf__openwcr), lVar2 == 0)) {
    uVar3 = local_28;
    FUN_0005e9ec();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_onOpenWCRefineSettingVC;
    local_40 = uVar3;
    _NSSelectorFromString();
    uVar3 = local_40;
    local_48 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar3 & 1) == 0) {
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = &cf_WCRefineRootViewController;
        local_50 = puVar5;
        _NSClassFromString();
        puVar5 = local_50;
        local_58 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = local_58 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (puVar5 != (undefined *)0x0 && bVar1) {
          pcVar4 = local_58;
          _objc_alloc_init();
          local_60 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
          puVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_60,0);
        }
        local_11 = 1;
        local_38 = 1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_presentPluginVersionBlockedUpdat_0269db58);
        local_11 = 1;
        local_38 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48);
      local_11 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = 0;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

