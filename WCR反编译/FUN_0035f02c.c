// FUN_0035f02c @ 0035f02c

void FUN_0035f02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_003af158(local_20,local_18);
  FUN_003af490(local_28,uVar1,param_4 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

