// FUN_000c7cdc @ 000c7cdc

void FUN_000c7cdc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  FUN_000c7e88();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  FUN_000c835c();
  if (lVar1 == 0) {
    if (local_20 != (undefined8 *)0x0) {
      *local_20 = 0;
    }
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = 0;
    }
  }
  else {
    FUN_000c8498(local_30,lVar1,local_20,local_28);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

