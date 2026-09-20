// FUN_00582d30 @ 00582d30

long FUN_00582d30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_98;
  long local_88;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_005820e8(local_20,&cf_loopIntervalMinutes,0);
  local_18 = lVar1;
  if (lVar1 < 1) {
    lVar2 = local_20;
    FUN_00588d98(lVar1);
    if (lVar2 == 1) {
      local_18 = 0x5a0;
    }
    else if (lVar2 == 2) {
      local_98 = local_20;
      FUN_005820e8(local_20,&cf_intervalHours,2);
      if (local_98 < 2) {
        local_98 = 1;
      }
      local_18 = local_98 * 0x3c;
    }
    else if (lVar2 == 3) {
      local_88 = local_20;
      FUN_005820e8(local_20,&cf_intervalMinutes,0x1e);
      if (local_88 < 2) {
        local_88 = 1;
      }
      local_18 = local_88;
    }
    else {
      local_18 = 0x3c;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

