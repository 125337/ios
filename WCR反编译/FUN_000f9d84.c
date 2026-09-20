// FUN_000f9d84 @ 000f9d84

uint FUN_000f9d84(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint local_3c;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  _WCRefineChatPositionFeatureAllowed();
  local_3c = 0;
  if (((ulong)puVar1 & 1) != 0) {
    FUN_000f915c();
    local_3c = 0;
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = local_18;
      FUN_000fa5b4();
      local_3c = 0;
      if ((uVar2 & 1) != 0) {
        uVar2 = local_18;
        FUN_000fa68c();
        local_3c = 0;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_18;
          FUN_000f91dc();
          local_3c = 0;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_18;
            FUN_000f929c();
            local_3c = (uint)uVar2 ^ 1;
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_3c & 1;
}

