// FUN_0087e290 @ 0087e290

void FUN_0087e290(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (((local_18 != 0) && ((DAT_028cd8a8 & 1) == 0)) &&
     (FUN_0087e34c(local_18), (DAT_028cd8a8 & 1) != 0)) {
    DAT_028cd8a8 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

