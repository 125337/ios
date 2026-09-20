// _WCRefineShouldApplyTransferAmountModify @ 00f15250

uint _WCRefineShouldApplyTransferAmountModify(void)

{
  undefined4 local_14;
  
  local_14 = 0;
  if ((DAT_028e2bb2 & 1) != 0) {
    local_14 = 0;
    _WCRefineShouldApplyClown();
  }
  return local_14 & 1;
}

