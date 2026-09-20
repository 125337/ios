// FUN_000c7280 @ 000c7280

double FUN_000c7280(double param_1,undefined8 param_2)

{
  long lVar1;
  double local_70;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  local_28 = 0;
  FUN_000c7cdc(local_18,&local_20,&local_28);
  FUN_000c7e24();
  local_70 = param_1 - 48.0;
  if (local_70 <= 0.0) {
    local_70 = 0.0;
  }
  lVar1 = local_20 + local_28;
  _objc_storeStrong(&local_18,0);
  return (double)lVar1 + local_70;
}

