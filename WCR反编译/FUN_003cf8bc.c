// FUN_003cf8bc @ 003cf8bc

uint FUN_003cf8bc(undefined8 param_1)

{
  ulong uVar1;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_003d0fc4();
  local_1c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    FUN_003cf9fc();
    local_1c = (uint)uVar1;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

