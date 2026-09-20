// FUN_006651b4 @ 006651b4

void FUN_006651b4(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  byte local_22;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  local_22 = param_4;
  local_21 = param_3;
  FUN_00662d08();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_0066641c();
  uVar2 = local_20;
  FUN_00669558(local_20,local_21 & 1,local_22 & 1,(uint)uVar1 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

