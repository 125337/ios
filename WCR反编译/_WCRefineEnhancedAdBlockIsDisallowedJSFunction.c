// _WCRefineEnhancedAdBlockIsDisallowedJSFunction @ 00f5587c

byte _WCRefineEnhancedAdBlockIsDisallowedJSFunction(undefined8 param_1)

{
  long *plVar1;
  long local_38;
  byte local_2d;
  undefined4 local_2c;
  long *local_28;
  long *local_20;
  byte local_11;
  
  local_20 = (long *)0x0;
  _objc_storeStrong(&local_20,param_1);
  plVar1 = local_20;
  FUN_00f55bbc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = plVar1;
  (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_length_0269cca0);
  if (plVar1 == (long *)0x0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    local_2d = 0;
    local_38 = 0;
    _WCRefineEnhancedAdBlockNetworkEnabled();
    if (((ulong)plVar1 & 1) == 0) {
      _WCRefineEnhancedAdBlockBrandEnabled();
      if (((ulong)plVar1 & 1) == 0) {
        _WCRefineEnhancedAdBlockMiniProgramEnabled();
        if ((((ulong)plVar1 & 1) != 0) &&
           (plVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_isEqualToString__0269ccc8,&cf_shouldShowSplashAd),
           ((ulong)plVar1 & 1) != 0)) {
          local_2d = 1;
          plVar1 = &local_38;
          _objc_storeStrong(plVar1,&cf_mini_splash);
        }
      }
      else {
        plVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,&cf_getAdIdInfo);
        if (((((ulong)plVar1 & 1) != 0) ||
            (plVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_isEqualToString__0269ccc8,&cf_adDataReport),
            ((ulong)plVar1 & 1) != 0)) ||
           (plVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_isEqualToString__0269ccc8,&cf_openADCanvas),
           ((ulong)plVar1 & 1) != 0)) {
          local_2d = 1;
          plVar1 = &local_38;
          _objc_storeStrong(plVar1,&cf_brand);
        }
      }
    }
    else {
      plVar1 = local_28;
      _WCRefineEnhancedAdBlockFunctionNameIsBlocked();
      if (((ulong)plVar1 & 1) == 0) {
        plVar1 = local_28;
        _WCRefineEnhancedAdBlockIsAdText();
        if (((ulong)plVar1 & 1) != 0) {
          local_2d = 1;
          plVar1 = &local_38;
          _objc_storeStrong(plVar1,&cf_network_adtext);
        }
      }
      else {
        local_2d = 1;
        plVar1 = &local_38;
        _objc_storeStrong(plVar1,&cf_network_blocklist);
      }
    }
    if ((((local_2d & 1) == 0) &&
        (_WCRefineEnhancedAdBlockSearchEnabled(), ((ulong)plVar1 & 1) != 0)) &&
       (plVar1 = local_28, _WCRefineEnhancedAdBlockSearchFunctionNameIsBlocked(),
       ((ulong)plVar1 & 1) != 0)) {
      local_2d = 1;
      _objc_storeStrong(&local_38,&cf_search);
    }
    if ((local_2d & 1) != 0) {
      _WCRefineEnhancedAdBlockNetworkEnabled();
      _WCRefineEnhancedAdBlockBrandEnabled();
      _WCRefineEnhancedAdBlockMiniProgramEnabled();
      _WCRefineEnhancedAdBlockSearchEnabled();
      _WCRefineEnhancedAdBlockLog(&cf_jsfuncblockname___reason___network__dbrand__dmini__dsearch__d)
      ;
    }
    local_11 = local_2d & 1;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

