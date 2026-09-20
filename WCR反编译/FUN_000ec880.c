// FUN_000ec880 @ 000ec880

void FUN_000ec880(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = 0;
  local_20 = param_1;
  uStack_18 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_000f11a4(local_20,uStack_18);
  FUN_000f166c(local_28,uVar1,param_4 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

