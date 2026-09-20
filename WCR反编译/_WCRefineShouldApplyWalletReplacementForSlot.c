// _WCRefineShouldApplyWalletReplacementForSlot @ 00f14250

byte _WCRefineShouldApplyWalletReplacementForSlot(long param_1)

{
  byte bVar1;
  byte local_30;
  byte local_11;
  
  if ((DAT_028e2b9f & 1) == 0) {
    local_11 = 0;
  }
  else {
    if (((param_1 != 1) || (bVar1 = 1, (DAT_028e2bb0 & 1) == 0)) && (bVar1 = 0, param_1 == 2)) {
      bVar1 = DAT_028e2bb1;
    }
    local_30 = 0;
    if ((bVar1 & 1) != 0) {
      local_30 = 0;
      _WCRefineCustomAmountFeatureAllowed();
    }
    local_11 = local_30 & 1;
  }
  return local_11;
}

