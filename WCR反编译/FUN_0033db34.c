// FUN_0033db34 @ 0033db34

void FUN_0033db34(undefined8 param_1)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  DAT_028c9ee0 = 1;
  if (local_18 != 0) {
    _objc_storeWeak(&DAT_028c9ed8,local_18);
    FUN_0033ab8c(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

