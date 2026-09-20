// _WCRefineEnhancedAdBlockObjectIsFinderAd @ 00f53cfc

byte _WCRefineEnhancedAdBlockObjectIsFinderAd(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00f53f30(local_20,PTR_s_isFromAdsStream_026ac570);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_00f53ff4(local_20,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar1;
      if (((uVar1 == 0) || (uVar1 == local_20)) ||
         (FUN_00f53f30(uVar1,PTR_s_isFromAdsStream_026ac570), (uVar1 & 1) == 0)) {
        uVar1 = local_20;
        FUN_00f540ac(local_20,PTR_s_adFlag_026ac578);
        if ((uVar1 == 0) || (uVar1 == 4)) {
          local_11 = 0;
        }
        else if ((((uVar1 == 8) || ((uVar1 == 0xc || (uVar1 == 0xe)))) || (uVar1 == 0x14)) ||
                (uVar1 - 7 != 0 && 6 < (long)uVar1)) {
          local_11 = 1;
        }
        else {
          uVar2 = local_20;
          _WCRefineEnhancedAdBlockObjectIsLiveAd(uVar1 - 7);
          if ((uVar2 & 1) == 0) {
            uVar1 = local_20;
            FUN_00f53ff4(local_20,PTR_s_adsParams_026ac580);
            _objc_retainAutoreleasedReturnValue();
            local_11 = uVar1 != 0;
            (*(code *)PTR__objc_release_02578630)();
          }
          else {
            local_11 = 1;
          }
        }
      }
      else {
        local_11 = 1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

