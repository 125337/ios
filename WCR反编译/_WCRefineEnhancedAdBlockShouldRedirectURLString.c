// _WCRefineEnhancedAdBlockShouldRedirectURLString @ 00f5479c

byte _WCRefineEnhancedAdBlockShouldRedirectURLString(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_00f54a68();
    if ((uVar1 & 1) == 0) {
      _WCRefineEnhancedAdBlockMiniProgramEnabled();
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        _WCRefineEnhancedAdBlockURLIsMiniProgramAdLib();
        if ((uVar1 & 1) != 0) {
          FUN_00f54b50(local_20,0,&cf_mini_skip_adlib);
          local_11 = 0;
          goto LAB_00f54a48;
        }
      }
      _WCRefineEnhancedAdBlockNetworkEnabled();
      uVar2 = local_20;
      if ((uVar1 & 1) == 0) {
        _WCRefineEnhancedAdBlockBrandEnabled();
        if ((uVar1 & 1) != 0) {
          uVar1 = local_20;
          FUN_00f54cd4();
          if ((uVar1 & 1) != 0) {
            FUN_00f54b50(local_20,1,&cf_brand);
            local_11 = 1;
            goto LAB_00f54a48;
          }
        }
        _WCRefineEnhancedAdBlockMiniProgramEnabled();
        if ((uVar1 & 1) != 0) {
          uVar1 = local_20;
          FUN_00f54dbc();
          if ((uVar1 & 1) != 0) {
            FUN_00f54b50(local_20,1,&cf_mini_runtime);
            local_11 = 1;
            goto LAB_00f54a48;
          }
        }
        _WCRefineEnhancedAdBlockMomentsEnabled();
        if ((uVar1 & 1) != 0) {
          uVar1 = local_20;
          FUN_00f54ea4();
          if ((uVar1 & 1) != 0) {
            FUN_00f54b50(local_20,1,&cf_moments);
            local_11 = 1;
            goto LAB_00f54a48;
          }
        }
        uVar1 = local_20;
        FUN_00f54fe8();
        if ((uVar1 & 1) != 0) {
          FUN_00f54b50(local_20,0,&cf_allow_ad_related);
        }
        local_11 = 0;
      }
      else {
        FUN_00f54c60();
        _objc_retainAutoreleasedReturnValue();
        FUN_00f53074();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar2 & 1) != 0) {
          FUN_00f54b50(local_20,1,&cf_network);
        }
        local_11 = (byte)uVar2 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
LAB_00f54a48:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

