// FUN_00218900 @ 00218900

undefined8 FUN_00218900(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_48;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  FUN_001dac54();
  local_48 = param_1;
  if (local_18 != 0) {
    FUN_001d5a74(local_18);
    local_48 = param_1;
  }
  _objc_storeStrong(&local_18,0);
  return local_48;
}

