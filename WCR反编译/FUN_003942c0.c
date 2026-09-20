// FUN_003942c0 @ 003942c0

byte FUN_003942c0(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  dVar2 = param_1;
  _CACurrentMediaTime();
  if (0.35 <= dVar2 - param_1) {
    uVar1 = local_20;
    FUN_003d24b0();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

