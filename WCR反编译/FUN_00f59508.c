// FUN_00f59508 @ 00f59508

byte FUN_00f59508(long param_1)

{
  byte local_11;
  
  if (param_1 == 1) {
    _WCRefineEnhancedAdBlockFinderEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 2) {
    _WCRefineEnhancedAdBlockLiveEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 4) {
    _WCRefineEnhancedAdBlockMomentsEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 8) {
    _WCRefineEnhancedAdBlockMiniProgramEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 0x10) {
    _WCRefineEnhancedAdBlockSearchEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 0x20) {
    _WCRefineEnhancedAdBlockBrandEnabled(0);
    local_11 = (byte)param_1 & 1;
  }
  else if (param_1 == 0x40) {
    local_11 = 0;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

