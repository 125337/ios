// FUN_0152b9e0 @ 0152b9e0

void FUN_0152b9e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 != 0) {
    if (local_20 == 0) {
      FUN_01560ee4(local_18,local_28);
    }
    else if (local_20 == 1) {
      FUN_01558bec(0,local_18);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

