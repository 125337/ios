// FUN_0067c91c @ 0067c91c

void FUN_0067c91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_00692998(local_18,local_28);
  (*DAT_028cbd20)(local_18,local_20,local_28,param_4 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

