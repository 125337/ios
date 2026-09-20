// _WCRefineEnhancedAdBlockWebAdEnabled @ 00f55648

uint _WCRefineEnhancedAdBlockWebAdEnabled(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  _WCRefineEnhancedAdBlockNetworkEnabled();
  local_14 = 1;
  if ((param_1 & 1) == 0) {
    _WCRefineEnhancedAdBlockBrandEnabled();
    local_14 = 1;
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      _WCRefineEnhancedAdBlockMiniProgramEnabled();
      local_14 = uVar1;
    }
  }
  return local_14 & 1;
}

