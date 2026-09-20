// FUN_000c1234 @ 000c1234

void FUN_000c1234(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = param_4;
  FUN_000c17c8();
  if ((uVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028c8190)(local_20,local_28,local_30,param_4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

