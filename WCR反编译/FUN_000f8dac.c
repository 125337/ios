// FUN_000f8dac @ 000f8dac

uint FUN_000f8dac(undefined8 param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint local_44;
  ulong local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_000f915c();
  puVar2 = puVar1;
  _WCRefineChatPositionFeatureAllowed();
  local_44 = 0;
  if ((((ulong)puVar2 & 1) != 0) && (local_44 = 0, ((ulong)puVar1 & 1) != 0)) {
    local_44 = 0;
    if (((ulong)puVar1 & 0x1000000) != 0) {
      uVar3 = local_18;
      FUN_000f91dc();
      local_44 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_18;
        FUN_000f929c();
        local_44 = (uint)uVar3 ^ 1;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

