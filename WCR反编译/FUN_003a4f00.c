// FUN_003a4f00 @ 003a4f00

void FUN_003a4f00(undefined8 param_1,undefined8 param_2)

{
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) && (local_20 != 0)) {
    FUN_003ccf44(local_18,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

