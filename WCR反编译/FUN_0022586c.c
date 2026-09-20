// FUN_0022586c @ 0022586c

byte FUN_0022586c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 != 0) {
    _CACurrentMediaTime();
    dVar2 = param_1;
    FUN_00223ce4(local_20);
    if (param_1 <= dVar2) {
      uVar1 = local_20;
      FUN_00225a08();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      if ((uVar1 == 0) || (FUN_002238b8(), (uVar1 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        uVar1 = local_38;
        FUN_00223b40();
        _objc_retainAutoreleasedReturnValue();
        local_11 = uVar1 == local_20;
        (*(code *)PTR__objc_release_02578630)();
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
      goto LAB_002259d0;
    }
  }
  local_11 = 0;
  local_30 = 1;
LAB_002259d0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

