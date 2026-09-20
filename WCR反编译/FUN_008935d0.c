// FUN_008935d0 @ 008935d0

void FUN_008935d0(ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_1;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd9e0)(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

