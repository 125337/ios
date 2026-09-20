// FUN_0027b218 @ 0027b218

long FUN_0027b218(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double local_50;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_002798dc(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_0027ac10(uVar1,&cf_bitRate);
    if (uVar1 == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_30;
      FUN_0027ac10(local_30,&cf_durationMs);
      local_50 = (double)uVar2 / 1000.0;
      if (local_50 <= 0.0) {
        uVar2 = local_20;
        FUN_0027ac10(local_20,&cf_videoPlayDuration);
        local_50 = (double)uVar2;
      }
      if (0.0 < local_50) {
        dVar3 = (double)NEON_ucvtf(uVar1);
        local_18 = (long)(dVar3 * 1024.0 * local_50);
      }
      else {
        local_18 = 0;
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

