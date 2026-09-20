// _WCRefineEnhancedAdBlockFinderLogicEnabled @ 00f55608

uint _WCRefineEnhancedAdBlockFinderLogicEnabled(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  _WCRefineEnhancedAdBlockFinderEnabled();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    _WCRefineEnhancedAdBlockLiveEnabled();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

