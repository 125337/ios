// _WCRefineEnhancedAdBlockShouldFilterFinderItem @ 00f5415c

byte _WCRefineEnhancedAdBlockShouldFilterFinderItem(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  _WCRefineEnhancedAdBlockObjectIsFinderAd();
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    _WCRefineEnhancedAdBlockObjectIsLiveAd();
    bVar1 = (byte)uVar2;
    if ((uVar2 & 1) == 0) {
      _WCRefineEnhancedAdBlockFinderEnabled();
      local_11 = bVar1 & 1;
    }
    else {
      _WCRefineEnhancedAdBlockLiveEnabled();
      local_11 = bVar1 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

