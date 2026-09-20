// FUN_0089365c @ 0089365c

void FUN_0089365c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_1;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd9e8)(param_1,param_2);
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

