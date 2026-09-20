// FUN_0088aa74 @ 0088aa74

void FUN_0088aa74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_48 [3];
  long local_30;
  uint local_24;
  undefined8 local_20;
  long local_18;
  
  uVar1 = DAT_02323f00;
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    lVar2 = local_18;
    FUN_0088ac30();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    if (lVar2 != 0) {
      local_48[0] = 0;
      uVar3 = uVar1;
      _CACurrentMediaTime();
      FUN_0088b14c(uVar3,uVar1,local_30,0,8,local_48,0x104);
      _CACurrentMediaTime(local_48[0] - 0x104);
    }
    local_24 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

