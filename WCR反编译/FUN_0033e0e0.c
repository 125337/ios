// FUN_0033e0e0 @ 0033e0e0

void FUN_0033e0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long local_28;
  long local_20;
  long local_18;
  long *plVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  plVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar2,param_3);
  uVar1 = (uint)plVar2;
  FUN_0033e5dc();
  if ((uVar1 & 1) != 0) {
    if (local_18 != 0) {
      FUN_0033e618(local_18);
      FUN_0033eb94(local_18,&cf_setIsCamera_,0);
      FUN_0033ab8c(local_18);
    }
    if (local_20 != 0) {
      FUN_0033ab8c(local_20);
    }
    if (local_28 != 0) {
      FUN_0033ab8c(local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

