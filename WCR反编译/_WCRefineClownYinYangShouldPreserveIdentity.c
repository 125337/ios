// _WCRefineClownYinYangShouldPreserveIdentity @ 00f17e0c

uint _WCRefineClownYinYangShouldPreserveIdentity(undefined8 param_1)

{
  undefined8 uVar1;
  uint local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_1c = 0;
  if ((DAT_028e2b98 & 1) != 0) {
    local_1c = 0;
    if ((DAT_028e2b9e & 1) != 0) {
      uVar1 = local_18;
      _WCRefineClownYinYangOverrideForMessage();
      local_1c = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

