// FUN_00588d98 @ 00588d98

long FUN_00588d98(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_005820e8(local_20,&cf_scheduleMode,0);
  if ((lVar1 < 0) || (local_18 = lVar1, 6 < lVar1)) {
    local_18 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

