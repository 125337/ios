// FUN_014b0d8c @ 014b0d8c

uint FUN_014b0d8c(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRefineCellIsRestrictedForwardCandidate();
  local_1c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_014b2380();
    local_1c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

