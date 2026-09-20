// FUN_00743188 @ 00743188

void FUN_00743188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028cc6e0)(local_18,local_20,local_28,local_30,param_5);
  FUN_00756824(local_18);
  FUN_0075701c(local_18);
  _objc_storeStrong(&local_30,0);
  return;
}

