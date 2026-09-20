// FUN_007428b4 @ 007428b4

void FUN_007428b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028cc6b8)(local_18,local_20,local_28,local_30);
  FUN_00747764();
  uVar1 = local_30;
  FUN_00748910(local_30,0);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar1;
  FUN_0074ee8c(uVar1,local_30);
  FUN_0074f2cc(local_30);
  FUN_0074f554(local_30);
  FUN_0074f804(local_30);
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

