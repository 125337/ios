// FUN_00334898 @ 00334898

uint FUN_00334898(undefined8 param_1)

{
  long lVar1;
  uint local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  if (local_18 != 0) {
    lVar1 = local_18;
    FUN_0033441c();
    local_28 = (uint)lVar1 ^ 1;
  }
  _objc_storeStrong(&local_18,0);
  return local_28 & 1;
}

