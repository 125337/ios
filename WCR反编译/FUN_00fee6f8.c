// FUN_00fee6f8 @ 00fee6f8

void FUN_00fee6f8(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (((DAT_028e30e0 & 1) == 0) || (local_18 == 0)) {
    DAT_028e30e0 = 0;
    DAT_028e30f0 = 0;
  }
  else {
    DAT_028e30f1 = 1;
    _objc_storeWeak(&DAT_028e30b8,local_18);
    DAT_028e3120 = DAT_028e30d8;
    DAT_028e30f2 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

