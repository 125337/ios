// _WCRefineEnhancedAdBlockRedirectSceneTag @ 00f55124

void _WCRefineEnhancedAdBlockRedirectSceneTag(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ***local_20;
  cfstringStruct *local_18;
  
  ppppuVar1 = &local_20;
  local_20 = (undefined8 ****)0x0;
  _objc_storeStrong(ppppuVar1,param_1);
  _WCRefineEnhancedAdBlockNetworkEnabled();
  if (((ulong)ppppuVar1 & 1) == 0) {
    _WCRefineEnhancedAdBlockBrandEnabled();
    if ((((ulong)ppppuVar1 & 1) == 0) ||
       (ppppuVar1 = (undefined8 ****)local_20, FUN_00f54cd4(), ((ulong)ppppuVar1 & 1) == 0)) {
      _WCRefineEnhancedAdBlockMiniProgramEnabled();
      if ((((ulong)ppppuVar1 & 1) == 0) ||
         ((ppppuVar1 = (undefined8 ****)local_20, FUN_00f54dbc(), ((ulong)ppppuVar1 & 1) == 0 &&
          (ppppuVar1 = (undefined8 ****)local_20, _WCRefineEnhancedAdBlockURLIsMiniProgramAdLib(),
          ((ulong)ppppuVar1 & 1) == 0)))) {
        _WCRefineEnhancedAdBlockMomentsEnabled();
        if ((((ulong)ppppuVar1 & 1) == 0) ||
           (ppppuVar1 = (undefined8 ****)local_20, FUN_00f54ea4(), ((ulong)ppppuVar1 & 1) == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_unknown;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf_moments;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_mini;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_brand;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_network;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

