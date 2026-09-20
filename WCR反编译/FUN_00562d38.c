// FUN_00562d38 @ 00562d38

void FUN_00562d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*DAT_028cb4c0)(local_18,local_20,local_28,local_30,local_38);
  if (local_28 == 0) {
    FUN_005707ac(local_18,&cf_delete_finished);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

