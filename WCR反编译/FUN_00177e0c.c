// FUN_00177e0c @ 00177e0c

void FUN_00177e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50 [3];
  undefined4 local_34;
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
  uVar1 = local_18;
  FUN_0017a038();
  local_34 = (undefined4)uVar1;
  uVar1 = local_18;
  FUN_0017ce44(local_18,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_50[0] = uVar1;
  FUN_0017f068(local_18,local_34,uVar1,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  (*DAT_028c8890)(local_18,local_20,local_50[0],uVar2);
  FUN_0017d510(local_18,local_34,local_50[0]);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

