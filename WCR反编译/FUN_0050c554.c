// FUN_0050c554 @ 0050c554

void FUN_0050c554(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028cb020)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_0050ebd4();
  uVar1 = local_30;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  else {
    uVar1 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

