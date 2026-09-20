// FUN_00225400 @ 00225400

byte FUN_00225400(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  double dVar4;
  ulong local_30;
  long local_28;
  ulong local_20;
  bool local_11;
  ulong *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_001cf8b0();
  if ((((uVar1 & 1) == 0) || (local_28 == 0)) ||
     (uVar3 = local_20, FUN_002238b8(), (uVar3 & 1) == 0)) {
    local_11 = false;
  }
  else {
    _CACurrentMediaTime();
    uVar3 = local_30;
    FUN_00225608();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_30;
      FUN_00225778();
      if ((uVar3 & 1) == 0) {
        dVar4 = param_1;
        FUN_00223ce4(local_28);
        local_11 = param_1 <= dVar4;
      }
      else {
        FUN_00223e8c(0,local_28);
        local_11 = false;
      }
    }
    else {
      FUN_00223e8c(param_1 + 1.5,local_28);
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

