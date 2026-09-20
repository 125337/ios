// _WCRefineTelegramGroupingReloadGateCache @ 0151fbb4

void _WCRefineTelegramGroupingReloadGateCache(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_28;
  byte local_1a;
  byte local_19;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_19 = 1;
  local_18 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_01138c30(&cf_home_telegram_grouping,0);
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_WCRefineAuth_026ce2c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAuth_026ce2c8,PTR_s_hasResolvedGroupAuthorizationFor_0269eb80);
      local_1a = (byte)puVar2;
      puVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_cloudFeatureGateModeForID__026a2e08,&cf_home_telegram_grouping);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
      bVar1 = (byte)puVar2;
      if (((ulong)puVar2 & 1) == 0) {
        if ((local_1a & 1) == 0) {
          local_19 = 1;
        }
        else {
          FUN_00963008();
          local_19 = bVar1;
        }
      }
      else {
        local_19 = 0;
      }
      _objc_storeStrong(&local_28,0);
    }
    else {
      local_19 = 1;
    }
  }
  DAT_028c5dc0 = local_19 & 1;
  _objc_storeStrong(&local_18,0);
  return;
}

