// FUN_00177d0c @ 00177d0c

void FUN_00177d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_48 [3];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_0017a038();
  local_2c = (undefined4)uVar1;
  uVar1 = local_18;
  FUN_0017ce44(local_18,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar1;
  (*DAT_028c8888)(local_18,local_20,uVar1);
  FUN_0017d510(local_18,local_2c,local_48[0]);
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

