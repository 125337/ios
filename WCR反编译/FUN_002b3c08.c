// FUN_002b3c08 @ 002b3c08

ulong FUN_002b3c08(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong local_68;
  ulong local_20;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_002ae49c();
  local_18 = param_2;
  if ((uVar1 & 1) != 0) {
    uVar3 = local_20;
    FUN_002ae0dc();
    local_68 = param_2;
    if (uVar3 <= param_2) {
      local_68 = param_2 + 1;
    }
    local_18 = local_68;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

